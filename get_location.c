#include "main.h"
/**
 * get_location - Get the location of a command in the PATH.
 * @command: The command to search for.
 * Return: The full path to the command or NULL if not found.
 */
char *get_location(char *command)
{
	char *path, *path_copy = NULL, *path_token = NULL, *file_path = NULL;
	int command_length, directory_length;
	struct stat buffer;

	path = getenv("PATH");
	if (path && command != NULL)
	{
		path_copy = _strdup(path);
		command_length = _strlen(command);
		path_token = strtok(path_copy, ":");
		while (path_token != NULL)
		{
			directory_length = _strlen(path_token);
			file_path = malloc(command_length + directory_length + 2);
			_strcpy(file_path, path_token);
			_strcat(file_path, "/");
			_strcat(file_path, command);
			_strcat(file_path, "\0");
			if (stat(file_path, &buffer) == 0)
			{
				return (file_path);
			}
			else
			{
				safe_free(file_path);
				path_token = strtok(NULL, ":");
			}
		}
		if (stat(command, &buffer) == 0)
		{
			free_args(3, file_path, path_copy, path_token);
			return (command);
		}
		return (NULL);
	}
	free_args(3, path, path_token, file_path);
	return (NULL);
}
