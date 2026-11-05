

#include <iostream>
using namespace std;

void upperCase(char *str) {
  int i = 0;
  while (str[i] != '\0') {
    if (str[i] >= 'a' && str[i] <= 'z') {
      str[i] -= 32;  // A=65
    }
    i++;
  }
}

void lowerCase(char *str) {
  int i = 0;
  while (str[i] != '\0') {
    if (str[i] >= 'A' && str[i] <= 'Z') {
      str[i] += 32;  // a=97
    }
    i++;
  }
}

int length(const char *str) {
  int length = 0;

  while (str[length] != '\0') {
    length++;
  }

  return length;
}

// el gdeed b2a a incriment by pointer
// size w readability el counter ahsn
// int length(const char *str) {
//     int length = 0;
//     while (*str != '\0') {
//         length++;
//         str++;
//     }
//     return length;
// }

int lengthComp(const char *str1, const char *str2) {
  int length1 = length(str1);
  int length2 = length(str2);

  if (length1 > length2)
    return 1;

  else if (length1 < length2)
    return -1;

  else
    return 0;
}

int stringComp(const char *str1, const char *str2) {
  int i = 0;
  while (str1[i] != '\0' && str2[i] != '\0') {
    if (str1[i] != str2[i]) {
      return str1[i] - str2[i];
    }
    i++;
  }
  return str1[i] - str2[i];
}

int stringCopy(char *str1, char *str2) {
  // at2ked el awel eno length el awell y2di el tani
  // without memory allocation
  // 3ndi so2al el size wel length
  if (length(str1) < length(str2)) {
    return -1;
  }

  int i = 0;

  while (str2[i] != '\0') {
    str1[i] = str2[i];
    i++;
  }

  str1[i] = '\0';

  return 0;
}

// fe function gahza bt3ml kda esmha strcpy()

// ================================================
// two results from one function
// h3ml new variable = flag w law == sum y return sum else return mulipty but it
// return one result only -> ptr
