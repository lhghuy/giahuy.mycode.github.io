#include <stdio.h>
#define max 100

void slmang(int &n)
{
	do
	{
		printf("so luong mang: %d",max);
		scanf("%d",&n);
	}
	while (n<=0||n>max);
}

void nhap_mang(int n,int a[])
{
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
}

void xuat_mang(int n,int a[])
{
	for(int i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
}

void tong_tbc(int n,int a[])
{
	int p=0,t=0;
	for(int i=0;i<n;i++)
	{
		p+=a[i];		
	}
	printf("tong mang: %d\n",p);
	for(int j=0;j<n;j++)
	{
		if(a[j]>=0)
		{
			t++;
		}
	}
	printf("tbc mang: %.2f\n",float(p)/t);
}

void thu_tu_tang_dan(int n,int a[])
{	
	int move;
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
	  		if(a[i]>a[j])
	  		{
	  			move=a[i];
				a[i]=a[j];
				a[j]=move;		
	  		}
		}
	}
	printf("mang tang dan: ");
	for(int i=0;i<n;i++)
	printf("%d ",a[i]);
}

void timkiem(int n,int a[],int &k)
{
	int x=0,s=0;
	for(int i=0;i<n;i++)
	{
		s++;
		if(a[i]==k)
		{
			x++;
			printf("%d ",a[i]);
			printf("vi tri thu %d",s);
		}
	}
	if(x==0)
		printf("khong tim thay gia tri\n");
}

int main()
{
	int n,a[max];
	printf("so luong mang: ");
	scanf("%d",&n);
	nhap_mang(n,a);
	xuat_mang(n,a);
	tong_tbc(n,a);
	thu_tu_tang_dan(n,a);
	int k;
	printf("\ngia tri can tim: ");
	scanf("%d",&k);
	timkiem(n,a,k);
	return 0;
}
