#include <stdio.h>


void dosum(int num1, int num2)
{
    int sum;
    sum = num1 + num2;
    printf("The sum of the given numbers : %d\n", sum);
}

void dosubtraction(int num1, int num2)
{

    int sub;
    sub = num1 - num2;
    printf("The substraction of the given numbers : %d\n", sub);
}

void domultiplication(int num1, int num2)
{

    int mul;
    mul = num1*num2;
    printf("The multiplication of the given numbers : %d\n",mul);
}

void dodivision(int num1, int num2)
{

    if (num2== 0)
    {
        printf( "diving number by 0 invalid");

    }
    else
    {
        int div;
        div = num1/num2;
        printf("The division of the given numbers : %d\n",div);
    }


}

void domodulus(int num1, int num2)
{

    int mod;
    mod = num1%num2;
    printf("The mudulus of the given numbers : %d\n",mod);
}

void dopower(int a, int power)
{

    int res, i;
    res = 1;

    for(i=1; i<=power; i++)
    {
        res = res * a;
        printf("Current power: %d, res: %d\n",i,res);
    }

    printf("The power of the given numbers : %d\n", res);

}

void dosquareroot(int a)
{
    float res, num;
    num = (float) a;
    res = sqrt(num);
    printf("The square root is: %f\n",res);
}


int main()
{
    int num1, num2;
    char ch;

    printf("Enter the calculator Operation you want to do: '+' for addition, '-' subtraction, '*' multiplication, '/' division, '%%' modulus, '^' power, '$' squareroot\n");
    scanf("%c", &ch);

    if (ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch =='%' || ch == '^' || ch =='$')
    {
        printf("Enter first number: ");
        scanf("%d",&num1);

        if(ch != '$')
        {
            printf("Enter second number: ");
            scanf("%d",&num2);
        }

        if (ch == '+')
        {

            dosum(num1,num2);
        }
        else if (ch == '-')
        {
            dosubtraction(num1,num2);
        }
        else if (ch== '*')
        {
            domultiplication(num1,num2);
        }
        else if (ch=='/')
        {
            dodivision(num1,num2);
        }
        else if (ch=='%')
        {
            domodulus(num1,num2);
        }
        else if (ch=='^')
        {
            dopower(num1, num2);
        }
        else if (ch == '$')
        {
            dosquareroot(num1);
        }

    }
    else
    {
        printf("you entered wrong operation. Please try again.");
    }




    return 0;
}
