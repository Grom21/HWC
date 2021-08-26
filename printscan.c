#include <stdio.h>

int main()
{
/*	char ch = 'A';
	char str[20] = "fresh2refresh.com";
	float flt = 10.234;
	int no = 150;
	double dbl = 20.123456;

	printf("Character is %c \n", ch);
 	printf("String is %s \n", str);
	printf("Float value is %f \n", flt);
	printf("Integer value is %d \n" , no);
	printf("Double value is %lf \n", dbl);
	printf("Octal value is %o \n", no);
	printf("Hexadecimal value is %x \n", no);

*/	
	char chr;
	char strn[100];

	printf("Enter any character \n");
	scanf("%c", &chr);
	printf("Entered character is %c \n", chr);
	printf("Enter any string ( upto 100 character ) \n");
	scanf("%99s", &strn);
	printf("Entered string is %s \n", strn);
	
	return 0;
}
