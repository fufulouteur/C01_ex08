#include <stdio.h>
void ft_swap(int *a, int *b);

void ft_sort_int_tab(int *tab, int size)
{
  if(tab == NULL)
    return;
  //create a integer pointer
  int *checker;
  //copy tab value
  checker = tab;
  while(checker != tab +size -1)
  { 
    if(*checker > *(checker +1))
    {
      ft_swap(checker, checker +1);
      checker = tab;
    }
    checker++;
  }
}
