#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
  cout << "Hello, World\n";

  /*
   * String is an array of characters.
   * The last element in the array is equal to '\0', which is a null character.
   */

  char name[100] = "Hello, World";
  // ['H', 'a', 'l', 'l', 'o', ',', ' ', 'W', 'o', 'r', 'l', 'd', '\0', '']
  cout << name << '\n';

  name[8] = 'd';
  cout << name << '\n';

  name[9] = '\0';
  // ['H', 'a', 'l', 'l', 'o', ',', ' ', 'W', 'd', 'r', '\0', 'd', '\0', '']
  cout << name << '\n';

  return 0;
}