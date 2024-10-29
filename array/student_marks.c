//wap to read marks of 5 student. calculate sum and average using arrays
#include<stdio.h>
void main(){
    int marks[5];
    int sum=0,avg,i;
    printf("enter the marks of 5 subjects");
    for(i=0;i<5;i++)
    {
        scanf("%d",&marks[i]);

    }

    for(i=0;i<5;i++)
    {
        sum=sum+marks[i];
    }
    avg=sum/5;
    printf("sum=%f",sum);
    printf("\n average=%f",avg);
}