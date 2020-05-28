#include <iostream>
#include<conio.h>

using namespace std;
inline char check_vowel(char c)
{
    int isLowercaseVowel, isUppercaseVowel;

    isLowercaseVowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');

    isUppercaseVowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');

    if (isLowercaseVowel || isUppercaseVowel)
        cout << c << " is a vowel.";
    else
        cout << c << " is a consonant.";

}

int main()
{
    char c;

    cout << "Enter an alphabet: ";
    cin >> c;
    check_vowel(c);

    getch();
    return 0;
}
