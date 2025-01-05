#include <stdio.h>
#include <limits.h>
int main() {
  int x = INT_MAX; 
  if (x + 1 > INT_MAX) {
    printf("Integer Overflow Occurred!");
  } else {
    printf("No Overflow");
  }
  return 0;
}