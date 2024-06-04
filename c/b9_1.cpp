#include <stdio.h>
int sothuannghich(int n){
	int dao=0;
	int tam=n;
	while(n){
		dao*=10;
		dao+=n%10;
		n/=10;
	}return dao==tam;
}
int main(){
	int n,a;
	scanf("%d",&n);
	while(n--){
		scanf("%d",&a);
		if(sothuannghich(a)) printf("YES\n");
		else printf("NO\n");	
	}
}

