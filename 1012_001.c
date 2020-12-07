#include <stdio.h>

int main(void) {
        int score[5]={10, 20, 30, 40, 50};
        /*score라는 임의의 배열을 만들어서 거기에 각각 5개의 데이터를 넣음*/
        int i, n, sum=0;
        //i, n, sum이라는 변수 세 개를 선언. sum은 나중에 합계 계산을 위해 쓰이므로 0으로 초기화
        n=sizeof(score)/sizeof(int);
        printf("\n%d\n", sizeof(score));
        printf("%d\n", sizeof(int));
        /*size of라는 연산자는 메모리 공간에서 소모하는 메모리 크기를 바이트 단위로 계산해서 반환하는 연산자.
           변수, 상수 혹은 자료형의 메모리 크기를 계산할 수 있다. 위에서 선언한 score라는 이름의 변수(배열)는
           int형 원소가 5개 있으므로 4*5=20. int형 변수? 메모리? 의 크기는 기본 4이다.*/
        printf("\n**score 배열의 원소들**\n");
        for (i = 0; i < n; i++) {
                printf("score[%d]:%d\n", i, score[i]);
        }
        printf("\n**score 배열 주소**\n");
        for (i = 0; i < n; i++) {
                printf("&score[%d]:%d\n", i, &score[i]);
        }
        for (i = 0; i < n; i++) {
                sum+=score[i];
        }
        printf("배열합 %4d\n", sum);
        return 0;
}
