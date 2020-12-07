#include <stdio.h>
/* 매개변수가 있는 함수 예제 */
int add(int x, int y);
/*stdio.h에는 add라는 함수가 포함되어 있지 않기 때문에 헤더 부분에서 add 함수가 무엇인지 간단하게 명시해줘야 컴파일 할 때 에러 없이 구동이 가능하다.*/
int main(void) {
        int a, b, sum;
        printf("Add two numbers>");
        scanf("%d %d", &a, &b);
        sum = add(a,b);
        printf("%d+%d=%d\n", a,b,sum);
        return 0;
}
int add(int x, int y){
        int sum;
        sum=x+y;
        return sum;
}
