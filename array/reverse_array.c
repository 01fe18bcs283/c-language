#include<stdio.h>

void main(){
    int a[5],i;
    printf("enter the elements of array");
    for (i=0;i<5;i++)
    {
    scanf("%d",&a[i]);
    }
    printf("\n");1

    for(i=0;i<5;i++)
    {
        printf("%d",a[i]);
    }
    printf("\n");
    for(i=4;i>=0;i--)
    {
        printf(" %d",a[i]);
    }

}
