#include <stdio.h>

int shh(int a)
{
	int s=0;
	if(a<=1)
	return 0;
	for(int i=1;i<a;i++)
	{
		if(a%i==0)
		{
			s+=i;
		}
	}
	return (a==s);
}

void nhap(int a[][100], int n, int m)
{
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
}

void xuat(int a[][100], int n, int m)
{
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}

int tbcshh(int a[][100],int n,int m,int h)
{
	if(h<0||h>=m)
	return 0;
	float dem=0;
	float tong=0;
	for(int j=0;j<n;j++)
	{
		if(shh(a[h][j]))
		{
		dem++;
		tong+=a[h][j];
		}
	}
	return dem==0 ? 0 : tong/dem;
}

int shhmax(int a[][100],int n,int m)
{
	int max=0;
		for(int i=0;i<m;i++)
		{
			for(int j=0;j<n;j++)
			{
				if(shh(a[i][j])&&a[i][j]>max)
				{
					max=a[i][j];
				}
			}
		}
	return max==0 ? 0 : max;
}

int main()
{
	int n,m;
	scanf("%d%d",&m,&n);
	int a[100][100];
	nhap(a,n,m);
//	xuat(a,n,m);
	int h;
	scanf("%d",&h);
	float k=tbcshh(a,n,m,h);
	printf("%.2f",k);
	int l=shhmax(a,n,m);
	printf("\n%d",l);
	return 0;
}
