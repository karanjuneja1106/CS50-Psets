#include<stdio.h>
#include<cs50.h>
#include<string.h>
void initials(int x,string s);
int main(void){
    string name=GetString();
    int l=strlen(name);
    int c=0;
    for(int i=0;i<l;i++)
    {
        if(name[i]==32)
        c++;
    }
    
    c++;
    
    initials(c,name);
    printf("\n");
}
void initials(int c,string name)
{
     if(name[0]>96)
    {
        printf("%c",name[0]-32);
    }
    else
    {
        printf("%c",name[0]);
    }
   
    for(int i=1,x=1;x<c;i++)
    {
        if(name[i-1]==32)
        {
            if(name[i]>96)
            {
                printf("%c",name[i]-32);
            }
            else
            {
                printf("%c",name[i]);
            }
            
            x++;
        }
    }
}