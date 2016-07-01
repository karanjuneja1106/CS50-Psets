#include<stdio.h>
#include<cs50.h>
int main(void){
    int n;
    printf("height: ");
    do{
        n=GetInt();
        if(n<0)
        printf("Height: ");
        if(n>23)
        {printf("Height: ");
            n=GetInt();
        }
    }while(n<0);
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=n-i;j>1;j--)
        printf(" ");
        
        for(j=0;j<=i;j++)
        printf("#");
        
        printf("#\n");
    }
}