#include <stdio.h>

int main() {
    int mang[5] = {1,7,0,6,8};
    int max;
    int min;
    for (int i = 1; i<sizeof(mang)/sizeof(int); i++){
       if (mang[i] > max){
            max = mang[i];
        }
        if (mang[i] < min){
            min = mang[i];
        }
    }
    printf("phan tu lon nhat trong mang la: %d\n", max);
    printf("phan tu nho nhat trong mang la: %d\n", min);
    return 0;
}

