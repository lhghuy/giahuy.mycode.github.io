#include <stdio.h>
#include <stdlib.h>

int main(){
	int n,*ptr,s=0;
	scanf("%d",&n);
	ptr=(int *)calloc(n,sizeof(int));
	if(ptr==NULL){
		printf(" khong the cap phat bo nho");
		exit(0);
	}
	for(int i=0;i<n;i++){
		scanf("%d",&ptr[i]);
	}
	for(int i=0;i<n;i++){
		printf("%d",ptr[i]);
		s+=ptr[i];
	}
	printf("\ntong la: %d",s);
	int n2;
	scanf("%d",&n2);
	ptr=(int*)realloc(ptr,n2*sizeof(int));
	free(ptr);
	//con tro*
	//scanf("%d",a+i);
	//pritnf("%d",*(a+i));
	return 0;
}
//code anh thanh
//#include<stdio.h>
//#include<stdlib.h>
//int main() {
//	int n, i,*ptr,sum=0;
//	scanf("%d",&n);
//	ptr=(int*)malloc(n*sizeof(int));
//	// ptr=(int*)calloc(n,sizeof(int));
//	if(ptr==NULL) {
//		printf("Khong the cap phat bo nho");
//		exit(0);
//	}
//	for(int i=0; i<n; ++i) {
//		scanf("%d",ptr+i);
//	}
//	for(int i=0; i<n; ++i) {
//		printf("%d ",*(ptr+i));
//		sum+= *(ptr+i);
//	}
//	printf("\nTong = %d\n",sum);
//	free(ptr);
//	return 0;
//}

