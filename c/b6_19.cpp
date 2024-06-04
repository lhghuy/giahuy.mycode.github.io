#include <stdio.h>

int main(){
	int a;
	scanf("%d",&a);
	for(int i=1;i<=a;i++){
		for(int j=a;j>i;j--){
			printf("~");
		}
		for(int k=a;k>=i;k--){
			printf("*");
		}
		printf("\n");
	}	
	for(int i=a-1;i>=1;i--){
	    for(int l=a;l>i;l--){
			printf("~");
		}
		for(int m=a;m>=i;m--){
			printf("*");
		}
		printf("\n");}
	return 0;
}
