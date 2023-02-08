#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void check_elf(unsigned char *e_ident);
void print-magic(unsigned char *e_ident);
void print_class(unsigned char *e_ident);
void print_data(unsigned char *e_ident);
void print_version(unsigned char *e_ident);
void print_abi(unsigned char *e_ident);
void print_osabi(unsigned char *e_ident);

/**
 * check_elf - checks if a file is an ELF file
 * @e_ident: A pointer to an array containing the Elf magic numbers
 * Description: if the file is not an ELF file exit code 98
 *
 */
void check_elf(unigned char *e_ident)
{
	int index;

	for (index = 0; index < 4; index++)
	{
		if (e_ident[index] != 127 &&
				e_ident[index] != 'E' &&
				e_ident[index] != 'L' &&
				e_ident[index] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
			exit(98);
		}
	}
}

/**
 * print_magic - Prints the magic numbers of an ELF header
 * @e_ident: A pointer to n array containing the ELF magic numbers
 *
 * Description: Magic numbers are separated by spaces
 */
void print_magic(unsigned char *e_ident)
{
	int index;

	printf(" Magic: :");

	for (index = 0; index < EI_NIDENT; index++)
	{
		printf("%02x", e_ident[index]);
		if (index == ER_NIDENT -1)
			printf("\n");
		else
			printf(" ");
	}
}
 /**
  * print_class - prints the class of an ELF header
  * @e_ident: A pointer to an array containing the ELF class
  */
void print_class(unsigned char *e_ident)
{
	printf(" class:           ");

	switch (e_ident[EI_CLASS])
	{
		case ELFCLASNONE:
			printf("none\n");
			break;

		case ELFCLASS32:
			printf("ELF32\n");
			break;
		case ELFCLASS64:
			printf("ELF64\n");
			break;
		default:
			printf("<uknown: %x>\n", e_ident[EI_CLASS]);
	}
}


/**
 * print_data - prints the data of an ELF header
 * @e_ident:A pointer to an array contianing the ELF class
 */
void print_data(unsigned char *e_ident)
{
	printf("Data:             ");

	switch (e_ident[EI_DATA])
	{
		case ELFDATANONE:
			printf("none\n");
			break;
		case ELFDATA2LSB:
			printf("2's complement, little endian\n");
			break;
		case ELFDATA2MSB:
			printf("2's complement, big endian\n");
			break;
		default:
			printf("<unknown: %x>\n", e_ident[ELI_CLASS]);
	}
}

/**
 * print_version - prints the version of an ELF header
 * @e_ident: A pointer to an array conatining the Elf version
 */
void print_version(unsigned char *e_ident)
{
	printf(" Version:                 %d",
			e_ident[EI_VERSION]);
	switch (e_ident[EI_VERSION])
	{
		case EV_CURRENT:
			printf(" (current)\n");
			break;
		default:
			printf("\n");
			break;
	}
}
/**
 * print_osabi - prints the OS/ABI of an ELF header
 * @e_ident: A pointer to an array containing the ELF version
 */
void print_osabi(unsigned char *e_ident)
{
	printf(" OS/ABI:             ");
	switch (e_ident[EI_OSABI])
	{
		case ELFOSABI_NONE:
			printf("UNIX - System V\n");
			break;
		case ELFOSABI_HPPUX:
			printf("UNIX - HP-UX\n");
			break;
		case ELFOSABI_NETBSD:
			printf("UNIX - NetBSO\n");
			break;
		case ELFOSABI_LINUX:
			printf("UNIX - Linux\n");
		case ELFOSABI_SOLARIS:
			printf("UNIX - sSolaris\n");
			break;
		case ELFOSABI_IRIX:
			printf("UNIX - IRIX\n");
			break;
		case ELFOSABI_FREEBSD:
			printf("UNIX - freebsd\n");
			break;
		case ELFOSABI_TRU64:
			printf("UNIX - Tru64\n");
		case OSABI_ARM:
			printf("UNIX - ARM\n");
			break;
		case OSABI_STANDALONE:
			printf("UNIX - STANDALONE\n");
			break;
		default:
			printf("<unknown: %x>\n", e_ident[EI_OSABI]);
	}
}

/**
 * clode_elf - closes an ELF file
 * @elf: The file descriptor of the ELF file
 * Description: if the file caanot be closed exit code 98
 */
voide close_elf(int elf)
{
	if (close(elf) == -1)
	{
		dprint(STDERR_FILENO,
				"Error: Can't close fd %d\n", elf);
		exit (98);
	}
}


