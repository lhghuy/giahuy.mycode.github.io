#include <stdio.h>

int main(){
	long long a;
	scanf("%ld",&a);
	long long  e=0,d=0;
	while(a!=0)
	{long long k=a%10;
	if(k%2==0){
	 d+=k;
	}else{
	e+=k;
	}		
	a/=10;
	}printf("%ld %ld",d,e);
	return 0;
}
