//#include <stdio.h>
//
//int main(){
//	int n;
//	scanf("%d",&n);
//	for(int i=1;i<=n;i++){
//	for(int j=1;j<=n;j++){
//		if(j<=i)
//		printf("~");
//		else printf("*");
//	}
//	printf("\n");}
//	return 0;
//}


//#include <stdio.h>
//
//int main(){
//	int n;
//	scanf("%d",&n);
//	for(int i=n;i>=1;--i){
//	for(int j=1;j<=2*n-1;++j){
//	if(j<=i||j>=2*n-i) printf("*");
//	else printf("~");}	
//	printf("\n");}
//}




#include<stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	int d = -1;   
	//i += d => i = i+d => i = i-1=> --i
	// i+= d => i = i+d => i = i+1=> ++i
	for(int i=n;i<=n;i+=d){
		for(int j=1;j<=i;j++) printf("*");
		printf("\n");
		if(i==1) d= 1;
	}
}






