#include <stdio.h>

int main(){
	char s[101];
	gets(s);
	int cnt=0;
	for(int i=0 ;s[i] != '\0';++i){
		if(s[i]== ' '&& s[i+1] != ' '){
			++cnt;
		}
	}
	printf("%d",cnt+1);
}
//strlen --> string.h
