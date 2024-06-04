#include <stdio.h>

int tong(int a){
	int b=0,d=0;
	scanf("%d",&a);
	for(int i=0;i<=a;++i)
{   b+=i;
	for(int c=0;c<=b;++c)
	d+=c;
}if(b==d)
printf("%d",b);
return 0;
}
//int hieu(int a){
//	int c=0,d=0;
//	int o=tong(a);
//	for(c;c<=o;++c)
//	d+=c;return d;
//}
//int main(){
//	int a;
//	scanf("%d",&a);
//	int c=tong(a);
//	int k=hieu(a);
//	while(c==k)
//	printf("%d",c);
//}
