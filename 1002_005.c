#include <stdio.h>
int main(void) {
        int i, p, id, score;
        float sum=0;
        /* 변수 p는 수강 인원 */
        char grade;
        printf("**컴퓨터공학 입문 성적**\n 수강 인원을 입력하세요>");
        scanf("%d", &p);
        for (i = 1; i <= p; i++) {
                printf("Put your ID and Score>");
                scanf("%d %d", &id, &score);
                sum+=score;
                if (score>=90)
                        grade='A';
                else if (score>=80)
                        grade='B';
                else if (score>=70)
                        grade='C';
                else if (score>=60)
                        grade='D';
                else
                        grade='F';
                printf("학번:%d, 학점:%c\n", id, grade);
        }
        printf("과목 평균:%.2f\n", sum/p);
        return 0;
}
