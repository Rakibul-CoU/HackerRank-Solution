#include<stdio.h>
int main()
{
    int i, n=5, a[100], j, temp;
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    for(i=0, j=n-1; i<n; i++, j--)
    {
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }


    for(i=0; i<n; i++)
    {

        printf("N[%d] = %d\n",i, a[i]);
    }
    return 0;
}
/*

#include <stdio.h>
int main()
{
   int N[20], temp,i,j;
    for(i=0; i<20; i++)
        scanf("%d",&N[i]);
    for(i=0, j=19; i<10; i++, j--)
    {
        temp=N[i];
        N[i]=N[j];
        N[j]=temp;
    }
    for(i=0; i<20; i++)
        printf("N[%d] = %d\n",i,N[i]);
    return 0;
}*/
