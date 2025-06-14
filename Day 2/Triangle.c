#include <stdio.h>
int main()
{
    int tri1,tri2,tri3;
    printf("Enter Triangle 1: ");
    scanf("%d",&tri1);
     printf("Enter Triangle 2: ");
    scanf("%d",&tri2);
     printf("Enter Triangle 3: ");
    scanf("%d",&tri3);
    ((tri1+tri2)>tri3) ?printf("Triangle is possible"):printf("Trinagle is not possible");
    return 0;
    
    
    
}
