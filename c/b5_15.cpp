#include <stdio.h>

int so1(int a){
	int dem=0;
	while(a>0){
		dem+=1;
		a/=10;
	}	return dem;
}

int so2(int b){
	int dem=0;
	while(b>0){
		dem+=1;
		b/10;
	}return dem;
}

int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	int c=so1(a);
	int d=so2(b);
	if(c>d){
		printf("%d %d",a,b);
	}if(d>c){
		printf("%d %d",b,a);
	}if(c==d){
		printf("%d %d",a,b);
	}
}
