#include <stdio.h>
 
#define arr_len(x) (sizeof(x)/sizeof(x[0]))

int arr[] = {2, 4, 6};

int sum(int arr[], int arr_len)
{
  int tmp = 0;
  if (!arr_len) return 0;

  tmp += arr[0];

  if (arr_len > 1)
    tmp += sum(++arr, --arr_len);

  return tmp;
}


int main(void)
{
  printf("Sum = %d\n", sum(arr, arr_len(arr)));
  return 0;
}
