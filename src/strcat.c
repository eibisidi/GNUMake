#include <string.h>

void concatenate(const char *str1, const char *str2, char *dest)
{
	strcpy(dest, str1);
	strcat(dest, str2);
}