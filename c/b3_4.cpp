#include <stdio.h>

int main(){
	int a; 
	scanf("%d",&a);
	float b=0;
	for(int i=1;i<=a;++i)
	{b+=1.0/i;}
	printf("%.3f",b);
	
	return 0;
}
