#include <stdio.h>

int main(){
	long long a;
	scanf("%lld",&a);
	int b=0;
	int c=0;
	while(c<a){
	b+=1;
	a/=10;
	}
	printf("%d",b);
	return 0;
}
