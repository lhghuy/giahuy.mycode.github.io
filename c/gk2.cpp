#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

typedef struct sinhvien
{
	char hoten[51], lop[11], mssv[11];
	float toan,ly,tin;
	int ngay,thang,nam;
}SV;

void nhapmang(SV* sv,int n)
{
	for(int i=0;i<n;i++)
	{
		getchar();
		gets(sv->hoten);
		sv->mssv= new char[11];
		scanf("%s",&(sv->mssv));
		sv->lop= new char[11];
		scanf("%s",&(sv->lop));
		sv->toan= new float;
		sv->ly= new float;
		sv->tin= new float;
		scanf("%f%f%f",&(sv->toan),&(sv->ly),&(sv->tin));
		sv->toan= new int;
		sv->ly= new int;
		sv->tin= new int;
		scanf("%d%d%d",&(sv->ngay),&(sv->thang),&(sv->nam));
	}
}

void xuatmang(SV* sv,int n)
{
	for(int i=0;i<n;i++)
	{
		printf("%s\n%s\n%s",sv->hoten,sv->lop,sv->mssv);
		printf("%d\n%d\n%d",sv->ngay,sv->thang,sv->nam);
		printf("%f\n%f\n%f",sv->toan,sv->ly,sv->tin);
	}
}

int main()
{
	int n;
	scanf("%d",&n);
	
	SV *sv;
	sv = (SV*) new SV[n];
	nhapmang(sv,n);
	xuatmang(sv,n);
	delete []sv;
	return 0;
}
