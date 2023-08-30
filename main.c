#include <stdio.h>
void ft_sort_int_tab(int *tab, int size);

int main(void)
{
  int a[4];
  a[0] = 10;
  a[1] = 2;
  a[2] = 8;
  a[3] = 3;
  ft_sort_int_tab(a, 4);
  printf("%i\n", a[0]);
  printf("%i\n", a[1]);
  printf("%i\n", a[2]);
  printf("%i\n", a[3]);
  printf("TOUT A ETAIS TRIER!!!\n");
  return 0;
}
