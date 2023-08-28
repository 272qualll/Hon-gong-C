#include <stdio.h>
#include <string.h>

void swap(char *pa, char *pb);
void line_up(char *max, char *mid, char *min);

int main(void)
{
  char str1[80], str2[80], str3[80];
  
  scanf("세 단어 입력 : %s%s%s", str1,str2,str3);
  
  line_up(str1,str2,str3);
  
  printf("%s%s%s", str1,str2,str3);
  
  return 0;
}

void swap(char *pa, char*pb)
{
  char temp[] = "";
  strcpy(temp, pa);
  strcpy(pa, pb);
  strcpy(pb, temp);
}

void line_up(char *maxp, char *midp, char *minp)
{
  if((strcmp(maxp,midp)) > 0) swap(maxp, midp);
  if((strcmp(maxp,minp)) > 0) swap(maxp, minp);
  if((strcmp(midp,minp)) > 0) swap(midp, minp);
}
