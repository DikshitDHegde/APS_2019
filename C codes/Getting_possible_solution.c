#include<stdio.h>
#include<string.h>

int main()
{
    int arr[16];
    int i,j,k;
    int a[]={3,5,10};
    memset(arr,0,16*sizeof(int));
    arr[0]=1;
    for(j=0;j<3;j++)
    {
        k = a[j];
        for(i=k;i<=15;i++)
        {
            if(arr[i-k]!=0)
            {
                arr[i] = arr[i] + arr[i-k];
            }
        }
    }
    printf("%d\n",arr[15]);
    return 0;
}