#include <stdio.h>
int main()
{
    int inputArray[100], elementCount, counter, num;
    scanf("%d", &num);
    scanf("%d", &elementCount);
    for(counter = 0; counter < elementCount; counter++)
    {
        scanf("%d", &inputArray[counter]);
    }
    for(counter = 0; counter < elementCount; counter++)
    {
        if(inputArray[counter] == num)
        {
            printf("%d\n",counter);
            break;
        }
    }
    return 0;
}
