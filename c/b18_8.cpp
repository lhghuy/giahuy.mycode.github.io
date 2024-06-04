#include <stdio.h>
#include <string.h>
#include <ctype.h>
//Lap       trinh     ngon    ngu   C

void allUpper(char s[]){
	for(int i = 0 ; s[i] != '\0'; ++i){
		s[i] = toupper(s[i]);
	}
}

void firstUpper (char s[]){
	s[0] = toupper(s[0]);
	for(int i = 1; s[i] != '\0'; ++i){
		s[i] = tolower(s[i]);
	}
}

int main(){
	char s[101], b[100][100];
	gets(s);
	int n = 0;
	
	// Luu vao mang 2 chieu
	char *token = strtok(s," ");
	while(token != NULL){
		strcpy(b[n++],token);
		token = strtok(NULL," ");
	}
	
	allUpper(b[n-1]);
	printf("%s,",b[n-1]);
	for(int i = 0 ;i < n - 1; ++i){
		firstUpper(b[i]);
		printf(" %s",b[i]);
	}
}

