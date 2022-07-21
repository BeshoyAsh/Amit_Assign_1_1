#include <stdio.h>
#include <stdlib.h>

int main()
{

    char x,x1,x2,x3,x4,x5,x6,x7,x8; // it's the number after division by 2
    char rem,rem1,rem2,rem3,rem4,rem5,rem6,rem7,rem8; // the reminder of modules ( if there is rem so it = 1 if not it=0)
    printf("enter your number= "); // msg for user
    scanf("%d",&x); // user put the x_input
    // Now i will preform the devision and modules to the number
    rem=x%2;
    x1=x/2;
    rem1=x1%2;
    x2=x1/2;
    rem2=x2%2;
    x3=x2/2;
    rem3=x3%2;
    x4=x3/2;
    rem4=x4%2;
    x5=x4/2;
    rem5=x5%2;
    x6=x5/2;
    rem6=x6%2;
    x7=x6/2;
    rem7=x7%2;
    x8=x7/2;
    rem8=x8%2;
    // now i will print the remns from rem8 to rem1.
    printf("The Binary output is: %d%d%d%d%d%d%d%d%d",rem8,rem7,rem6,rem5,rem4,rem3,rem2,rem1,rem);
    //+Point (print hex-decimal)
    printf("\nThe hex-decimal output is: %x",x);

    return 0;
}
