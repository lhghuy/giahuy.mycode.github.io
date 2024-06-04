#include <stdio.h>

int main(){
	int a; scanf("%d",&a);
	for(int b=1;b<=a;++b){
	for(int i=1;i<=b;++i){
	if(b==1||b==a||i==1||i==b)
	printf("*");
	else printf(".");
	}
	printf("\n");}
}
