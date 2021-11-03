#include<stdio.h>
#include<conio.h>

int main()
{
  int i = 0, j= 0, r = 0, c = 0;

  printf("\n Enter Row Count => ");
  scanf("%d",&r);

  printf("\n Enter Column Count => ");
  scanf("%d",&c);

  for(i = 0; i < r; i++)
  {
      for(j = 0; j < c; j++)
      {
              printf(" * ");
      }
      printf("\n");
  }
  getch();
  return 0;
}
