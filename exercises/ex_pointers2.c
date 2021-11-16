#include <stdio.h>
int main() {
  char str[20], *pt;
  int i = 0;
  printf("Pointer Example: Length of String \n");
  printf("Enter a string [max: 20] : ");
  gets(str); // reads a line
  pt = str;
  while (*pt != '\0') {
    i++;
    pt++;
  }
  printf("Length of String : %d", i);

  return 0;
}
