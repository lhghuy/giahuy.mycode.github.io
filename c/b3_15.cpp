#include <stdio.h>
 
int main(){
	long long a;
	int c=0,d=0;
	scanf("%ld",&a);
	int b=0;
	while(a!=0){
	int k=a%10;
	if(k%2==0){		
		c+=1;
	}	else{		
		d+=1;
	}a/=10;
}printf("%ld %ld",c,d);
	return 0;
}
