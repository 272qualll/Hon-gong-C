#include <stdio.h>

int rec_func(int n);

int main(void){
  printf("%d", rec_func(10));
}

int rec_func(int n){
  if (n = 1) return 1;
  return (n + rec_func(n-1));
}
