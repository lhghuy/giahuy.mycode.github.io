#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	for(int i = 0; i <= n-1; i++){
		for(int j = 1; j <= i*2; j++)
		printf("~");
		for(int j = n-i; j >=1; j--)
		printf("*");
		printf("\n");
	}
	for(int i = n-1; i>=1; i--){
		for(int j = 1; j <= i*2-2; j++)
		printf("~");
		for(int j = 1; j <= n+1-i; j++)
		printf("*");
		printf("\n");
	}
	return 0;
}
