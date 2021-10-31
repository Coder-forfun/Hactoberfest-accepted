// total times value found

#include <stdio.h>
int main()
{
    int arr[8] = {3,5,11,5,4,11,5,4}, counter = 0, found;
    int valToMatch;
    printf("enter the value to count : ");
    scanf("%d", &valToMatch);
    
    for(int i=0; i<8; i++)
    {
        if(valToMatch == arr[i])
        {
            found = 1;
            break;
        }
        else
        {
            found = 0;
        }
    }

    if(found == 1)
    {
        for(int i=0; i<8; i++)
        {
            if(valToMatch == arr[i])
            {
                counter += 1;
            }
        }
    }
    printf("Total values found : %d", counter);
}
    
