#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *creerbuff(char *file);
void fermer_file(int efdn);


/**
 * creerbuff - allocates 1024 bytes
 * @file: name of file buffr is storing chars for
 *
 * Return: ptr to the newly-allocated bufer.
 */
char *creerbuff(char *file)
{
char *buffr;

buffr = malloc(sizeof(char) * 1024);

if (buffr == NULL)
{
	dprintf(STDERR_FILENO,
		"Error: Can't write to %s\n", file);
	exit(99);
}


return (buffr);

}

/**
 * fermer_file - closes file descri
 * @efdn: file descriptor being closed
 */
void fermer_file(int efdn)
{
int f;

f = close(efdn);

if (f == -1)
{
	dprintf(STDERR_FILENO, "Error: Can't close efdn %d\n", efdn);
	exit(100);
}
}


/**
 * main - Copies contents of file to another one
 * @argc: The nbr of args supplied
 * @argv: array of ptrs to the args
 *
 * Return: 0 on success
 *
 * Description: If the argument count isn't right - exit code: 97
 * If file_from doesn't exist or cannot be read - exit code: 98
 * If file_to can't be created or written to - exit code: 99
 * If file_to or file_from cannot be closed - exit code: 100
 */
int main(int argc, char *argv[])
{

int origin, to, reaad, y;
char *buffr;

if (argc != 3)
{
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
	exit(97);
}

buffr = creerbuff(argv[2]);
origin = open(argv[1], O_RDONLY);
reaad = read(origin, buffr, 1024);
to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

do {
	if (origin == -1 || reaad == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't read origin file %s\n", argv[1]);
		free(buffr);
		exit(98);
	}

	y = write(to, buffr, reaad);
	if (to == -1 || y == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", argv[2]);
		free(buffr);
		exit(99);
	}

	reaad = read(origin, buffr, 1024);
	to = open(argv[2], O_WRONLY | O_APPEND);

} while (reaad > 0);

free(buffr);
fermer_file(origin);
fermer_file(to);

return (0);

}




