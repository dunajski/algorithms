#include <stdio.h>
#include <stdint.h>

#define _ARRAY_LEN(x) (sizeof(x) / sizeof(x[0]))

int binary_search(int list[], int list_len, int item)
{
  int low, high, mid, guess;
  low = 0;
  high = list_len - 1;

  while (low <= high)
  {
    mid = (low + high) / 2;
    guess = list[mid];

    if (guess == item)
      return mid;
    if (guess > item)
      high = mid - 1;
    else
      low = mid + 1;
  }

  return UINT16_MAX;
}

int my_list[] = {1, 3, 5, 7, 9};

int main(void)
{
  printf("%d\n", binary_search(my_list, _ARRAY_LEN(my_list), 3));

  return 0;
}
