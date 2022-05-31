#include <iostream>
#include <vector>
using namespace std;
int main()
{
  vector<int> allNumbers = {-1, -2, -3, -4,
                            -5, 6, 7, -13, 10, 2, -100, -56, 100, 2};
  int currSum = 0, maxSum = allNumbers[0];
  for (auto it : allNumbers)
  {
    currSum += it;
    if (it > currSum)
    {
      /* if some of value is greater than current sum
      it's better to start sum of numbers again,
  it's showing for us that current sum for sure, is not
  proper result, so we assign this value to our sum and we
  are starting to sum again
        */
      currSum = it;
    }
    /*
  After every iteration we are checking
  if our current sum is greater than maximum
  so far
      */
    maxSum = max(currSum, maxSum);
  }
  cout << maxSum << endl;
}