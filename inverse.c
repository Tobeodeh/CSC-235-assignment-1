#include<stdio.h>
#include<string.h>
void reverse();
int main()
{
	printf("Enter sentence to reverse: ");
	reverse();
	return 0;	
}

void reverse()
{
	char c;
	gets("%c", &c);
	if (c != '\n')
	{
		reverse();
		printf("%c", c);
	}
}
