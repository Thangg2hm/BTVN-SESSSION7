#include<stdio.h>
int main(){
	int arrayN[5]={1,7,0,6,8};
	int i;
	int sochan;
	for(i=0;i<sizeof(arrayN)/sizeof(int);i++){
		if(arrayN[i]%2==0){
			printf("%d la so chan\n",arrayN[i]);
			sochan=1;
			}
			}
			if(!sochan){
				printf("mang khong chua phan tu nao la so chan");
				}
				return 0;
				}
		
		
	
