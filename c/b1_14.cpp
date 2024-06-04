#include <stdio.h>

int main(){
	int a,b,c;
	scanf("%d%d",&a,&b);
	if(a%b==0){
	
	int n=a/b*b;
	printf("%d",n);
	}else {
	
	int l=a/b;
	l++;
	c=l*b;
	printf("%d",c);}
	
	return 0;
}
