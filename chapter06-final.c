int main(){
  int i, j, k, l = 0;
  int a;

  printf("enter the number over or equal 2 : ");
  scanf("%d", &a);

  for (i = 2; i <= a; i++){
    k = 1;
    for (j = 2; j < i; j++)
      if (i%j == 0){
        k = 0;
        break;
      } 
  }

  if (k == 1){
    l++;
    printf("%5d", i);
    if(l%5 == 0) printf("\n");
  }
}
