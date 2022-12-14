/*C program to count digits using recursion.*/
 
#include <stdio.h>
 
//function to count digits
int countDigits(int num)
{
    static int count=0;
     
    if(num>0)
    {
        count++;
        countDigits(num/10);
    }
    else
    {
        return count;
    }
}
int main()
{
    int number;
    int count=0;
    scanf("%d",&number);
     
    count=countDigits(number);
     
    printf("The number of digits in the number is :  %d\n",count);
     
    return 0;
}
