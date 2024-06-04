#include <stdio.h>

int max(int a[], int &vt, int n){
	int ma=a[0];
	for(int i=1;i<n;i++){
		if(a[i]>ma){
			ma=a[i];
			vt=i;
		}
	}
	return ma;
}

int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++)
	scanf("%d",&a[i]);
	
	int vt=0;
	int ma1= max(a,vt,n);
	printf("%d\n",ma1);
	
	a[vt]=-1e9;
	int ma2=max(a,vt,n);
	printf("%d",ma2);
}
