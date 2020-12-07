#include <stdio.h>//파일 입출력, 구조체, 함수, 배열을 모두 사용해서 성적처리 프로그램 만들기...를 하고 싶었으나 풀리지 않음ㅠㅠ
#define MAX 3

struct student_data {
        int id;
        int exam_1, exam_2, final;
        float avg;
        char grade;
};
typedef struct student_data std;

int getdata(FILE* inputdata, std* s[].id, std* s[].exam_1, std* s[].exam_2, std* s[].final);
void calcgrade(std s[].exam_1, std s[].exam_2, std s[].final, std* s[].avg, std* s[].grade);
void writegrade(FILE* outputdata, std s[].id, std s[].avg, std s[].grade);

int main(void) {
        FILE* inputdata;
        FILE* outputdata;
        std s[MAX];
        int i;
        printf("\n**성적 처리를 시작합니다...**\n");
        if (!(inputdata=fopen("/Users/ksy/Documents/Programming/C/doc/input.txt", "r"))) {
                printf("\a오류 발생. 파일을 불러오지 못했습니다.\n");
                return 100;
        }
        if (!(outputdata=fopen("/Users/ksy/Documents/Programming/C/doc/output.txt", "w"))) {
                printf("\a오류 발생. 파일을 작성할 수 없었습니다.\n");
                return 102;
        }
        while (getdata(inputdata, &s[i].id, &s[i].exam_1, &s[i].exam_2, &s[i].final)) {
                calcgrade(s[i].exam_1, s[i].exam_2, s[i].final, &s[i].avg, &s[i].grade);
                writegrade(outputdata, s[i].id, s[i].avg, s[i].grade);
        }
        return 0;
}

int getdata(FILE* inputdata, std* s[].id, std* s[].exam_1, std* s[].exam_2, std* s[].final){
        int ioResult;
        for (i = 0; i < MAX; i++) {
                ioResult=fscanf(inputdata, "%d%d%d%d", s[i].id, s[i].exam_1, s[i].exam_2, s[i].final);
                if (ioResult==EOF)
                        return 0;
        }

}

void calcgrade(std s[].exam_1, std s[].exam_2, std s[].final, std* s[].avg, std* s[].grade) {
        for (i = 0; i < MAX; i++) {
                *s[i].avg=s[i].exam_1+s[i].exam_2+s[i].final/3.0;
                if (s[i].avg>=90) {
                        *s[i].grade='A';
                }
                else if(s[i].avg>=80) {
                        *s[i].grade='B';
                }
                else if(s[i].avg>=70) {
                        *s[i].grade='C';
                }
                else if(s[i].avg>=60) {
                        *s[i].grade='D';
                }
                else
                        *s[i].grade='F';
        }
        return;
}

void writegrade(FILE* outputdata, std s[i].id, std s[i].avg, std s[i].grade) {
        for (i = 0; i < MAX; i++) {
                fprintf(outputdata, "%04d %.2f %c\n", s[i].id, s[i].avg, s[i].grade);
        }
}
