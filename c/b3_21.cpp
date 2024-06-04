#include <stdio.h>
int main() {
    int n;
	scanf ("%d",&n);//n=16
	int r=n/7; //r=2
	int du=n%7; //du=2
	int max=r*2;//4
	int min=max;//4
	if (du>=2 && du <=5 )
	{
		max+=2;
	}
	else if (du==1)
	{
		max+=du;
	}
	else if (du==6 )
	{
	    min+=1;
	    max+=2;
	}
	printf ("%d %d",min,max);
    return 0;
}
