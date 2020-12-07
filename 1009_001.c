#include <stdio.h>

int getgrade(FILE* indata, int* id, int* exam_1, int* exam_2, int* final);
void calcgrade(int exam_1, int exam_2, int final, float* avrg, char* grade);
void writegrade(FILE* outdata, int id, float avrg, char grade);

int main(void) {
        FILE* indata;
        FILE* outdata;
        int id, exam_1, exam_2, final;
        float avrg;
        char grade;
        printf("학점 채점을 시작합니다...\n");
        /*계속 안 되다가 인풋 아우풋 파일을 전부 경로 지정해주니 작동했다.
           c파일과 소스인 텍스트 파일이 같은 폴더에 있었는데도 컴파일이 안 된 이유를 잘 모르겠음...*/
        if(!(indata=fopen("/Users/ksy/Documents/Programming/C/doc/input.txt", "r"))) {
                printf("\aError has occurred while reading data...\n");
                return 100;
        }
        if(!(outdata=fopen("/Users/ksy/Documents/Programming/C/doc/output.txt", "w"))) {
                printf("\aError has occurred while writing data...\n");
                return 102;
        }
        while(getgrade(indata, &id, &exam_1, &exam_2, &final)) {
                calcgrade(exam_1, exam_2, final, &avrg, &grade);
                writegrade(outdata, id, avrg, grade);
        }
        fclose(indata);
        fclose(outdata);
        printf("학점 채점이 종료됩니다.\n수고 많으셨습니다...\n");
        return 0;
}

int getgrade(FILE* indata, int* id, int* exam_1, int* exam_2, int* final){
        int ioResult;
        ioResult=fscanf(indata, "%d%d%d%d", id, exam_1, exam_2, final);
        if(ioResult==EOF)
                return 0;
        else if(ioResult==!5) {
                printf("\aPlease check your input.txt file\n");
                return 0;
        }
        else
                return 1;
}

void calcgrade(int exam_1, int exam_2, int final, float* avrg, char*grade){
        *avrg=(exam_1+exam_2+final)/3;
        if(*avrg>=90)
                *grade='A';
        else if(*avrg>=80)
                *grade='B';
        else if(*avrg>=70)
                *grade='C';
        else if(*avrg>=60)
                *grade='D';
        else
                *grade='F';
        return;
}

void writegrade(FILE* outdata, int id, float avrg, char grade){
        fprintf(outdata, "%04d %0.2f %c\n", id, avrg, grade);
}
