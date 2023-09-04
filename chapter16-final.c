#include <stdio.h>
#include <stdlib.h>

int pn(int num);

int main(void)
{
    int i, j, res, cnt = 0;
  	printf("> 양수 입력 : ");
  	scanf("%d", &res);
    char *p;
  	p = (char *)calloc(res, sizeof(char));
    
    for (i = 2; i < res; i++)
    {
        if (pn(i) == 0)
        {
            p[i-2] = 'X';
            printf("%5c", p[i-2]);
        }
        else
        {
            p[i-2] = (char)i;
            printf("%5d", p[i-2]);
        }
        cnt++;
        if (cnt % 5 == 0) printf("\n");
    }
    
  	free(p);
	
    return 0;
}

int pn(int num)
{
    int l, k = 1;
    for (l = 2; l < num; l++)
        if(num % l == 0)
        {
            k = 0; 
            break;
        }
    if (k == 1) return num; //소수 일 경우 
    if (k == 0) return 0; // 소수가 아닌 경우
}
