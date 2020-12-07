#include <stdio.h>

int add(int x, int y);
void printResult(int x, int y, int result);
/*stdio.h에 포함되어 있지 않은 add와 printResult라는 함수(펑션)을 쓸 것이라고 선언*/

int main(void) {
  int a=3, b=5, sum=0;
  sum=add(a,b);/*add 함수 호출*/
  printResult(a,b,sum);/*printResult 함수 호출*/
  return 0;
}

int add(int x, int y){
  return x+y;
}

void printResult(int x, int y, int result){
  /*void형 함수는 리턴할 것이 없다는 이야기*/
  printf("%d+%d=%d\n",x,y,result);
}
