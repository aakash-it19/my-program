#include<stdio.h>
void main()
{
	int c,n,fact=1;
	printf("ENTER THE NUMBER:");
	scanf("%d",&n);
	for(c=n;c>1;c--)
	{
		fact=fact*c;
	}
	printf("factorial of %d = %d",n,fact);
}
