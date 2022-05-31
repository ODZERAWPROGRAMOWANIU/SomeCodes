#include <iostream>
using namespace std;
int main()
{
  int amount, sum = 0, temp;
  cout << "Enter amount of numbers: " << endl;
  cin >> amount;
  int allNumbers[amount];
  cout << "Enter all numbers: " << endl;
  for (int i = 1; i <= amount; i++)
  {
    cin >> allNumbers[i];
  }
  int prefixSum[amount];
  prefixSum[0] = 0;
  for (int j = 1; j <= amount; j++)
  {
    sum += allNumbers[j];
    prefixSum[j] = sum;
  }
  cout << "Enter the indexes of range: " << endl;
  int a, b;
  cin >> a >> b;
  int result = prefixSum[b] - prefixSum[a - 1];
  cout << "Sum of numbers in this range is equal to: "
       << result << endl;
  return 0;
}