#include <stdio.h>
#include <stdlib.h>

int main() {
	
	//1. 4행 5열의 행렬값을 저장할 2차원 배열을 동적할당하는 코드 작성
	int i;
	int **matrix = (int **)malloc(4* sizeof(int *));
    for (i = 0; i < 4; i++)
    {
        matrix[i] = (int *)malloc(5 * sizeof(int));
    }

	//2. 1에서 작성해 만든 동적 할당 영역을 반환하는 코드 작성
    for (i = 0; i < 4; i++) free(matrix[i]);
    free(matrix);

    return 0;
}
