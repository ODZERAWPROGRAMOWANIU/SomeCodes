#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool ifGivenStringIsAnagram(string originalText, string textToCompare)
{
  string wordToCompare, originalWord;
  vector<char> lettersFromOriginal;
  vector<char> lettersToCompare;
  for (int i = 0; i < originalText.length(); i++)
  {
    if (originalText[i] != ' ')
    {
      lettersFromOriginal.push_back(tolower(originalText[i]));
    }
    else if (originalText[i] == ' ')
    {
      continue;
    }
  }
  for (int j = 0; j < textToCompare.length(); j++)
  {
    if (textToCompare[j] != ' ')
    {
      lettersToCompare.push_back(tolower(textToCompare[j]));
    }
    else if (textToCompare[j] == ' ')
    {
      continue;
    }
  }
  sort(lettersToCompare.begin(), lettersToCompare.end());
  for (int m = 0; m < lettersToCompare.size(); m++)
  {
    wordToCompare += lettersToCompare[m];
  }
  sort(lettersFromOriginal.begin(), lettersFromOriginal.end());
  for (int k = 0; k < lettersFromOriginal.size(); k++)
  {
    originalWord += lettersFromOriginal[k];
  }
  if (originalWord == wordToCompare)
  {
    return true;
  }
  else
  {
    return false;
  }
}
int main()
{
  string originalText, textToCompare;
  int amountOfChecks;
  cin >> amountOfChecks;
  cin.ignore();
  while (amountOfChecks--)
  {
    getline(cin, originalText);
    getline(cin, textToCompare);
    if (ifGivenStringIsAnagram(originalText, textToCompare))
    {
      cout << "Yes, it's anagram" << endl;
    }
    else
    {
      cout << "No, it's not anagram" << endl;
    }
  }

  return 0;
}