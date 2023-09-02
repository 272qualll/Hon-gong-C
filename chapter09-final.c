#include <stdio.h>

void swap(double *pa, double *pb); // 두 실수를 바꾸는 함수
void line_up(double *maxp, double *midp, double *minp); // 함수 선언

int main(void) {

    double max, mid, min;

    printf("실수 값 3개 입력 : ");
    scanf("%lf%lf%lf", &max, &mid, &min);
    line_up(&max, &mid, &min);
    printf("정렬된 값 출력 : %.1lf, %.1lf, %.1lf\n", max, mid, min);

    return 0;
}

void swap(double *pa, double *pb){
    double temp;

    temp = *pa;
    *pa = *pb;
    *pb = temp;
}

void line_up(double *maxp, double *midp, double *minp){
    if (*maxp < *midp) swap(maxp, midp);
    if (*maxp < *minp) swap(maxp, minp);
    if (*midp < *minp) swap(midp, minp); 
}

/* swap(double *pa) 와 같은 경우 매개변수에서 pa 라는 포인터를 선언 하고서
매개변수로써는 포인터를 받기 때문에 27줄에서 *을 붙이지 않은 maxp 를 전달해주는 것이다.
*/
