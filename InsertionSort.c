#include<stdio.h>
int main()
{
    int array[10],n,i,j,temp;
    printf("How many elements: ");
    scanf("%d",&n);
    printf("Enter the values: ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&array[i]);
    }

    printf("Before sorting the array is: ");
    for(i=0; i<n; i++)
    {
        printf("%d ",array[i]);
    }

    for(i=1; i<n; i++)
    {
        temp=array[i];
        j=i-1;
        while(j>=0 && array[j]>temp)
        {
            array[j+1]=array[j];
            j--;
        }
        array[j+1]=temp;
    }

    printf("\nAfter sorting the array is: ");
    for(i=0; i<n; i++)
    {
        printf("%d ",array[i]);
    }
}
