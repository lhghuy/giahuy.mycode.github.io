#include <stdio.h>

int sntcn(int a,int b){
	if(a%b==0 && b%a==0) return 0;
	for(int i=2;i<=a&&i<=b;i++){
		if(a%i==0&&b%i==0)	return 0;
	}
	return 1;
}

int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	if(sntcn(a,b)==0){
		printf("NO");
	}
	else {printf("YES");
	}
}
