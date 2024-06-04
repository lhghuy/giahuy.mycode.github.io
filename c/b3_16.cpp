#include <stdio.h>
int main(){
	long long a;
	int c=0;
	scanf("%lld",&a);
	while(a!=0)
	{int k=a%10;
	if(k==2 || k==3 || k==5 || k==7)
	{c+=1;}
	a/=10;}
	printf("%d",c);	
	return 0;
	
}
