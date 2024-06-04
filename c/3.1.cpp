#include<stdio.h>

int sum(int n)
{
	if(n==0)
	return 0;
	return sum(n-1)+n;
}
int main (){
	int n;
	printf("nhap so n>0: ");
	scanf("%d", &n);
	if(n<=0)
		printf("nhap so duong");
	else{
		int t=sum(n);
		printf("tong s(%d): %d\n",n, t);
	}
	return 0;
}

