#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
* _realloc - ...
*@ptr: pointer to previous memory
*@old_size: size in bytes of allocated space for ptr
*@new_size: size of the new memory
*
* Return: new pointer to the new memory
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
	return (malloc(new_size));
	}

	if (new_size == old_size)
	{
		return (ptr);
	}
	new_ptr = malloc(new_size);
	if (new_ptr != NULL)
	{
		unsigned int copy_size = old_size < new_size ? old_size : new_size;

		memcpy(new_ptr, ptr, copy_size);
		free(ptr);
	}

	return (new_ptr);
}