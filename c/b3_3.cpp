#include <stdio.h>

int main(){
	int a;
	scanf("%d",&a);
	int b=0;
	for(int i=0;i<=a;++i)
	{if(i%3==0) {b+=i;
	}}
printf("%d",b);	
	return 0;
}
