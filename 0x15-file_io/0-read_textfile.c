#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file print to STDOUT
 * @filename: the text file to be read
 * @letters: nbr of letters to be rd
 * Return: y- num of bytes read and printed
 *        0 when fun fails or filename is null
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
char *buffe;
ssize_t efdn;	
ssize_t temp;
ssize_t y;

efdn = open(filename, O_RDONLY);
if (efdn == -1)
	return (0);
buffe = malloc(sizeof(char) * letters);
temp = read(efdn, buffe, letters);
y = write(STDOUT_FILENO, buffe, temp);

free(buffe);
close(efdn);
return (y);

}





