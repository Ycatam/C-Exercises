#include <stdio.h>
#include <stdlib.h>

int main()
{
    int loop;

    do{
    int a;
    printf("Choose one option: \n");
    printf("1 for +, 2 for -, 3 for x, 4 for Div \n");
    scanf("%d", &a);

    switch(a){

    case 1:
    {
    int b,c,sum;
    printf("Type a positive intiger number: \n");
    scanf("%d",&b);
    printf("Type another positive intiger number: \n");
    scanf("%d",&c);
    sum = b+c;
    printf("The result of the sum between %d and %d is %d: \n",b,c,sum);
    }

    break;

    case 2:

    {
    int d,e,minus;
    printf("Type a positive intiger number: \n");
    scanf("%d",&d);
    printf("Type another positive intiger number: \n");
    scanf("%d",&e);
    minus = d-e;
    printf("The result of the minus between %d and %d is %d: \n",d,e,minus);
    }

    break;

    case 3:

    {
    int f,g,multi;
    printf("Type a positive intiger number: \n");
    scanf("%d",&f);
    printf("Type another positive intiger number: \n");
    scanf("%d",&g);
    multi = f*g;
    printf("The result of the multiplication between %d and %d is %d: \n",f,g,multi);
    }
    break;

    case 4:
    {
    int h,i,div;
    printf("Type a positive intiger number: \n");
    scanf("%d",&h);
    printf("Type another positive intiger number: \n");
    scanf("%d",&i);
    div = h/i;
    printf("The result of the division between %d and %d is %d: \n",h,i,div);
    }
    break;

    default:
    printf("Invalid option\n");
    break;
    }

    printf("Type 1 to continue or any other to stop \n");
    scanf("%d", &loop);

    }while(loop==1);
    return 0;

}
