#include <stdio.h>
/*while 예제*/
int main(void) {
        int i=1, sum=0;
        while (i<=888) {
                sum+=i;
                i++;
        }
        printf("%d", sum);
        return 0;
}
