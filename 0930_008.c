#include <stdio.h>

int main(void) {
        int a, b, c, min;
        printf("input three numbers>\n");
        scanf("%d %d %d", &a, &b, &c);
        if (a<b==1) {
                min=a;
        }
        else{
                min=b;
        }
        if (c<min==1)
                min=c;
        printf("The minimum value is %d\n", min);
        return 0;
}
