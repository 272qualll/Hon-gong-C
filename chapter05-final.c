#include <stdio.h>

int main(void){
  int f, l;
  char k;
  printf("사칙연산 입력(정수) : ");
  scanf("%d%c%d",&f,&k,&l);
   
  switch(k){
    case '+':
      printf("%d+%d=%d",f,l,f+l);
      break;
    case '-':
      printf("%d-%d=%d",f,l,f-l);
      break;
    case '*':
      printf("%d*%d=%d",f,l,f*l);
      break;
    case '/':
      printf("%d/%d=%d",f,l,f/l);
      break;
    default:
      printf("사칙연산 기호가 아닙니다.");
      break;      
  }
  return 0; 
}
