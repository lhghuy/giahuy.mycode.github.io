#include <stdio.h>
int main() {
    long long n; 
//	int dem = 0;
	scanf("%lld", &n);
	int h=0;
	while (n!=0)
	   {
	   	int s = n%10;
//	   	dem = dem + 1;
	   	n/=10;
	   	h+=s;
	   }
	   
	printf("%d",h);
    return 0;
}
