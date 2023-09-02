#include <stdio.h>
#include <string.h>

void swap(char *cp, void *vp1, void *vp2);

int main(void)
{
	int age1, age2;
	double height1, height2;
	
	printf("첫 번째 사람의 나이와 키 입력 : ");
	scanf("%d%lf", &age1, &height1);
	
	printf("두 번째 사람의 나이와 키 입력 : ");
	scanf("%d%lf", &age2, &height2);
	
	swap("int", &age1, &age2);
	swap("double", &height1, &height2);
	
	printf("첫 번째 사람의 나이와 키 : %d, %.1lf\n", age1, height1);
	printf("두 번째 사람의 나이와 키 : %d, %.1lf\n", age2, height2);
	
	return 0;
}

void swap(char *cp, void *vp1, void *vp2)
{
	int itemp;
	double dtemp;
	
	if (strcmp(cp, "int") == 0)
	{
		itemp = *(int *)vp1;
		*(int *)vp1 = *(int *)vp2;
		*(int *)vp2 = itemp;
	}
	
	else if (strcmp(cp, "double") == 0)
	{
		dtemp = *(double *)vp1;
		*(double *)vp1 = *(double *)vp2;
		*(double *)vp2 = dtemp;
	}
}
