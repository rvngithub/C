#include <stdio.h>

void add_ar(const int a[], const int b[], int adsum[], int n);

int main(void) {
        int x[5]={10, 20, 30, 40, 50};
        int y[5]={45, 55, 33, 28, 35};
        int xysum[5]={0};
        int i=0, n=5;
        printf("x 배열원소 출력\n");
        for (i = 0; i < n; i++) {
                printf("%d\n", x[i]);
        }
        printf("y 배열원소 출력\n");
        for (i = 0; i < n; i++) {
                printf("%d\n", y[i]);
        }
        add_ar(x, y, xysum, n);
        printf("x+y 결과 출력:\n");
        for (i = 0; i < n; i++) {
                printf("%d\n", xysum[i]);
        }
        return 0;
}

void add_ar(const int a[], const int b[], int absum[], int n){
        int i;
        for (i = 0; i < n; i++) {
                absum[i]=a[i]+b[i];
        }
}
