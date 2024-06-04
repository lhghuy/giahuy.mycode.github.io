#include<stdio.h>
#include<string.h>

typedef struct sach{
	int masach;
	char tensach[40];
	float gia;
}book;

void nhap (book a[], int n)
{
	for (int i=0; i<n;i++)
	{
		printf("ma sach: ");
		scanf("%d",&a[i].masach);
		printf("ten sach: ");
		fflush(stdin);
		gets(a[i].tensach);
		printf("gia: ");
		scanf("%f",&a[i].gia);
	}
}

void xuat(book a[], int n)
{
	for (int i=0; i<n; i++)
	{
		printf("%d\t%s\t%.2f\t\n", a[i].masach, a[i].tensach, a[i].gia);
	}
}

int timkiemms (book a[], int n, int key)
{
	for (int i=0;i<n;i++)
		if(a[i].masach==key)
			return i;
	return -1;
}

int timkiemts (book a[], int n,const char *key)
{
	for (int i=0;i<n;i++)
		if(strcmp(key,a[i].tensach)==0)
			return i;
		return -1;	
}
int giamax (book a[],int n)
{
	float max;
	for(int i=0;i<n;i++)
	{
		max=a[0].gia;
			if(max<a[i].gia)
			{
				max=a[i].gia;
			}
	}
	return max;
}

int main() {
	int n;
	printf("so luong sach: ");
	scanf("%d", &n);
	sach a[n];
	nhap(a,n);
	xuat(a,n);
	int x;
	printf("nhap ma sach:");
	scanf("%d", &x);
	int tkms =timkiemms(a,n,x);
	if(tkms != -1){
	printf("sach la : ");
		xuat (a+ tkms, 1);
}
	else 
		printf("khong co ");
		
	char s[40];
	printf("nhap ten sach:");
	scanf("%s", &s);
	int tks= timkiemts(a,n,s);
	if(tks !=-1){
		printf("sach la: ");
		xuat(a+ tks, 1);
	}
	else 
		printf("khong co");
 float maxGia = giamax(a, n);
    if (maxGia != -1) {
        printf("\nSach co gia cao nhat: \n");
        for (int i = 0; i < n; i++) {
            if (a[i].gia == maxGia) {
                xuat(a + i, 1);
            }
        }
    } else
        printf("\nKhong co sach nao");
	return 0;
}
