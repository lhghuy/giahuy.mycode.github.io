#include <stdio.h>
#include <stdlib.h>
int main(){
	//khai bao mang tinh~
	int a[100];
	//khai bao mang dong
	int *b=(int *)malloc(100*sizeof(int));
	int *c=(int *)calloc(500,sizeof(int));
	long long *t=(long long *)calloc(500,sizeof(long long));
	//giai phong bo nho
	free(b);
	free(c);
	free(t);
	//thay doi kich thuoc bo nho
	b = (int *)relloc(b,120*sizeof(int));
}
