#include <stdio.h>;

int main(){
	char a;
	scanf("%c",&a);
	if(a=='z'||a=='Z'){
		printf("a");
	}
else if(a>='A'&&a<='Z')
{printf("%c",a+32+1);
	}	else if(a>='a'&&a<='z'){
		printf("%c",a+1);
	} else {
	printf("INVALID");}
	return 0;
}
