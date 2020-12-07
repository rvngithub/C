#include <stdio.h>

int main(void) {
        int x;
        printf("Please input your score.\n");
        scanf("%d", &x);
        if((x>=90)==1)
                printf("Your grade is A\n");
        else if((x>=80)&&(x<=89))
                printf("Your grade is B\n");
        else if((x>=70)&&(x<=79))
                printf("Your grade is C\n");
        else if((x>=60)&&(x<=69))
                printf("Your grade is D\n");
        else if((x>=0)&&(x<=59))
                printf("Your grade is F\n");
        return 0;
}
