#include <stdio.h>

int main(void) {
        int a, b, c, d, result;
        a=4;
        b=12;
        c=37;
        d=51;
        result=d%a*c+a%b+b;
        printf("%d\n", result);
        return 0;
}
