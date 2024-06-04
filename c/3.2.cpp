#include <stdio.h>

int fibonacci(int n)
{
	if (n==0 || n==1)
	return 1;
	return fibonacci(n-1)+fibonacci(n-2);
}
int main (){
	int n;
	printf("nhap n>0: ");
	scanf("%d", &n);
	if(n<0)
	{
		printf("nhap sai! ");
	}
	else
	{
		int f=fibonacci(n);
		printf("f(%d)= %d",n,f);
	}
	return 0;
}

