#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int random_genNo=0,count=0,num;
    int stime;
    long ltime;

    ltime = time(NULL);
    stime = (unsigned) ltime/2;
    srand(stime);

    random_genNo=rand()%1000;
 
    while(1)
    {
        
        count+=1;

        printf("\n\nGuess a number from (0 to 1000): ");
        scanf("%d",&num);
 
        if(random_genNo==num){
            printf("Congratulations, you have guessed a correct number.");
            break;
        }
        else if(random_genNo<num){
            printf("Generated number is less than entered number, try your luck again...");
        }
        else if(random_genNo>num){
            printf("Generated number is greater than entered number, try your luck again...");
        }
 
        if(count==7){
            printf("\n\n### Maximum limit of atttempt finished, BAD LUCK !!!\n");
            break;
        }
    }
     
    return 0;
}
