

#include <stdio.h>
/**
* main - prints a string
* description - this uses the main function
* Return : 0
*/

int main(void)
{	
	char c;
	int i;
	long li;
	long long lli;
	float f;
	
	printf("size of char: %ld byte(s)\n", sizeof(c));
	printf("size of an int: %ld byte(s)\n", sizeof(i));
	printf("size of a long int: %ld byte(s)\n", sizeof(li));
	printf("size of a long long init: %ld byte(s)\n", sizeof(lli));
	printf("size of a float: %ld byte(s)\n", sizeof(f));
	return (0);
}
