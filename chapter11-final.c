#include <stdio.h>

int main() {

    int cnt = 0 , max, res;
    char ch;

    do{
        res = scanf("%c", &ch);
        if(res == '\n') if (cnt > max) max = cnt;
        cnt++;
 
    }while (res != -1);

    printf("가장 긴 단어의 길이 : %d", max);
    
    return 0;
}
