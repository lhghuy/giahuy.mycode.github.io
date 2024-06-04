#include<stdio.h>

int ucln(int a, int b)
{
	if(a==b)
	{
		return a;
	}
	if(a>b)
	{
		return ucln (a-b,b);
	}
	else
	{
		return ucln(a,b-a);
	}
}
int main (){
	int a,b;
	printf("nhap a, b: ");
	scanf("%d%d",&a,&b);
	if(a<0)
	{
		printf("khong co uoc");
	}
	else
	{
		int u=ucln(a,b);
		printf("%d", u);
	}
	return 0;
}

