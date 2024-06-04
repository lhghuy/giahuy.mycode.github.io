#include <stdio.h>

long long stn(long long n){
	long long dao=0;
	while(n){
		int x = n%10;
		dao=dao*10+x;
		n/=10;
	}
	return dao;
}


int main(){
	int t;
	scanf("%d",&t);
	for(int i=1;i<=t;++i){
		long long n;
		scanf("%lld",&n);
		if(stn(n)==n){
			printf("YES\n");
		}else{printf("NO\n");
		}
	}
}
