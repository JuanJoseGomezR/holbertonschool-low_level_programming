#include "holberton.h"
/**
* create_file - creates a file
* @filename: points
* @text_content: content
* Return: integer
*/

int create_file(const char *filename, char *text_content)
{
    int text_length, fd;

    if (filename == NULL)
        return (-1);
    if (text_content == NULL)
        text_content = "";

    while (*text_content != '\0')
        text_length++;

    fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

    if (fd == -1)
        return (-1);

    write(fd, text_content, text_length);
    close(fd);
    return (1);
}
