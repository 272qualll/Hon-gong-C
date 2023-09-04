#include <stdio.h>

struct cracker
{
    double calories;
    int price;
};

int main(void)
{
    struct cracker basasak;
	
    printf("바사삭의 가격과 열량을 입력하세요 : ");
	  scanf("%d %lf", &(basasak.price), &(basasak.calories));
  
  	printf("%d원\n", basasak.price);
  	printf("%.1lfkcal", basasak.calories);
	
    return 0;
}
