#include<stdio.h>
int main(){
	int numbers[5]={1,7,0,6,8};
	int i;
	int sizemang=sizeof(numbers)/sizeof(int);
    for(i=0;i<sizeof(numbers)/sizeof(int);i++){
    
    	printf("phan tu thu %d cua mang numbers co gia tri la:%d\n",i,numbers[i]);
    	}
    	printf("do dai cua mang la:%d\n",sizemang);
    	return 0;
    	}
