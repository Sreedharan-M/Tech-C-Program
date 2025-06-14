#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    
    int i=0;
    do{
        if(i%2==0){      /// if(i&1==0)
            printf("%d It is Even\n",i);
            
        }
        else{
            printf("%d It is odd\n",i);
        }
        i++;
        }while(i<=num);
    }

