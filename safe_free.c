#include "main.h"
/**
 * safe_free - custom free function for safe freeing
 * @ptr: The ptr to be freed
 * Return: Nothing
 */

void safe_free(void *ptr)
{
	free(ptr);
	ptr = NULL;
}
