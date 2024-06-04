#include <stdio.h>
#include <stdlib.h>

typedef struct toado{
	int x,y;
}TD;

void capphat(TD *&a,int &n){
	a = (TD*)new TD[n];
}

void nhaptd(TD *a){
	printf("nhap toa do x: ");	
	scanf("%d",&a->x);
	printf("nhap toa do y: ");	
	scanf("%d",&a->y);
}

void xuattd(TD *a){
	printf("toa do x va y: (%d,%d) ",a->x,a->y);
}

void nhap(TD *a, int n){
	for(int i=0;i<n;i++){
		nhaptd(&a[i]);	// a[i] <=> *(a+i) => &a[i] <=> (a+i)
	}
}

void xuat(TD *a, int n){
	for(int i=0;i<n;i++){
		xuattd((a+i));
		printf("\n");
	}
}

int soluong(TD *a, int n, int cung)
{
	int dem=0;
	switch(cung)
	{
		case 1:
		for(int i=0;i<n;i++)
			dem+=((a+i)->x > 0 &&(a+i)->y<0)?1:0;
		return dem;
	
		case 2:
			for(int i=0;i<n;i++)
				dem+=((a+i)->x>0&&(a+i)->y>0)?1:0;
			return dem;
	
		case 3:
			for(int i=0;i<n;i++)
				dem+=((a+i)->x<0 && (a+i)->y>0)?1:0;
			return dem;
	
		case 4:
			for(int i=0;i<n;i++)
				dem+=((a+i)->x<0&&(a+i)->y<0)?1:0;
			return dem;
	}
}

TD* ds(TD *a, int n, int cung)
{
	int ncung = soluong(a,n,cung),idx=0;
	if(ncung<1)
	return NULL;
	TD *temp;
	capphat(temp,ncung);
	switch(cung)
	{
		case 1:
			for(int i=0;i<n;i++)
				if(a[i].x>0&&a[i].y<0)
				{
					temp[idx]=a[i];
					idx++;
				}
					
			return temp;
	
		case 2:
			for(int i=0;i<n;i++)
				if(a[i].x>0&&a[i].y>0)
				{
					temp[idx]=a[i];
					idx++;
				}
			return temp;
	
		case 3:
			for(int i=0;i<n;i++)
				if(a[i].x<0&&a[i].y>0)
				{
					temp[idx]=a[i];
					idx++;
				}
			return temp;
	
		case 4:
			for(int i=0;i<n;i++)
				if(a[i].x<0&&a[i].y<0)
				{
					temp[idx]=a[i];
					idx++;
				}
			return temp;
	}
}

int main(){
	int n,cung;
	scanf("%d",&n);
	TD *a;
	capphat(a,n);
//	nhaptd(a);
//	xuattd(a);
	nhap(a,n);
	xuat(a,n);
	do{
		printf("nhap so cung: ");
		scanf("%d",&cung);
		//xuat(ds(a,n,cung),soluong(a,n,cung));
		TD *temp=ds(a,n,cung);
		if(temp != NULL)
			xuat(temp,soluong(a,n,cung));
		delete temp;  
	}while(cung!=0);

	delete a;
	
	return 0;
}
