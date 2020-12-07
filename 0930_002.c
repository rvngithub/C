#include <stdio.h>

int main(void) {
        int x, y;
        char a;

        printf("원하는 문자를 하나 입력하세요>");
        scanf("%c", &a);

        printf("입력한 문자 %c 의 아스키10진수는 %d 입니다.\n", a, a);
        printf("입력한 문자 %c 의 다음 문자는 %c입니다.\n", a, a+1);
        printf("(%c>%c)는 %d 입니다.\n", a, a+1, (a>a+1));

        printf("원하는 정수 두 개를 입력하세요>");
        scanf("%d %d", &x, &y);
        printf("(%d>=%d)는 %d 입니다.\n", x, y, (x>=y));
        printf("(%d==%d)는 %d 입니다.\n", x, y, (x==y));
        printf("(%d!=%d)는 %d 입니다. \n", x, y, (x!=y));
        return 0;
}
