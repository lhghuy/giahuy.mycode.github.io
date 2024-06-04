#include <stdio.h>

int giaithua(int a){
	int d;
	int f=0,p=1,h,i=0; 
	while(a!=0){
		d=a%10;
		h=1;
		for(int m=1;m<=d;++m){
			h*=m;}f+=h;
		a=a/10;
	} 
	return f;
} 

int main(){
	int a,c;
	scanf("%d",&a);
		c=giaithua(a);
	if(c==a){
		printf("1");
	}	else {
		printf("0");
	}}

