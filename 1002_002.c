#include <stdio.h>
int main(void) {
        int year, month, max;
        printf("연도와 월을 입력하세요>");
        scanf("%d %d", &year, &month);
        switch (month) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
                max=31;
                printf("%d년 %d월의 마지막 날은 %d일 입니다.\n", year, month, max);
                break;
        case 4:
        case 6:
        case 9:
        case 11:
                max=30;
                printf("%d년 %d월의 마지막 날은 %d일 입니다.\n", year, month, max);
                break;
        case 2:
                if((year%4==0)&&(year%100!=0)||(year%4==0)) {
                        max=29;
                        printf("%d년 %d월의 마지막 날은 %d일(윤년)입니다.\n", year, month, max);
                        break;
                }
                else{
                        max=28;
                        printf("%d년 %d월의 마지막 날은 %d일 입니다.\n", year, month, max);
                }
        default:
                printf("입력이 잘못 되었습니다.");
        }
        return 0;
}
