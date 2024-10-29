
#include<stdio.h>
int main(){
    int newarr[5],arr1[5],arr2[5];
    int i;
    printf("elements of 1st array");
    
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr1[i]);
    }
    printf("elements of 2nd array");
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr2[i]);
    }
    for(i=0;i<5;i++)
    {
    newarr[i]=arr1[i]+arr2[i];
    printf("sum of element in index %d is %d \n",i,newarr[i]);
    }
    return 0;
}
