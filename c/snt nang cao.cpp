#include<stdio.h>
#include<math.h>

int snt(n){
	for(int i=2;i<=sqrt(n);++i){
		if(!(n%i)) return 0;
	}
	return n>=2;
}

int main(){
	int n;
	scanf("%d",&n);
	if(snt(n)) printf("YES");
	else printf("NO");
}

