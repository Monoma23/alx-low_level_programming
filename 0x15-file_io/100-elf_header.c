#include <fcntl.h>
#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>


void display_class(unsigned char *e_ident);
void display_data(unsigned char *e_ident);
void display_version(unsigned char *e_ident);
void verify_elf(unsigned char *e_ident);
void display_magic(unsigned char *e_ident);
void display_abi(unsigned char *e_ident);
void display_osabi(unsigned char *e_ident);
void display_type(unsigned int e_type, unsigned char *e_ident);
void display_entry(unsigned long int e_entry, unsigned char *e_ident);
void fermer_elf(int elf);

/**
 * verify_elf - verify if file is an ELF one
 * @e_ident: ptr to an array with the ELF magic nbrs
 *
 * Description: If the file isn't an ELF one - exit code 98
 */
void verify_elf(unsigned char *e_ident)
{
int indicateur;

for (indicateur = 0; indicateur < 4; indicateur++)
{
	if (e_ident[indicateur] != 127 &&
		e_ident[indicateur] != 'E' &&
		e_ident[indicateur] != 'L' &&
		e_ident[indicateur] != 'F')
	{
		dprintf(STDERR_FILENO, "errorrr: Not an ELF file\n");
		exit(98);
	}
}

}

/**
 * display_magic - display magic nmbrs of an ELF header
 * @e_ident: ptr to an array with the ELF magic nums
 *
 * Description: Magic nbrs eparated with espace
 */
void display_magic(unsigned char *e_ident)
{
int indicateur;

printf(" Magic: ");

for (indicateur = 0; indicateur < EI_NIDENT; indicateur++)
{
	printf("%02x", e_ident[indicateur]);

	if (indicateur == EI_NIDENT - 1)
		printf("\n");
	else
		printf(" ");
}

}

/**
 * display_class - display the class of ELF header
 * @e_ident: ptr to an array with ELF class
 */

void display_class(unsigned char *e_ident)
{
printf(" Class: ");

switch (e_ident[EI_CLASS])
{
case ELFCLASSNONE:
	printf("none\n");
	break;
case ELFCLASS32:
	printf("ELF32\n");
	break;
case ELFCLASS64:
	printf("ELF64\n");
	break;
default:
	printf("<unknown: %x>\n", e_ident[EI_CLASS]);
}

}

/**
 * display_data - display the data of an ELF header
 * @e_ident: ptr to an array with ELF class
 */

void display_data(unsigned char *e_ident)
{
printf(" Data: ");

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
	printf("<unknown: %x>\n", e_ident[EI_CLASS]);
}

}

/**
 *  * display_version - display the version of  ELF header
 *   * @e_ident: ptr to an array with ELF version
 *    */
void display_version(unsigned char *e_ident)
{
printf(" version: %d",
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
 * display_osabi - display the OS/ABI of an ELF header
 * @e_ident: A ptr to an array with the ELF version
 */
void display_osabi(unsigned char *e_ident)
{
printf(" OS/ABI: ");

switch (e_ident[EI_OSABI])
{
case ELFOSABI_NONE:
	printf("uniix - System V\n");
	break;
case ELFOSABI_HPUX:
	printf("uniix - HP-UX\n");
	break;
case ELFOSABI_NETBSD:
	printf("uniix - NetBSD\n");
	break;
case ELFOSABI_LINUX:
	printf("uniix - Linux\n");
	break;
case ELFOSABI_SOLARIS:
	printf("uniix - Solaris\n");
	break;
case ELFOSABI_IRIX:
	printf("uniix - IRIX\n");
	break;
case ELFOSABI_FREEBSD:
	printf("uniix - FreeBSD\n");
	break;
case ELFOSABI_TRU64:
	printf("uniix - TRU64\n");
	break;
case ELFOSABI_ARM:
	printf("ARM\n");
	break;
case ELFOSABI_STANDALONE:
	printf("Standalone App\n");
	break;
default:
	printf("<unknown: %x>\n", e_ident[EI_OSABI]);
}

}

/**
 * display_abi - display the ABI version of ELF header
 * @e_ident: ptr to an array with ELF ABI version
 */
void display_abi(unsigned char *e_ident)
{
	printf(" ABI version: %d\n",
		e_ident[EI_ABIVERSION]);
}

/**
 * display_type - display type of an ELF header
 * @e_type: The ELF type
 * @e_ident: ptr to an array with the ELF class
 */
void display_type(unsigned int e_type, unsigned char *e_ident)
{
	if (e_ident[EI_DATA] == ELFDATA2MSB)
		e_type >>= 8;

	printf(" Type: ");

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
 * display_entry - display the entry pt of an ELF header
 * @e_entry: address of the ELF entry pt
 * @e_ident:  ptr to an array with ELF class
 */
void display_entry(unsigned long int e_entry, unsigned char *e_ident)
{
	printf(" Entry pt address: ");

	if (e_ident[EI_DATA] == ELFDATA2MSB)
	{
		e_entry = ((e_entry << 8) & 0xFF00FF00) |
			  ((e_entry >> 8) & 0xFF00FF);
		e_entry = (e_entry << 16) | (e_entry >> 16);
	}

	if (e_ident[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int)e_entry);

	else
		printf("%#lx\n", e_entry);
}

/**
 * fermer_elf - Closes an ELF file
 * @elf: file descriptor of the ELF file
 *
 * Description: when the file can't be closed - exit code 98
 */
void fermer_elf(int elf)
{
	if (close(elf) == -1)
	{
		dprintf(STDERR_FILENO,
			"errorrr: cannot't close fd %d\n", elf);
		exit(98);
	}
}

/**
 * main - Displays the info in the
 * ELF header at the beginning of ELF file
 * @argc: nbr of args supplied to program
 * @argv: array of ptrs to the args
 *
 * Return: 0 when succeed
 *
 * Description: If the file isn't an ELF File or
 * the func fails - exit code 98
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
Elf64_Ehdr *header;
int op, rrd;

op = open(argv[1], O_RDONLY);
if (op == -1)
{
	dprintf(STDERR_FILENO, "errorrr: cannot't read file %s\n", argv[1]);
	exit(98);
}
header = malloc(sizeof(Elf64_Ehdr));
if (header == NULL)
{
	fermer_elf(op);
	dprintf(STDERR_FILENO, "errorrr: cannot't read file %s\n", argv[1]);
	exit(98);
}
rrd = read(op, header, sizeof(Elf64_Ehdr));
if (rrd == -1)
{
	free(header);
	fermer_elf(op);
	dprintf(STDERR_FILENO, "errorrr: `%s`: No such file\n", argv[1]);
	exit(98);
}

verify_elf(header->e_ident);
printf("ELF Header:\n");
display_magic(header->e_ident);
display_class(header->e_ident);
display_data(header->e_ident);
display_version(header->e_ident);
display_osabi(header->e_ident);
display_abi(header->e_ident);
display_type(header->e_type, header->e_ident);
display_entry(header->e_entry, header->e_ident);

free(header);
fermer_elf(op);
return (0);

}


