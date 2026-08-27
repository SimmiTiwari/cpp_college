// 03_vowel_consonant.cpp
// Check if a character is Vowel or Consonant
#include <iostream>
using namespace std;
int main() {
char ch;
cout << "Enter a character: ";
cin >> ch;
// Convert to lowercase for uniform comparison
ch = tolower(ch);
if (ch >= 'a' && ch <= 'z') {
if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
cout << ch << " is a Vowel." << endl;
else
cout << ch << " is a Consonant." << endl;
} else {
cout << ch << " is not an alphabet character." << endl;
}
return 0;
}