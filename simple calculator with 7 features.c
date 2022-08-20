#include<stdio.h>
#include<conio.h>
#include<math.h>

void main(void)
{
    int op;
    float a,b;
    printf("select your operator");
    printf("\n1. ADDITION");
    printf("\n2. SUBTRACT");
    printf("\n3. MULTIPLY");
    printf("\n4. DIVIDE");
    printf("\n5. PERCENTAGE (obt.marks,total.marks)");
    printf("\n6. SQUARE POWER 2");
    printf("\n7. CUBE POWER 3");
    printf("\n\nEnter your operator 1,2,3,4,5,6,7  ");
    scanf("%d",&op);
    printf("\nEnter the two value by using comma ");
    scanf("%f,%f",&a,&b);
    if (op==1)
    {
        printf("ADDITION(+) = %6.2f",a+b);
    }
    else if (op==2)
    {
        printf("SUBTRACTION(-) = %6.2f",a-b);
    }
    else if (op==3)
    {
        printf("MULTIPLY(*) = %6.2f",a*b);
    }
    else if (op==4)
    {
        printf("DIVIDE(/) = %6.2f",a/b);
    }
    else if (op==5)
    {
        printf("PERCENTAGE(%) = %6.2f",(a/b)*100);
    }
    else if (op==6)
    {
        printf("SQUARE POWER 2 = %6.2f",a*a);
    }
    else if (op==7)
    {
        printf("CUBE POWER 3 = %6.2f",a*a*a);
    }
    else
    {
        printf("INVAILD OPERATOR");
    }
    getch();
}