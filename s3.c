#include<stdio.h>
int main()
{
	char n;
	printf("enter a character :");
	scanf("%c",&n);
	if(n=='a' || n=='e' || n=='i' || n=='o' || n=='u')
	{
		printf("vowels");
	}
	else
	{
		printf("consonent");
	}
