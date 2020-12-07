#include <stdio.h>
int main(void) {
        int a, b, sum;
        printf("Add two numbers>");
        scanf("%d %d", &a, &b);
        sum=a+b;
        printf("%d+%d=%d\n", a,b,sum);
        return 0;
}
