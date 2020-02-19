#include<stdio.h>
int main()
{
    int A[]= {8,9,10,2,5,6};
    int n=sizeof(A)/sizeof(A[0]);
    int index=finddip(A,0,n-1,n);
    printf("The dip element is %d",A[index]);
}

int finddip(int A[],int low,int high,int n)
{
    int mid=(low+high)/2;
    if((mid==0||A[mid-1]>=A[mid])&&(mid==n-1||A[mid+1]>=A[mid]))
        return mid;
    else if(mid-1>=0 && A[mid-1]<A[mid])
        return finddip(A,low,mid-1,n);
    else
        return finddip(A,mid+1,high,n);
}
