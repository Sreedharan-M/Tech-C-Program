#include <stdio.h>
int main()
{
    int year;
    printf("Enter the year: ");
    scanf("%d",&year);
    if((year%4==0 && year%100!=0) || (year%400==400)){
        printf("It is a Leap Year");
        
    }
    else{
        printf("It is Not a leap year");
    }
    
    
}
