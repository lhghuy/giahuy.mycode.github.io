#include <stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		for(int j=0;j<i-1;j++){
			printf("~");
		}
		for(int h=i;h<=n;++h){
			if(i==n||i==1||h==i||h==n){
				printf("*");
			}
			else{
				printf(".");
			}}
		printf("\n");
	}
	return 0;
}
