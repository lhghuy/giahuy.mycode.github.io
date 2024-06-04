#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	if(n%2==0){
		printf("%d\n",n/2);
		for(int i=1;i<=n/2;++i){
			printf("2 ");
		}
	}else if(n%2!=0){
		int dem= n-3;
		printf("%d\n",dem/2+1);
		for (int i=1;i<=dem/2;++i){
			printf("2 ");	
		}
		printf("3");
	}
}
