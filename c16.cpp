#include<stdio.h>
int main()
{
	int n,i,c=0;
	printf("enter a number:");
	scanf("%d",&n);
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		c++;
	}
	if(c==0)
    printf("%d is a prime number",n);
	else
	printf("%d is not a prime number",n);	
}
