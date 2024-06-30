// to print the range of short signed integer ( in this the integer the size of integer as 2 byte)
#include <stdio.h>
#include <limits.h>

int main()
{
	short int var1 = SHRT_MIN;
	short int var2 = SHRT_MAX;

	printf("range of short signed integer is from : %d to %d ", var1, var2);
	return 0;
}
