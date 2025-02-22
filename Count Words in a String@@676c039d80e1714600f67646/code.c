#include <stdio.h>
#include <string.h>

int main() {
  char myStr[100];
  fgets(myStr,100,stdin);
  char *myPtr = strtok(myStr, " ");
  int count = 0;
  while (myPtr != NULL) {
    count++;
    myPtr = strtok(NULL, " ");
  }
  printf("%d\n",count);
  return 0;
}