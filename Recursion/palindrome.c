#include <stdio.h>
#include<string.h>
#include <stdbool.h>

bool is_palindrome(char *str, int start, int end) {
  if (start == end) {
    return true;
  }

  if (str[start] != str[end]) {
    return false;
  }
  return is_palindrome(str, start + 1, end - 1);
}

int main() {
  char str[100];
  scanf("%s",str);
  int len = strlen(str);
  if (is_palindrome(str, 0, len - 1)) {
    printf("Yes it is a is palindrome");
  } else {
    printf("No it is not a palindrome");
  }

  return 0;
}
