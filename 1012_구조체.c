#include <stdio.h>
#define  MAX 3

struct stu {
        int id;
        int kor, eng, math;
        float avg;
        char grade;
};
typedef struct stu stu;

int main(void) {
        stu s[MAX];
        int i, korsum=0, engsum=0, mathsum=0;
        printf("Type the ID and scores>\n");
        for (i = 0; i < MAX; i++) {
                scanf("%d %d %d %d", &s[i].id, &s[i].kor, &s[i].eng, &s[i].math);
        }
        for (i = 0; i < MAX; i++) {
                s[i].avg=(s[i].kor+s[i].eng+s[i].math)/3.0;
                korsum+=s[i].kor;
                engsum+=s[i].eng;
                mathsum+=s[i].math;
        }
        for (i = 0; i < MAX; i++) {
                if (s[i].avg>=90) {
                        s[i].grade='A';
                }
                else if(s[i].avg>=80) {
                        s[i].grade='B';
                }
                else if(s[i].avg>=70) {
                        s[i].grade='C';
                }
                else if(s[i].avg>=60) {
                        s[i].grade='D';
                }
                else
                        s[i].grade='F';
        }
        printf("**Grade is here**\n");
        for (i = 0; i < MAX; i++) {
                printf("ID:%d\t Averge:%.2f\t Grade:%c\n", s[i].id, s[i].avg, s[i].grade);
        }
        printf("**과목별 평균 성적**\n");
        printf("kor avg:%.2f\t eng avg:%.2f\t math avg:%.2f\n", korsum/3.0, engsum/3.0, mathsum/3.0);
        return 0;
}
