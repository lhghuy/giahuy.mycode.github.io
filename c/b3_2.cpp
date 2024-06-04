#include <stdio.h>
#include <math.h>
int main(){
	int a;
	scanf("%d",&a);
	long long b=0;
	for(int i=1;i<=a;++i)
	{
		b+=i*i;
		}
	printf("%lld",b);
	return 0;
}
