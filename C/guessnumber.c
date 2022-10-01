#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Compiler version gcc  6.3.0

int main()
{ int number ,guess,ngueses=1;
  srand(time(0));
  number = rand()%100 +1 ;
   //printf("the value of number is %d\n", number);

  do {
    printf("guess the number from 1 to 100:\n");
    scanf("%d",&guess);
    if (guess>number){
      printf("guess a lower number\n");
    }
    else if(guess<number){
      printf("guess a higher number\n");
    
    }
    else{
      printf("u guesed the number in %d turns\n",ngueses);
       }
     ngueses++;
   
  } while (guess != number);
 
  return 0;
}
