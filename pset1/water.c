#include<stdio.h>
#include<cs50.h>
int main(void){
        int min;
        printf("minutes: ");
    do{
            
            min=GetInt();
            
            if(min<=0)
            printf("retry");
            else if(min==0)
            {while(min!=0)
            {printf("zero is not valid input");
            min=GetInt();}}
      }while(min<1);
      printf("bottles: %i\n",min*12);
}