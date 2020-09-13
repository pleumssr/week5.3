#include<stdio.h>
#include<string.h>
int main()
{
	int i;
	char x;
	scanf_s("%c", &x);
	if (x == 'a' || x == 'e'|| x == 'i'|| x == 'o'|| x == 'u')
	{
		printf("There is vowel");
	}
	else printf("There not is vowel");
	return 0;
}