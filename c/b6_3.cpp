#include<stdio.h>

int main(){
	int a,c=0;
	scanf("%d",&a);
	for(int i=1;i<=a;++i){
	for(int j=a-1;j>=1;--j){
	printf("~");
	while(c>=j&&c<=a){
//	for(int c=0;c>=j&&c<=a;c++){
		printf("*");
		++c;
	}printf("\n");}}
	return 0;
}
