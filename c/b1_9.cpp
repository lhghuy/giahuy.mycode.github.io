#include <stdio.h>
#include <math.h>
int main(){
	int a;
	scanf("%d",&a);
	int b=0;
	for(int i=1;i<=a;++i){
		b=b+pow(i,2);
	}
	printf("%d",b);
	return 0;
}
