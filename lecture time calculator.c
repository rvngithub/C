#include <stdio.h>
int main(void) {
        int time, x;
        float after;
        printf("강의시간 입력>");
        scanf("%d", &time);
        x=time*60;
        after=x*0.75;
        printf("%.2f", after/60);
        return 0;
}
