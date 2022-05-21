//Documentation section
/* Created by tira(1/5/2022)- To find prime number between two integers */

//Pre-processor section
#include<stdio.h>

//Global variable section
int checkPrimeNumber(int n);

//Main function section
int main()
{
    int n1, n2, i, flag;

    printf("Enter positive integer 1: ");
    scanf("%d" , &n1);
    printf("Enter positive integer 2: ");
    scanf("%d" , &n2);

    //swap n1 and n2 if n1 > n2
    if ( n1 > n2 )
    {
        n1 = n1 + n2;
        n2 = n1 - n2;
        n1 = n1 - n2;
    }

    printf("Prime number between %d and %d are: ", n1, n2);
    for( i = n1 + 1; i < n2; i++)
    {
        //flag will be equal to 1 if i is prime 
        flag =  checkPrimeNumber(i);

        if (flag == 1)
        {
            printf("%d " , i);
        }
    }
    return 0;
    
}
//User defined section
int checkPrimeNumber(int n)
{
    int j, flag = 1;

    for (j = 2; j <= n/2; j++)
    {
        if( n % j == 0)
        {
            flag = 0;
            break;
        }
    }

    return flag;
}
