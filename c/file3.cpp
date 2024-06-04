#include "stdio.h"
#include "stdlib.h"
#include "math.h"
bool snt(int n)
{
	if(n<2)
	return false;
	for(int i=2;i<=sqrt(n);i++)
	{
		if(n%i==0)
		return false;
	}
	return true;
}

int main()
{
	int n,a[100];
	FILE *f = fopen("practice.txt","w");
	if(f==NULL)
	{
		printf("ko the mo file\n");
		exit(1);
	}
	fscanf(f,"%d",&n);
	for(int i=0;i<n;i++)
	{
		fscanf(f,"%d",&a[i]);
	}
	fclose(f);
	
	f = fopen("practice.txt","a");
	if(f==NULL)
	{
		printf("ko the mo file");
		exit(1);
	}
	
	for(int i=0;i<n;i++)
	{
		if(snt(a[i]))
		{
			fprintf(f,"%d",a[i]);
		}
	}
	fclose(f);
	
	for(int i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	
	printf("\n");
	return 0;
}
