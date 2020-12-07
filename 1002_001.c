#include <stdio.h>

int main(void) {
        int math, eng, sum;
        float div;
        printf("Put your score of Mathmatics>");
        scanf("%d", &math);
        printf("Put your score of English>");
        scanf("%d", &eng);
        sum=math+eng;
        div=sum/2;
        printf("평균은 %f 점입니다.\n", div);
        if((div>=90)==1)
                printf("Your grade is A");
        else if((div>=80)==1)
                printf("Your grade is B");
        else if((div>=70)==1)
                printf("Your grade is C");
        else if((div>=60)==1)
                printf("Your grade is D");
        else
                printf("Your grade is F");

        return 0;
}
