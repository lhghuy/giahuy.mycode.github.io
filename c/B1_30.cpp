#include <stdio.h>
#include <math.h>

int main(){
	float a,b,c;
	scanf("%f%f%f",&a,&b,&c);
	float delta=b*b-(4*a*c);
	float l=((-b+sqrt(delta))/(2*a));
	float h=((-b-sqrt(delta))/(2*a));
if(b==0&&c==0){
printf("INF");
}else {if(delta<0)
{printf("NO");
}else {if(delta>0){
	printf("%.2f %.2f",l,h);
}else {if(delta==0){
	float g=(-b)/(2*a);
printf("%.2f %.2f",g);
}}}}
	return 0;
}
