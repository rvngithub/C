#include <stdio.h>
/*do-while 예제*/
int main(void) {
        int i=1, sum=0;
        do {
                sum+=i;
                i++;
        } while(i<=999);
        printf("%d", sum);
        return 0;
}
