#include<stdio.h>
int main()
{
    int n, i, j=0, k=0, a[3], b[3];
    for(i=0; i<3; i++)
    {
        scanf("%d", &a[i]);
    }
    for(i=0; i<3; i++)
    {
        scanf("%d", &b[i]);
    }
    for(i=0; i<3 ; i++)
    {
        if(a[i]>b[i])
        j++;
        else if(a[i]<b[i])
            k++;

    }
    printf("%d %d", j, k);
}
