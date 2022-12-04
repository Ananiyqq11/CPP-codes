#include <iostream>
using namespace std;

int main() {
  char c;

  cout << "Enter an alphabet: ";
  cin >> c;

  // show error message if c is not an alphabet
  if (!isalpha(c)) {
    cout << "Error! Non-alphabetic character.";
  }
  else {
    char temp = tolower(c);
    bool is_vowel;

    // evaluates to 1 (true) if temp is a lowercase vowel
    is_vowel = (temp == 'a' || temp == 'e' || temp == 'i' || temp == 'o' || temp == 'u');

    if (is_vowel)
      cout << c << " is a vowel.";
    else
      cout << c << " is a consonant.";
  }

  return 0;
}






























































   
    
