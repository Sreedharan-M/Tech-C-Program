#include <stdio.h>
int main()
{
    int num;
    printf("Enter n value: ");
    scanf("%d",&num);
    
    printf("For Loop: ");
    for(int i=0;i<=num;i++){
        printf(" %d ",i);
    }
    printf("\nWhile Loop: ");
    int i=0;
    while(i<=num){
        printf(" %d ",i);
        i++;
    }
    
    printf("\nDo While: ");
    i=0;
    do{
        printf(" %d ",i);
        i++;
    }while(i<=num);
    
    
}
