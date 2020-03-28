/* This exercise is to print odd values from a name, in this case a string.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define max 50

int main(void) {
  char name[max];
  int i, lenght, opt;
  printf("Type a name without space and with 50 letters: \n");
  gets(name);
  lenght = strlen(name);
  printf("Choose one for even and two for odd: ");
  scanf("%d", &opt);
  switch (opt){
    case 1:
    printf("You choose the option %d for even: \n",opt);
    for(i=0; i<lenght; i+=2){
      printf("%c \n",name[i]);
    }
    break;
    case 2:
    printf("You choose the option %d for odd",opt);
    for(i=1; i<lenght; i+=2 ){
      printf("%c \n",name[i]);
    }
    break;

    default:
    printf("You choose the wrong option, choose a valid one \n");
    
    }
    
  return 0;
}
