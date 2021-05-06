#include<stdio.h>
int sum(int);
int main()
{
	int num,s;
	printf("Input number: ");
	scanf("%d",&num);
	s=sum(num);
	printf("Sum of digits: %d",s);
	return 0;
}
int sum(int n)
{
	if(n==0)
		return 0;
	else
		return (n%10+sum(n/10));
}
