#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b,c, i;
    srand(time(0));
    b= rand() %100;

    printf("Choose 1 for continue, 2 for give up and exit and 3 for exit only: \n");
    scanf("%d", &c);

    if(c==1){
    for(i=0; i<10; i++){
    printf("Try to guess the number between 0 and 100: ");
    scanf("%d", &a);
    if(a<b){
            printf("The typed number %d is minor than the hidden number, try again. \n", a);

            }
    else if(a>b){
            printf("The typed number %d is greater than the hidden number, try again \n", a);

            }
    else if(a==b){
            printf("You typed %d and the hidden number is %d, you are correct!",a,b);
            break;
            }
    }
    }
    if(c==2){
        printf("The hidden number is %d: ",b);

            }
    if(c==3){

        printf("Try again later, see you!");

            }
    return 0;

}
