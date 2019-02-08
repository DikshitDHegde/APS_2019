#include<stdio.h>
#include<math.h>

int main()
{
    char data[]={'a','b','c'};
    int set = 3;
    unsigned int size = pow(2,set);
    int i,j;
    for(i=0;i<size;i++)
    {
        for(j=0;j<set;j++)
        {
            if(i&(1<<j))
            {
                printf("%c",data[j]);
            }
        }
        printf("\n");
    }
    return 0;
}