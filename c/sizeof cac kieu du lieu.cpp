#include <stdio.h>
#include <limits.h>

int main(){
	printf("size cua kieu long long %d",sizeof(long long));
	printf("\nsize cua kieu bool %d",sizeof(bool));
	printf("\ngia tri max - min cua kieu int: %d %d",INT_MIN,INT_MAX);
	printf("\ngia tri max - min cua kieu char: %d %d", CHAR_MIN,CHAR_MAX);
	return 0;

}
