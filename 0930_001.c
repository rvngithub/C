#include <stdio.h>

int main(void) {
        int x, y, add, sub, mul, div, mod;
        printf("정수 1을  입력하세요>\n");
        scanf("%d", &x);
        printf("정수 2를  입력하세요>\n");
        scanf("%d", &y);

        add=x+y;
        sub=x-y;
        mul=x*y;
        div=x/y;
        mod=x%y;

        printf("%d+%d=%d\n", x, y, add);
        printf("%d-%d=%d\n", x, y, sub);
        printf("%dx%d=%d\n", x, y, mul);
        printf("%d/%d=%d\n", x, y, div);
        printf("%d/%d=%d 의 나머지\n", x, y, mod);

        return 0;
}
