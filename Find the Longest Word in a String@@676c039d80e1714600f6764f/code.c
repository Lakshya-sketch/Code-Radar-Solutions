#include <stdio.h>
#include <string.h>

int main() {
  char Str[100];
  fgets(Str,100,stdin);
  char *Ptr = strtok(Str, " ");
  int count = 0,max= 0,index;
  for( int i = 0 i <= strlen(mystr);i++){
    while (myPtr != NULL) {
        if(max > strlen(Str)){
            max = strlen(Str);
            index = i;
        }
    Ptr = strtok(NULL, " ");
  }
  }
  printf("%s\n",Str[i]);
  return 0;
}