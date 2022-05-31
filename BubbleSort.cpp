#include <iostream>
#include <vector>
using namespace std;
void swapNumbers(int *number1, int *number2)
{
    int temp = *number1;
    *number1 = *number2;
    *number2 = temp;
}
void bubbleSort(vector<int> &numbersToSort)
{
    bool ifSwapHappened = true;
    while (ifSwapHappened)
    {
        ifSwapHappened = false;
        for (int i = 0; i < numbersToSort.size(); i++)
        {
            for (int j = 1; j < numbersToSort.size() - i; j++)
            {
                if (numbersToSort[j - 1] > numbersToSort[j])
                {
                    swapNumbers(&numbersToSort[j - 1], &numbersToSort[j]);
                    ifSwapHappened = true;
                }
            }
        }
    }
}
void printSortedNumbers(vector<int> numbersToSort)
{
    for (int i = 0; i < numbersToSort.size(); i++)
    {
        cout << numbersToSort[i] << " ";
    }
    cout << endl;
}
int main()
{
    vector<int> numbersToSort;
    cout << "Enter amount of numbers you wanna sort: " << endl;
    int amount, number;
    cin >> amount;
    for (int i = 0; i < amount; i++)
    {
        cin >> number;
        numbersToSort.push_back(number);
    }
    bubbleSort(numbersToSort);
    printSortedNumbers(numbersToSort);
    return 0;
}