#include <iostream>
#include <vector> // yeah, i know c++ got lists

using namespace std;

vector <int> vect_test = {10, 2, 3, 4, 17};

int num_list(vector<int> vect)
{
  int tmp = 0;

  if (vect.size() == 0) return 0;

  tmp++;
  if (vect.size() > 1)
  {
    vect.pop_back();
    tmp += num_list(vect);
  }
  return tmp;
}

int main(void)
{
  cout << "List has " << num_list(vect_test) << " elements." << endl;

  return 0;
}
