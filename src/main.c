#include "print.h"
#include "strcat.h"

int main()
{
	char buffer[256];
	concatenate("hello ", "world!", buffer);
	print(buffer);
	print("\n");
	return 0;
}