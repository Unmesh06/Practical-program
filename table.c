//Program for table of any number
#include<stdio.h>
int main()
{
    int i,num,j;
    printf("Enter the number of which table you want:");  //Enter a number
    scanf("%d",&num);

    for(i=1;i<=10;i++)
    {
        j=num*i;                                               
        printf("%d*%d=%d\n",num,i,j);
    }
 return 0;
}