#include<stdio.h>
void main(){
    int num[10];
    int i,even=0,odd=0;
    printf("enter 10 numebers");
    for(i=0;i<10;i++)
    {
        scanf("%d",&num[i]);
    }
    for(i=0;i<10;i++)
    {
        if(num[i]%2==0)
        {
          even=even+1;
        }
        else{
           odd=odd+1;
        }
    }
     printf("even numbers=%d and oddnumbers= %d",even, odd);
}


