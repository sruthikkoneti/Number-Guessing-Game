#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main( )
{
    int number,guess,nGuesses=1;
    srand(time(0));
    number=rand()%100+1;
    //printf("%d",number);
    printf("Guess the number between 1 to 100\n");
    do
    {
        
        scanf("%d",&guess);
        if(guess>number)
        {
            printf("Please give me a lower number\n");
        }
        else if(guess<number)
        {
            printf("Please give me a higher number\n");
        }
        else
        {
            printf("Yayy!\nYou got the correct number in %d attempts",nGuesses);
            
        }
        nGuesses++;
    }while(guess!=number); 

return 0;
}







