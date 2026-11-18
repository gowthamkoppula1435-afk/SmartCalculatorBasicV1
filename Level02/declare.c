#include<stdio.h>
int main()
{
    printf("=========================================\n");
    printf("               CALCULATOR                \n");
    printf("=========================================\n");
float num1;
float num2;
    printf("Enter num1:  ");
    scanf("%f",&num1);
    printf("Enter num2:  ");
    scanf("%f",&num2);
char op;
    printf("Enter a character:  ");
    scanf(" %c",&op);
    if(op=='+')
        printf("%f + %f = %f",num1,num2,num1+num2);
    else if(op == '-')
         printf("%f - %f = %f",num1,num2,num1-num2);
    else if(op == '*')
         printf("%f * %f =%f",num1,num2,num1*num2);
    else if(op == '%')
         printf("%f %% %f = %f",num1,num2,(int)num1%(int)num2);
    else if(op == '/')
         printf("%.3f / %.3f= %.3f",num1,num2,num1/num2);
    else
        printf("Not a valid operator");
         return 0;
}