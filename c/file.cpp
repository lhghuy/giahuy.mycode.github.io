#include <stdio.h>
#include <stdlib.h>

int main()
{
	//tao file
	//mo file
	FILE *f;
	f=fopen("bai0.txt","r");
	if(f==NULL)
	{
		printf("\n loi file");
		exit(1);
	}
	//doc hoac ghi
	int n;
//	printf("\nnhap n: ");
//	scanf("%d",&n);
	fscanf(f,"%d",n);
	printf("\n gia tri cua n: %d",n);
	//dong file
	fclose(f);
	return 0;
}
