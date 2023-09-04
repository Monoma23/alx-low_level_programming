#include "main.h"

/**
 * create_file - it creates file
 * @filename: ptr to the name of file to be created
 * @text_content: ptr to a str to write to the file
 *
 * Return: If the funct fails - -1
 *         ifnot - 1.
 */
int create_file(const char *filename, char *text_content)
{
int efdn, y, longueur = 0;

if (filename == NULL)
	return (-1);

if (text_content != NULL)
{
	for (longueur = 0; text_content[longueur];)
		longueur++;
}

efdn = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
y = write(efdn, text_content, longueur);

if (efdn == -1 || y == -1)
	return (-1);

close(efdn);

return (1);

}





