#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct sach
{
	int ma;
	char ten[40];
	float gia;
	
};

void nhap1cuonsach(sach &book)
{
	printf("ten sach: "); 
	getchar();
	gets(book.ten);
	printf("ma sach: "); 
	scanf("%d",&book.ma);
	printf("gia sach: "); 
	scanf("%f",&book.gia);
}

void xuat1cuonsach(sach book)
{
	printf("ten sach: %s\n",book.ten); 
	printf("ma sach: %d\n",book.ma);
	printf("gia sach: %.2f\n",book.gia); 
}

void nhapncuonsach(sach book[],int n)
{
	for(int i=0;i<n;i++)
	{
		nhap1cuonsach(book[i]);
		printf("\n");
	}
}

void xuatncuonsach(sach book[],int n)
{
	for(int i=0;i<n;i++)
	{
		xuat1cuonsach(book[i]);
		printf("\n");
	}
}

//void timx(sach book[],int n,char x)
//{
//	for(int i=0;i<n;i++)
//	{
//		if(strcmp(book[i].ma,x)==0)
//		{
//			xuat1cuonsach(book[i]);
//			return 1;
//		}
//	}
//	return -1;
//}

int timx(sach book[], int n,const char *key)
{
	for (int i=0;i<n;i++)
	{
		if(strcmp(key,book[i].ma)==0)
		{
			return i;
		
		}
	}
		return -1;	
}

int main()
{
	int n;
	sach a[100];
	printf("so luong sach: ");
	scanf("%d",&n);
	nhapncuonsach(a,n);
	xuatncuonsach(a,n);
		char s[40];
	printf("nhap ten sach:");
	scanf("%s", &s);
	int tks= timx(a,n,s);
	if(tks !=-1){
		printf("sach la: ");
		xuat(a+ tks, 1);
	}
	else 
		printf("dell co");
//	char x[10];
//	getchar();
//	gets(x);	
//	int search=timx(a,n,x);
//	if(search==-1)
//	{
//		printf("khong tim thay");
//	}
	return 0;
}
