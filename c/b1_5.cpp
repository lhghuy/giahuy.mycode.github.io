#include <stdio.h>
#include <math.h>
int main(){
	int a;
	scanf("%d",&a);
	int b=0;
	for(int i=0;i<=a;++i){
		b=b+(pow(-1,i)*i);
	}
	printf("%d",b);
return 0;
}
