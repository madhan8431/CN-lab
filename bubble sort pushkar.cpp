#include<stdio.h>
void bubble(int a[],int n)
{
    int i,j,temp;
    for(i=0;i<n;i++)
    for(j=0;j<n-i-1;j++)
        if(a[j+1]<a[j])
        {
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
        }
}
int main()
{
    int i,n,a[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    bubble(a,n);
    printf("The Sorted Array is:");
    for(i=0;i<n;i++)
    printf("%d ",a[i]);
}
