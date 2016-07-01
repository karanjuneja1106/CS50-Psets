#include<stdio.h>
#include<cs50.h>
#include<math.h>
int main(void){
    int change;
    printf("O Hai!How much change is owed?\n");
    do{
        
        float c=GetFloat()*100;
        change=round(c);
        if(change<0)
        printf("How much change is owed?\n");
    }while(change<0);
    int coins=0;
    while(change>0)
    {
        if(change>=25)
        {
            coins++;
            change-=25;
        }
        else if(change>=10)
        {
            coins++;
            change-=10;
        }
        else if(change>=5)
        {
            coins++;
            change-=5;
        }
        else if(change>=1)
        {
            coins++;
            change-=1;
        }
    }
    printf("%i\n",coins);
}