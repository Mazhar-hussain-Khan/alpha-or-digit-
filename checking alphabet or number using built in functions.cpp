/*Name: Mazhar Hussain    Registration No:20MDELE098
Email:20MDELE098@uetmardan.edu.pk */
/*program to find whether a entered character is a number or digit using built in functions*/
#include<stdio.h>
#include<ctype.h>//isdigit() and isalpha() functions in this library//
int main()
{
	char character;
	printf("enter any alphabet or digit\n");
	scanf("%c",&character);
	if(isalpha(character)){
	printf("%c is an alphabet",character);}
	else if(isdigit(character)){
		printf("%c is a digit",character);
	}
	else
	printf("%c is special character",character);
		return 0;
}
