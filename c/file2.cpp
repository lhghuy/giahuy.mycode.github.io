#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#define max_n 100

bool snt(int n)
{
	if(n<2)
        return false;
    for(int i=2;i<=(sqrt(n));i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }
        return true;
}

int main()
{
    int n,a[max_n];
    FILE *f = fopen("data.txt","r");
    if(f==NULL)
    {
        printf("khong the mo file.\n");
        return 1;   
    }
    
    fscanf(f,"%d",&n);
    for(int i=0;i<n;i++)
    {
		fscanf(f,"%d",&a[i]);
    }
    fclose(f);
    
    f = fopen("data.txt","a");
    if(f==NULL)
    {
        printf("khong the mo file.\n");
        return 1;
	}
    
    fprintf(f,"Cac so nguyen to trong mang la:\n");
    for(int i=0;i<n;i++)
    {
        if(snt(a[i]))
        {
            fprintf(f,"%d",a[i]);
        }
    }
    
    fprintf(f,"\n");
    fclose(f);
    printf("Mang vua doc tu file la:\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
	}
    printf("\n");
    return 0;
}
