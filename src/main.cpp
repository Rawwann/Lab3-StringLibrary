#include <iostream>

#include "mystring.h"

#define SIZE1 10
#define SIZE2 5

using namespace std;

int lengthComp(const char *str1, const char *str2);

int stringComp(const char *str1, const char *str2);

int stringCopy(char *str1, char *str2);

int main() {
  // upper,lower
  char name[SIZE1] = "RaWaN";

  upperCase(name);

  cout << name << endl;

  lowerCase(name);

  cout << name << endl;

  // compare
  char name1[SIZE1] = "Rawan";
  char name2[SIZE1] = "Rawan";
  char name3[SIZE2] = "Hany";
  char name4[SIZE2] = "HANY";

  int lengthResult = lengthComp(name1, name3);
  int result = stringComp(name1, name2);

  cout << lengthResult << endl;
  cout << result << endl;

  result = stringComp(name3, name4);

  cout << result << endl;

  // copy

  stringCopy(name4, name2);
  cout << name4 << endl;

  int copyResult1 = stringCopy(name4, name2);
  cout << copyResult1 << endl;

  stringCopy(name1, name3);
  cout << name1 << endl;

  int copyResult2 = stringCopy(name1, name3);
  cout << copyResult2 << endl;

  return 0;
}