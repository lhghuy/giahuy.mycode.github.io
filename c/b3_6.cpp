#include <stdio.h>
#include <math.h>
int main(){
	int a;
	scanf("%d",&a);
	int b=0;
	for(int i=0;i<=a;++i){
		b=b+(i*(pow(-1,i)));
	}printf("%d",b);
	return 0;
}
