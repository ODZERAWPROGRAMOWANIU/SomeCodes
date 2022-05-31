#include <iostream>
#include <set>
using namespace std;
int main()
{
    set<char> lettersToCheck;
    string properPangram = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string text, sortedText = "";
    while (true)
    {
        cout << "Enter the text (only English Alphabet 
        without special signs) : " << endl;
        cout << "Press 0 to quit" << endl;
        getline(cin, text);
        if (text == "0")
        {
            exit(0);
        }
        for (int i = 0; i < text.length(); i++)
        {
            if (text[i] != ' ')
            {
                lettersToCheck.insert(toupper(text[i]));
            }
        }
        for (auto iter = lettersToCheck.begin();
             iter != lettersToCheck.end(); ++iter)
        {
            sortedText += *iter;
        }
        if (sortedText == properPangram)
        {
            cout << "Yes, it's pangram" << endl;
        }
        else
        {
            cout << "No, it's not pangram" << endl;
        }
        sortedText.clear();
        lettersToCheck.clear();
    }
    return 0;
}