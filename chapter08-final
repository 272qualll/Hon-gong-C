#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void){
    char str1[80], str2[80];
    int count, i, t = 0, s = 0;
    
    printf("문장 입력 : ");
    gets(str1);

    while (str1[s] != '\0') s++;
    
    for (i = 0; i <= s; i++){
        if(str1[i] >= 'A' && str1[i] <= 'Z'){
            str2[i] = str1[i]+32;
            t++;
        }
        else str2[i] = str1[i];
    }
    printf("바뀐 문장 : ");
    puts(str2);
    printf("바뀐 문자수 : %d", t);

    return 0;
}
