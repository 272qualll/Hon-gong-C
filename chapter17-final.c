#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct
{
	int id;
	char name[80];
	int kor;
	int eng;
	int math;
	int sum;
	char grade;
}student;

void print_data(student **ps1);
void swap(student **ps2, student **ps3);
void eval_grade(student **ps4);

int main(void)
{
	int i;
	student *stu[5];
	for (i = 0; i < 5; i++)
	{
		stu[i] = (student *)malloc(sizeof(student));		
		printf("학번 : ");
		scanf("%d", &(stu[i]->id));
		getchar();
		printf("이름 : ");
		gets(stu[i]->name);
		printf("국어, 영어, 수학 점수 : ");
		scanf("%d %d %d",&(stu[i]->kor), &(stu[i]->eng), &(stu[i]->math));
		(stu[i]->sum) = (stu[i]->kor + stu[i]->eng + stu[i]->math);
		eval_grade(stu[i]);		
	}
	
	printf("#정렬 전 데이터...\n");
	for (i = 0; i < 5; i++)
	{
		print_data(stu[i]);
		
	}
	
	for (i = 0; i < 4; i++)
	{
		for (int j = i+1; j < 5; j++)
			if (stu[j]->sum >= stu[i]->sum) swap(stu[j], stu[i]);
	}
	
	printf("#정렬 후 데이터...\n");
	for (i = 0; i < 5; i++)
	{
		print_data(stu[i]);
	}	
	
	for (i = 0; i < 5; i++)
	{
		free(stu[i]);
	}
	return 0;
}

void print_data(student** ps1)
{
	printf("%d %s %d %d %d %d %.1lf %c\n", (*ps1)->id, (*ps1)->name, (*ps1)->kor, (*ps1)->eng, (*ps1)->math, (*ps1)->sum, ((*ps1)->sum)/3.0, (*ps1)->grade);
}

void swap(student** ps2, student** ps3)
{
	student *temp;
	temp = *ps2;
	*ps2 = *ps3;
	*ps3 = temp;
}

void eval_grade(student** ps4)
{
	if (((*ps4)->sum)/3.0 >= 90.0)
	{
		(*ps4)->grade = 'A';
	}
	else if (((*ps4)->sum)/3.0 >= 80.0)
	{
		(*ps4)->grade = 'B';
	}
	else if (((*ps4)->sum)/3.0 >= 70.0)
	{
		(*ps4)->grade = 'C';
	}
	else
	{
		(*ps4)->grade = 'F';
	}
}
