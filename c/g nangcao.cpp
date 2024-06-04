#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


typedef struct sinhvien{
	char mtb[11];
	char hoten[51];
	char ltb[3];
	char sdt[20];
//	struct ngaysinh ns;
	float noimang;
	float ngoaimang;
	int ngay,thang,nam;
}SV;

void nhap1sv(SV &sv){
	scanf("%s",&sv.mtb);
	getchar();
	gets(sv.hoten);
	scanf("%d%d%d", &sv.ngay, &sv.thang, &sv.nam);
	scanf("%s",&sv.sdt);
//	nhapngaysinh(sv.ns);
	scanf("%s",&sv.ltb);
	scanf("%f",&sv.noimang);
	scanf("%f",&sv.ngoaimang);
}

void xuat1sv(SV sv){
	printf("%s - ",sv.mtb);
	printf("%s - ",sv.hoten);
//	printf("%s",sv.ltb);
	printf("%d/%d/%d - ", sv.ngay, sv.thang, sv.nam);
	printf("%s - ",sv.sdt);
	if(strcmp(sv.ltb, "TS") == 0)
		printf("Tra Sau - ");
	else
		printf("Tra Truoc - ");
//	printf("%c - ",sv.gt);
	printf("%.0f - ",sv.noimang);
	printf("%.0f",sv.ngoaimang);
}


void nhapdssv(SV sv[], int n)
{
	for(int i=0;i<n;i++){
		nhap1sv(sv[i]);
	}
}

void xuatdssv(SV sv[], int n)
{
	float h;
	for(int i=0;i<n;i++){
		h=(3000*sv[i].noimang)+(1500*sv[i].ngoaimang);
		printf("%s - ",sv[i].mtb);
		printf("%.0f",h);
		printf("\n");
	}	
}
int main(int argc, char *argv[]) {
	SV a[100];
	int n;
	scanf("%d",&n);	
	nhapdssv(a,n);
	xuatdssv(a,n);

    return 0;
}
