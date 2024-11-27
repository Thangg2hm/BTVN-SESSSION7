#include<stdio.h>
int main(){
	int arrayN[5];
	int i;
	for(i=0;i<sizeof(arrayN)/sizeof(int);i++){
		printf("nhap vao phan tu thu %d:",i);
		scanf("%d",&arrayN[i]);
	}
	printf("gia tri cua cac phan tu mang la:\n");
	for(i=0;i<sizeof(arrayN)/sizeof(int);i++){
		printf("arrayN[%d] cua mang la:%d\n",i,arrayN[i]);
		}
	return 0;
	}
