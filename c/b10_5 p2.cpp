#include <stdio.h>

int main(){
	int n,a,s=1;
	scanf("%d",&n);
	while(n>0){
		a=n%10;
		s*=a;
		n/=10;
	}
	printf("%d",s);
	return 0;
}
