#include <stdio.h>

int main(){
	int a;
	scanf("%d",&a);
	if (a<=0)
	printf("INVALID");
	else
	{
	if(a%400==0||a%4==0&&a%100!=0){
		printf("YES");
	 }else
	 {printf("NO");
	 }
}
	return 0;
}
