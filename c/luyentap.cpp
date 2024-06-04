#include <stdio.h>

void nhapham(int n, int a[])
{
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
}

void xuatham(int n, int a[])
{
	for(int i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}

void amlonnhat(int n, int a[])
{
	printf("ptu am lon nhat la: ");
	int max=-1;
	for(int i=0;i<n;i++)
	{
		if(a[i]<0&&(max==-1||a[i]>a[max]))
		{
			max=i;
		}
	}
	if(max==-1)
	printf("none\n");
	else
	printf("%d\n",a[max]);
}


void duongnhonhat(int n, int a[])
{
	printf("ptu duong nho nhat la: ");
	int min=-1;
	for(int i=0;i<n;i++)
	{
		if(a[i]>0&&(min==-1||a[i]<a[min]))
		{
			min=i;
		}
	}
	if(min==-1)
	printf("none\n");
	else
	printf("%d\n",a[min]);
}

void tongptuvitrichan(int n,int a[])
{
	printf("tong ptu o vi tri chan la: ");
	int dem=0;
	for(int i=0;i<n;i++)
	{
		if(i==0||i%2==0)
		{
			dem=dem+a[i];
		}
	}
	printf("%d\n",dem);
}

/*void tttd(int n, int a[])
{
	printf("ptu tang dan: ");
	int doi;
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
				{
					doi=a[i];  //3 3	doi=3
					a[i]=a[j]; //3 1  a[i]=1
					a[j]=doi;  //1 3	a[j]=3
					printf("%d ",a[i]);
				}
		}
	}
}
*/
int main()
{
	int n,a[100];
	scanf("%d",&n);
	nhapham(n,a);
//	xuatham(n,a);
	amlonnhat(n,a);
	duongnhonhat(n,a);
	tongptuvitrichan(n,a);
//	tttd(n,a);
}
