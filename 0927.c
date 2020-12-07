#include <stdio.h>

int sum(int x, int y);
void swap(int *x, int *y);
/*stdio에 없는 sum과 swap이라는 함수를 쓸 것이라고 미리 알려줌*/

int main(void) {
        int x, y, total;/*main함수에서 x, y, total이라는 세 개의 값을 쓸 것이다*/
        printf("Input two integers>");
        scanf("%d%d", &x, &y);
        printf("x:%d, y:%d\n", x, y);
        total=sum(x,y);
        printf("**sum function is called...**\n");
        printf("%d+%d=%d\n", x, y, total);
        swap(&x, &y);
        printf("**swap fuction is called...**\n");
        printf("x:%d, y:%d\n", x, y);
        return 0;
}
int sum(int x, int y){
        int total;
        total=x+y;
        return total;
}

void swap(int *x, int *y){
        int temp=*y;
        *y=*x;
        *x=temp;
}
