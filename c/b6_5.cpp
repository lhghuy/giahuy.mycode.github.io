#include <stdio.h>

int main(){
	int a;
	scanf("%d",&a);
	for(int i=1;i<=a;i++){
		for(int j=1;j<=i;j++){
			printf("*");}
	printf("\n");
}
	for(int i=a-1;i>=1;i--){
		for(int l=i;l>=1;l--){
			printf("*");
		}
		printf("\n");}
return 0;
}
