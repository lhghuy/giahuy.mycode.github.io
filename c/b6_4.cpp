#include <stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		for(int j=n;j>=i;j--){
			if(j==1||j==n||i==j||i==1){
				printf("*");
			}
			else {
				printf(".");
			}
		}
		printf("\n");
	}
	return 0;
}
