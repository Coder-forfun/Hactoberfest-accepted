#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//This function print longest palindrome
void Display(char str[],int start,int end)
{int i;
    for(i=start;i<end;++i)
        printf("%c",str[i]);
}

// find longest palindrome in given string
int LongestPalindrome(char str[])
{int len,maxlen=1,start=0,i,j,k,flag;
len=strlen(str);
    for(i=0;i<len;i++)
    {
        for(j=i;j<len;j++)
        {
            flag=1;
            for(k=0;k<(j-i+1)/2;k++)
                if(str[i+k]!=str[j-k])
                    flag=0;
            if(flag&&(j-i+1)>maxlen)
            {
                start=i;
                maxlen=j-i+1;
            }
        }
    }
    printf("\nLongest Palindromic String is: ");
    Display(str,start,start+maxlen);
    return maxlen;
}

int main()
{char str[1000];
printf("Enter string to check longest Palindrome: ");
scanf("%s",str);
    printf("\nLongest palindrome length is:%d ",LongestPalindrome(str));
    return 0;
}