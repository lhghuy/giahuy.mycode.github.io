#include <stdio.h>

int main(){
	int a;
	scanf("%d",&a);
	float b=0;
	for(int i=1;i<=a;++i){
		b=b+(1.0/(2*i));
	}printf("%.2f",b);
		return 0;
}
