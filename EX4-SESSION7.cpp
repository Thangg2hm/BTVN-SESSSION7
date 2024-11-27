#include<stdio.h>
int main(){
	int i,sophantu;
	printf("nhap vao so phan tu cua mang:");
	scanf("%d",&sophantu);
	int arrayN[sophantu];
	printf("hay nhap vao tung phan tu co trong mang\n");
	for(i=0;i<sizeof(arrayN)/sizeof(int);i++){
		printf("arrayN(%d):",i);
		scanf("%d",&arrayN[i]);
		}
		printf("mang arrayN co %d phan tu\n",sophantu);
		for(i=0;i<sizeof(arrayN)/sizeof(int);i++);{
			printf("cac phan tu cua mang la:%d",arrayN[i]);
		}
		return 0;
	}
		
		
