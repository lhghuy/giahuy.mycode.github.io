#include <stdio.h>
#include <math.h>
int dem(int a){
	int dem=0;
	while(a>0)
	{
		++dem;
		a/=10;
	}
	return dem;
}

int ham(int a){
	int c=a,h=0,b,d;
	while(c>0){
	b=c%10;		
	h+=pow(b,dem(a));
	c=c/10;}
//	if (h==a)
//	return 1; return 0;
}

int main(){
	int a,k,l=0,c=0,h=0,b;
	scanf("%d",&a);		
	if(ham(a)==1){printf("1");
	}
	if(ham(a)==0) {printf("0");}

}
