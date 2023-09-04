#include "main.h"

/**
 * append_text_to_file - Appends text at end of file
 * @filename: ptr to the file's name
 * @text_content: str to add to end of file
 *
 * Return: If the func fails orr filename is NULL - -1
 *         If the file does'nt exist, user lose write permissions - -1
 *         ifnot - 1
 */
int append_text_to_file(const char *filename, char *text_content)
{
int i, y, longueur = 0;

if (filename == NULL)
	return (-1);

if (text_content != NULL)
{
	for (longueur = 0; text_content[longueur];)
		longueur++;
}

i = open(filename, O_WRONLY | O_APPEND);
y = write(i, text_content, longueur);

if (i == -1 || y == -1)
	return (-1);

close(i);


return (1);

}




