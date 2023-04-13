#include "main.h"

void print_err(char *err);
void print_magic(Elf64_Ehdr *fh);
void print_class(Elf64_Ehdr *fh);
void print_data(Elf64_Ehdr *fh);
void print_type(Elf64_Ehdr *fh);
void print_version(Elf64_Ehdr *fh);
void print_osabi(Elf64_Ehdr *fh);
void print_abiversion(Elf64_Ehdr *fh);
void print_epa(Elf64_Ehdr *fh);
/**
 * ensure_is_elf - print
 * @fh: 16 bypes string of elf header
 *
 * Description: check if file is an elf file. Exit in not an
 * elf header
 *
 * Return: void
 */
void ensure_is_elf(Elf64_Ehdr *fh)
{
	if (
		fh->e_ident[0] != EI_MAG0 &&
		fh->e_ident[1] != EI_MAG1 &&
		fh->e_ident[2] != EI_MAG2 &&
		fh->e_ident[3] != EI_MAG3
	)
		print_err("File is not an elf file.");
}

/**
 * print_magic - print
 * @fh: 16 bypes string of elf header
 *
 * Description: print the magic part of the
 * elf header
 *
 * Return: void
 */
void print_magic(Elf64_Ehdr *fh)
{
	int i;

	for (i = 0; i < EI_NIDENT; i++)
	{
		if (i == 0)
			printf(" Magic: ");

		printf("%02x", fh->e_ident[i]);

		if (i + 1 < EI_NIDENT)
			printf(" ");
		else
			printf("\n");
	}
}

/**
 * print_class - print
 * @fh: 16 bypes string of elf header
 *
 * Description: print the class part of the
 * elf header
 *
 * Return: void
 */
void print_class(Elf64_Ehdr *fh)
{
	printf(" Class: ");

	switch (fh->e_ident[EI_CLASS])
	{
		case ELFCLASSNONE:
			printf("none\n");
			break;
		case ELFCLASS32:
			printf("ELF32\n");
			break;
		case ELFCLASS64:
			printf("Elf64\n");
			break;
		default:
			printf("<unknown %x>\n", fh->e_ident[EI_CLASS]);
	}
}

/**
 * print_data - print
 * @fh: 16 bypes string of elf header
 *
 * Description: print the data part of the
 * elf header
 *
 * Return: void
 */
void print_data(Elf64_Ehdr *fh)
{
	printf(" Data: ");

	switch (fh->e_ident[EI_DATA])
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
			printf("<unknown %x>\n", fh->e_ident[EI_DATA]);
	}
}

/**
 * print_version - print
 * @fh: 16 bypes string of elf header
 *
 * Description: print the version part of the
 * elf header
 *
 * Return: void
 */
void print_version(Elf64_Ehdr *fh)
{
	printf(" Version: %d", fh->e_ident[EI_VERSION]);

	if (fh->e_ident[EI_VERSION] == EV_CURRENT)
		printf(" (current)");
	printf("\n");
}

/**
 * print_osabi - print
 * @fh: 16 bypes string of elf header
 *
 * Description: print the OS/ABI part of the
 * elf header
 *
 * Return: void
 */
void print_osabi(Elf64_Ehdr *fh)
{
	printf(" OS/ABI: ");

	switch (fh->e_ident[EI_OSABI])
	{
		case ELFOSABI_SYSV:
			printf("UNIX - System V\n");
			break;
		case ELFOSABI_HPUX:
			printf("UNIX - HP-UX\n");
			break;
		case ELFOSABI_NETBSD:
			printf("UNIX - NetBSD\n");
			break;
		case ELFOSABI_LINUX:
			printf("UNIX - Linux\n");
			break;
		case ELFOSABI_SOLARIS:
			printf("UNIX - Solaris\n");
			break;
		case ELFOSABI_IRIX:
			printf("UNIX - IRIX\n");
			break;
		case ELFOSABI_FREEBSD:
			printf("UNIX - FreeBSD\n");
			break;
		case ELFOSABI_TRU64:
			printf("UNIX - TRU64\n");
			break;
		case ELFOSABI_ARM:
			printf("ARM\n");
			break;
		case ELFOSABI_STANDALONE:
			printf("Standalone App\n");
			break;
		default:
			printf("<unknown %x>\n", fh->e_ident[EI_OSABI]);
	}
}

/**
 * print_abiversion - print
 * @fh: 16 bypes string of elf header
 *
 * Description: print the ABI version part of the
 * elf header
 *
 * Return: void
 */
void print_abiversion(Elf64_Ehdr *fh)
{
	printf(" ABI Version: %d\n", fh->e_ident[EI_ABIVERSION]);
}

/**
 * print_type - print
 * @fh: 16 bypes string of elf header
 *
 * Description: print the type part of the
 * elf header
 *
 * Return: void
 */
void print_type(Elf64_Ehdr *fh)
{
	unsigned int e_type = fh->e_type;

	printf(" Type: ");

	if (fh->e_ident[EI_DATA] == ELFDATA2MSB)
		e_type >>= 8;

	switch (e_type)
	{
		case ET_NONE:
			printf("NONE (None)\n");
			break;
		case ET_REL:
			printf("REL (Relocatable file)\n");
			break;
		case ET_EXEC:
			printf("EXEC (Executable file)\n");
			break;
		case ET_DYN:
			printf("DYN (Shared object file)\n");
			break;
		case ET_CORE:
			printf("CORE (Core file)\n");
			break;
		default:
			printf("<unknown: %x>\n", e_type);
	}
}

/**
 * print_epa - print
 * @fh: 16 bypes string of elf header
 *
 * Description: print the Entry point address part of the
 * elf header
 *
 * Return: void
 */
void print_epa(Elf64_Ehdr *fh)
{
	unsigned long int e_entry = fh->e_entry;

	printf(" Entry point address: ");

	if (fh->e_ident[EI_DATA] == ELFDATA2MSB)
	{
		e_entry = ((e_entry << 8) & 0xFF00FF00) |
			((e_entry >> 8) & 0xFF00FF);
		e_entry = (e_entry << 16) | (e_entry >> 16);
	}

	if (fh->e_ident[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int)e_entry);

	else
		printf("%#lx\n", e_entry);
}

/**
 * _close - close
 * @fd: file descriptor
 *
 * Description: close file descriptor and exit
 *
 * Return: void
 */
void _close(int fd)
{
	int res;

	res = close(fd);

	if (res == -1)
		print_err("Failed to close file.");
}

/**
 * print_err - print err
 * @err: string
 *
 * Description: print error based on the string passed and exit
 *
 * Return: void
 */
void print_err(char *err)
{
	dprintf(STDERR_FILENO, "Error: %s\n", err);
	exit(98);
}

/**
 * main - print elf header
 * @arc: number of arguments
 * @argv: arguments in the form of pointer of strings
 *
 * Description: print the elf header section of a header file
 *
 * Return: returns 0 (Success)
 */
int main(int arc, char **argv)
{
	int fd;
	Elf64_Ehdr *fh;

	if (arc != 2)
		print_err("No file was provided.");

	fd = open(argv[1], O_RDONLY)
	if (fd == -1)
		print_err("Opening file failed.");

	fh = malloc(sizeof(Elf64_Ehdr));
	if (fh == NULL)
		print_err("Failed to allocate memory.");

	if (read(fd, fh, sizeof(Elf64_Ehdr)))
		print_err("Reading header failed.");

	ensure_is_elf(fh);
	print_magic(fh);
	print_class(fh);
	print_data(fh);
	print_version(fh);
	print_osabi(fh);
	print_abiversion(fh);
	print_type(fh);
	print_epa(fh);
	_close(fd);
	return (0);
}
