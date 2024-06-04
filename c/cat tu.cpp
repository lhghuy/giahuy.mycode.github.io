#include <stdio.h>
#include <string.h>
int main(){
	char s[101];
	int h=0;
	gets(s);
	int cnt=0;
	//tach chu dau tien
	char *token = strtok(s," {}.?+-*/");
	while(token !=NULL){
		h++;
//		printf("%s\n",token);
		token = strtok(NULL," {}.?+-*/");
	}
	printf("%d\n",h);
}
