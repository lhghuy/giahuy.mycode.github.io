#include <stdio.h>
#include <math.h>

int dem_so(int n){
	int cnt=0;
	while(n){
		++cnt;
		n/=10;
	}return cnt-1;
}

int lay_so_dau(int n){
	int sd;
	while(n>=10){
		n/=10;
	}return n;
}

int main(){
	int n;
	scanf("%d",&n);
	int sd, sc;
	sc=n%10;
	sd=lay_so_dau(n);
	int dem = dem_so(n);
	int sm=n-sd*pow(10,dem)+sc*pow(10,dem)-sc+sd;
	printf("%d",sm);
}

