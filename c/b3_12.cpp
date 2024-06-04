#include <stdio.h>
int main() {
    long long n; 
	int dem = 0;
	scanf("%lld", &n);
	while (n!=0)
	   {
	   	int s = n%10;
	   	dem = dem + 1;
	   	n/=10;
	   }
	   
	printf("%lld", dem);
    return 0;
}
