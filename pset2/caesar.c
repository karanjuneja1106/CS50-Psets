#include<stdio.h>
#include<cs50.h>
#include<string.h>
#include<stdlib.h>
char crypt(int k,char c);
int main(int argc, string argv[])
{
    
    if(argc==1)
    {printf("<key> not provided\n");
    return 1;}
    else if(argc>2)
    return 1;
    else
    {
        string text=GetString();
        int l=strlen(text);
        int k=atoi(argv[1]);
        k%=26;
        for(int i=0;i<l;i++)
        {
            printf("%c",crypt(k,text[i]));
        }
        printf("\n");
        return 0;
    }
    
}
char crypt(int k,char c){
    if((c>64&&c<91)||(c>96&&c<123))
    {
        k+=c;
        if((k>90&&c<91)||(k>122&&c<123))
        {c=(char)k-26;}
        else
        c=(char)k;
    }
    return c;
}