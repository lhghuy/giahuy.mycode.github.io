#include <stdio.h>

int main(){
	int a,p=0;
	scanf("%d",&a);
	for(int i=1;i<=a;++i){
		for(int j=1;j<=a;j++){
			p++;
		printf("%d ",p);	
		}
		printf("\n");
	}
	return 0;
}
