#include <stdio.h>

int ktra(int n){
	int a;
		while(n>0){
		a=n%10;
		if(a%2!=0){
			return 0;}
		n/=10;
	}
return 1;
}

int main(){
	int n;
	scanf("%d",&n);
	if(ktra(n)==1){
		printf("1");
	}else{
		printf("0");
	}
	return 0;	
}
