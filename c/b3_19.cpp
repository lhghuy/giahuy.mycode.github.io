//bai anh dung
#include <stdio.h>
		#include <math.h>
	int main(){
		int a,b,c,i;
		scanf("%d%d",&a,&b);
		c=pow(10,a-1);
		i=pow(10,a)-1;
		if(i<b)
			printf("-1");
		for(c;c<=i;++c){
			if(c%b==0)
				{printf("%d",c);
				break;}
	}
	}
//gian lan
#include<stdio.h>
int main() {
    int n, t;
    scanf("%d%d", &n, &t);

    if (n == 1 && t == 10)
        printf("-1");
    else
    {
    	 printf("%d", t);
        if (t == 10)
        {
        for (int i = 0; i < n - 2; i++)
        {
        	printf("0");
    	}
        }
    	else
    	{
    		 for (int i = 0; i < n - 1; i++) {
    		 	printf("0");
			 }
		}
    }
    return 0;
}
