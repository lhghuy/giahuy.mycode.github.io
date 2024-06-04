#include <stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		for(int j=n-1;j>=i;j--){
			printf("~");
		}
		for(int k=1;k<=i;k++){
			if(k==1||k==n||i==k||i==n){
			printf("*");
			}
			else
			{
			printf(".");
			}}
		printf("\n");
	}
	return 0;
}
