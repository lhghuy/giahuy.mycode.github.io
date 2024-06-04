#include<stdio.h>

int sum(int a[], int n)
{
	if(n==1)
	return a[0];
	return sum(a,n-1)+a[n-1];
}
int main (){
	int n;
	printf("nhap n: ");
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	if(a<0)
		printf("loi");
	else{
		int t=sum(a,n);
		printf("%d",t);
	}
}

