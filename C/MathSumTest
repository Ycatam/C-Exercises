#include <stdio.h>
#include <stdlib.h>

int main()
{
    int loop,d=0,e=0;
    srand(time(0));
    for(loop=0; loop<5; loop++)
    {
    int a,b,sum,c;
    a= rand() % 100;
    b= rand() % 100;
    sum= a+b;
    printf("What is the sum of %d and %d ?\n",a,b);
    scanf("%d", &c);

    if(c!=sum)
    {
    printf("Wrong answer, the correct answer is %d \n",sum);
    d++;
    }
    else if(c==sum){
    printf("The answer is correct\n");
    e++;
    }
    }
    printf("You answer the five questions, %d is wrong and %d is right.",d,e);
    return 0;
}
