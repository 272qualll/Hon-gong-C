#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINES 10
#define MAX_LENGTH 20

int main(void) {
    FILE *afp, *bfp, *cfp;
    char str[MAX_LENGTH];
    char *arr[MAX_LINES];
    int i = 0, j = 0;

    afp = fopen("a.txt", "r");
    if (afp == NULL) {
        printf("a.txt 파일을 열지 못했습니다.\n");
        return 1;
    }

    bfp = fopen("b.txt", "r");
    if (bfp == NULL) {
        printf("b.txt 파일을 열지 못했습니다.\n");
        return 1;
    }

    cfp = fopen("c.txt", "a");
    if (cfp == NULL) {
        printf("c.txt 파일을 열지 못했습니다.\n");
        return 1;
    }

    while (fgets(str, sizeof(str), afp) != NULL) {
        str[strlen(str) - 1] = '\0'; // 개행 문자 제거
        arr[i] = strdup(str); // 문자열 복제
        i++;
    }

    while (fgets(str, sizeof(str), bfp) != NULL) {
        str[strlen(str) - 1] = '\0'; // 개행 문자 제거
        int found = 0;
        for (int k = 0; k < i; k++) {
            if (strcmp(arr[k], str) == 0) {
                found = 1;
                break;
            }
        }
        if (!found) {
            fputs(str, cfp);
            fputc('\n', cfp); // 새로운 줄 추가
        }
    }

    // 메모리 해제
    for (int k = 0; k < i; k++) {
        free(arr[k]);
    }

    fclose(afp);
    fclose(bfp);
    fclose(cfp);

    return 0;
}
