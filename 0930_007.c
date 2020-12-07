#include <stdio.h>

int main(void) {
        int a, b;
        printf("input two numbers>");
        scanf("%d %d", &a, &b);

        if (a>b==1)
                printf("%d is the biggest number.\n", a);
        else
                printf("%d is the biggest number.\n", b);
        return 0;
}
