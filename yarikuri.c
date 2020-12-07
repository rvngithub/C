#include <stdio.h>

void add_ar(int a1[], int a2[], int s[], int n);
void print_ar(int a[], int n);

int main(void) {
        int x[5]={1, 2, 3, 4, 5};
        int y[5]={6, 7, 8, 9, 10};
        int z[5]={0};

        add_ar(x, y, z, 5);
        print_ar(z, 5);

        return 0;
}

void add_ar(int a1[], int a2[], int s[], int n){
        int i;
        for (i=0; i<n; i++) {
                s[i]=a1[i]+a2[i];
        }
}

void print_ar(int a[], int n){
        int i;
        for (i = 0; i < n; i++) {
                printf("%d", a[i]);
        }
}
