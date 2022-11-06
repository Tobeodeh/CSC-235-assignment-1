#include<stdio.h>
#define Length 10
#define Line_length 50
int main(void)
{
	char names[Line_length][Length];
	for (int i = 0; i < Length; i++)
	{
	   printf("ENTER YOUR NAME: [%s]", i)
	   gets(names[i])
	   
	}
	
	//displaying result
	for (int i = 0; i < Length; i++)
	{
	    printf("\n %s",names[i]);
	}
        return 0;
}
