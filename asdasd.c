#include <stdio.h>

int main(void)
{
	char ary[80];
	int count = 0;
	int i;
	
	printf("Input sentence: ");
	gets(ary);
	
	for (i = 0; ary[i] !='\0'; i++)
	{
		
		if (ary[i] >= 'a' && ary[i] <= 'z')
		{
			ary[i] += ('A'-'a');
			count++;
		}
	}
	
	
	printf("Output sentene:");
	puts(ary);
	printf("Changed word count: %d\n", count);
	return 0;
}
