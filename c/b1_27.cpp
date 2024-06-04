#include <stdio.h>
#include <math.h>

int main(){
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if (a+b>=c && a+c>=b && c+b>=a){
		if (a==b && b==c)
			printf("1");
		else if(a==b || b==c || c==a)
		printf("2");
		else if(a*a==b*b+c*c || b*b==a*a+c*c || c*c==a*a+b*b)
		printf("3");
		else if(a*a==b*b+c*c && b==c || b*b==a*a+c*c && a==c || c*c==a*a+b*b && a==b)
		printf("4");
		else printf("5");
		}else printf("INVALID");
	return 0;
}
