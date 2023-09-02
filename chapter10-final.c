#include <stdio.h>

void input_nums(int *lotto_nums);
void print_nums(int *lotto_nums);

int main(void){
  int lotto_nums[6];

  input_nums(lotto_nums);
  print_nums(lotto_nums);
  
  return 0;
}

void input_nums(int *lotto_nums){
  int i = 0, j;

  while(i < 6){
    int k = 1;
    printf("번호 입력 : ");
    scanf("%d", &lotto_nums[i]);
    for(j = 0; j < i; j++){
      if(lotto_nums[i] == lotto_nums[j]){
        printf("같은 번호가 있습니다!\n");
        k = 0;
      }
    }
    if (k == 1) i++; 
  }  
}

void print_nums(int *lotto_nums){
  int l;
  printf("로또 번호 : ");
  for (l = 0; l < 6; l++){
    printf("%d\t", lotto_nums[l]);
  }
}
