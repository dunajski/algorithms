#include <cstdint>
#include <iostream>
#include <vector>

using namespace std;

int binary_search(vector<int> list, int item)
{
  int low = 0;
  int high = list.size();
  int mid = 0;
  int guess = 0;

  while (low <= high)
  {
    mid = (low + high) / 2;
    guess = list.at(mid);

    if (guess == item)
      return mid;
    if (guess > item)
      high = mid - 1;
    else
      low = mid + 1;
  }

  return UINT16_MAX;
}

vector<int> my_list = {1, 3, 5, 7, 9};

int main(void)
{
  cout << binary_search(my_list, 3) << endl;
  return 0;
}
