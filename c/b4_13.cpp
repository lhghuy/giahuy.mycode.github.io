#include <stdio.h>

int tn(int n){
	int tmp = n;
	int d=0;
	while(n){
		d = d*10 + n%10;
		n/=10;
	}
	if(d==tmp) return 1;
	else return 0;
}

int check6(int n){
	while(n){
		int x = n%10;
		if(x==6) return 1;
		n/=10;
	}
	return 0;
}

int tong(int n){
	int sum=0;
	while(n){
		sum += n%10;
		n/=10;
	}
	if(sum%10==8) return 1;
	return 0;
}

int main () {
	int a,b; scanf("%d%d",&a,&b);
	int ok =0;
	for(int i=a;i<=b;++i){
		if(tn(i)==1&&check6(i)==1&&tong(i)==1){
			printf("%d ",i);
			ok =1;
		}
	}
	if(ok ==0) printf("0");
}

