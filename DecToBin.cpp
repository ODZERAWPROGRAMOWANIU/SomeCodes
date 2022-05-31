#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> fromDecToBin(int number)
{
    vector<int> result;
    while (number > 0)
    {
        result.push_back(number % 2);
        number /= 2;
    }
    return result;
}
string fromVecToString(vector<int> result)
{
    string temp = "";
    for (auto it : result)
    {
        temp += to_string(it);
    }
    reverse(temp.begin(), temp.end());
    return temp;
}
int main()
{
    int number;
    cin >> number;
    string binary = fromVecToString(
        fromDecToBin(number));
    cout << "Number " << number << " in binary is : "
         << binary << endl;
}