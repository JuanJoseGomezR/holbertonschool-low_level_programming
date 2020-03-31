#include "holberton.h"
/**
 * append_text_to - appends text to the file
 * @filename: file
 * @text_content: content
 * Return: integer
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, text_length = 0;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	while (*(text_content + text_length))
		text_length++;
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	write(fd, text_content, text_length);
	close(fd);
	return (1);
}
