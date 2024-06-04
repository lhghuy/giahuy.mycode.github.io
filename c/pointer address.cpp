#include <stdio.h>
#include <stdlib.h>

void alloc(int *&Array,int n)
{
	Array = (int*) calloc(n,sizeof(int));
}

void inp(int *Array, int n)
{
	for(int i=0;i<n;i++)
		scanf("%d",(Array+i)); // &Array[i]
}

void out(int *Array, int n)
{
	for(int i=0;i<n;i++)
		printf("%d\t%p\n",*(Array+i),(Array+i)); // Array[i]
	printf("\n");
}

int* add(int *Array, int &n, int k)
{
	int *temp = (int*) realloc(Array, (++n)*sizeof(int));
	*(temp+n-1) = k; //temp[n-1]
	//free(Array);
	return temp;
}

int main()
{
	int *A, *B, n;
	scanf("%d",&n);
	
	alloc(A,n);
	alloc(B,n);
	inp(A,n);
	*(B+0) = 9;
	out(A,n);
	B = A;
	out(B,5);
	
	A = add(A,n,-5);
	A = add(A,n,-5);
	A = add(A,n,-5);
	A = add(A,n,-5);
	out(A,n);
	out(B,5);
	
	return 0;
}
