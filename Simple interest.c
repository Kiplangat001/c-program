/*A c program to calculate the simple interest*/
#include<stdio.h>
int main()
{
    /*P=Principle, R= Rate, T= Time*/
    int P,R,T;
    float interest;
    float simpleinterest;
    printf("Enter the value of Principle =P\n");
    scanf("%d",&P);
    printf("Enter the value of Rate =R\n");
    scanf("%d",&R);
    printf("Enter the value of Time =T\n");
    scanf("%d",&T);
    interest=P*R*T;
    simpleinterest=interest/100;
    printf("The simple interest is %.2f", simpleinterest);
    return 0;
}
