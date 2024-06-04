#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct born
{
	int ngay,thang,nam;
}dmy;

typedef struct sinhvien
{
	char hoten[51],mssv[11],gt[3];
	dmy ngaysinh;
	float toan,ly,tin,dtb;	
}SV;

void capphat(SV *&sv,int n)
{
	sv =(SV	*)malloc(n*sizeof(SV));
}

void nhapborn(dmy *born)
{
	printf("ngay: ");
	scanf("%d",&(born->ngay));
	printf("thang: ");
	scanf("%d",&(born->thang));
	printf("nam: ");
	scanf("%d",&(born->nam));
}

void xuatborn(dmy *born)
{
	printf("%d/%d/%d\n",(born->ngay),(born->thang),(born->nam));
}

void nhap1sv(SV *sv)
{
	printf("mssv: ");
	scanf("%s",&(sv->mssv)); // buffer: enter symbol
	fflush(stdin); // clear buffer
	printf("ho va ten: ");
	gets(sv->hoten);
	printf("gt: ");
	scanf("%s",&(sv->gt));
	nhapborn(&(sv->ngaysinh));
	printf("diem toan: ");
	scanf("%f",&(sv->toan));
	printf("diem ly: ");
	scanf("%f",&(sv->ly));
	printf("diem tin: ");
	scanf("%f",&(sv->tin));
}

void xuat1sv(SV *sv)
{
	printf("\n%s\n",(sv->hoten));
	printf("%s\n",(sv->mssv));
	printf("%s\n",(sv->gt));
	xuatborn(&(sv->ngaysinh));
	printf("toan: %.2f\n",(sv->toan));
	printf("ly: %.2f\n",(sv->ly));
	printf("tin: %.2f\n",(sv->tin));
	sv->dtb=((sv->toan)+(sv->tin)+(sv->ly))/3;
	printf("dtb: %.2f",sv->dtb);      //((sv->toan)+(sv->tin))+(sv->ly)/3);
}

void nhapnsinhvien(SV *sv,int n)
{
	for(int i=0;i<n;i++)
	{
		nhap1sv((sv+i));
		printf("\n");
	}
}

void xuatnsinhvien(SV *sv,int n)
{
	for(int i=0;i<n;i++)
	{
		xuat1sv((sv+i));
		printf("\n");
	}
}

SV* add1cuoi(SV *&sv,int &n,SV k)
{
	n++;
	sv = (SV*) realloc(sv, n*sizeof(SV));
	*(sv+n-1) = k;
	return sv;
}

int nm(SV *sv,int n,char *x)
{
	for(int i=0;i<n;i++)
	{
		if(strcmp((sv+i)->gt,x)==0)
		{
			xuat1sv((sv+i));
			return 1;
		}
 	}	
 	return -1;
}

int search(SV *sv,int n,const char *s)
{
	for(int i=0;i<n;i++)
	{
		if(strcmp((sv+i)->mssv,s)==0)
		{
			xuat1sv((sv+i));
			return 1;
		}
 	}
 	return -1;
}

int dtbmax(SV *sv, int n)
{
	float max = 0;
	for(int i=0;i<n;i++)
	{
		if((sv->dtb)>=max)
		{
			max=sv->dtb;
		}
	}
	return max;
}

//void xuatmax(SV *sv,int n)
//{
//	for(int i=0;i<n;i++)
//	{
//		if(dtbmax(sv->dtb))
//		{
//			xuat1sv((sv+i));
//		}
//	}
//}
	
//void xuat1(SV *sv,int n)
//{
//	for(int i=0;i<n;i++)
//	{
//		xuat1sv((sv+i));
//	}
//
//}

int main()
{
	SV *sc,k;
	int n,*A;
	printf("nhap so luong sv: ");
	scanf("%d",&n);
	capphat(sc,n);
//	sv =(SV	*)malloc(n*sizeof(SV));
//	dmy *born;
//	born =(dmy *)malloc(100*sizeof(dmy));
	
	nhapnsinhvien(sc,n);
//	xuatnsinhvien(sc,n);
	nhap1sv(&k);
//	xuat1sv(&k);
	sc = add1cuoi(sc,n,k);
	xuatnsinhvien(sc,n);
	printf("\nnhap gt sv can tim: ");
	char x[5];
	getchar();
	gets(x);
	int l=nm(sc,n,x);
	if(l==-1)
	printf("ko tim thay gt sv can tim\n");
	printf("\nnhap ten sv can tim: ");
	char s[50];
//	getchar();
	gets(s);
	int h=search(sc,n,s);
	if(h==-1)
	printf("ko tim thay ten");
//	xuatmax(sc,n);
//	search(sc,n);
//	xuat1(sc,n);
	return 0;
}
