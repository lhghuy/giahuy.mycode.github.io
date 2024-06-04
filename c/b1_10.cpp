#include <stdio.h>

int main(){
	int a;
	scanf("%d",&a);
	float b=0;
	for(int i=1;i<=a;++i){
		b=b+(1.0/(i*(i+1)));
	}printf("%.2f",b);
	return 0;
}
