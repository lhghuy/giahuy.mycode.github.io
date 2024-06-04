#include <stdio.h>

int so(int a){
	int b;
		while(a!=0){
		b=a%10;
		a=a/10;
		}return b;
}
int so1(int a){
	if(a!=0)
	a=a%10;return a;
}
//int so1(int a){
//	int c;
//	while(a==a){
//		c=a%10;
//		++a;
//	}return c;
//}

int main(){
	int a,b,c;
	scanf("%d",&a);
	b=so(a);
	c=so1(a);
	printf("%d %d",b,c);
}
