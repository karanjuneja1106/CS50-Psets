#include<stdio.h>
#include<stdlib.h>
#include<cs50.h>
#include <string.h>
#include<ctype.h>
int check(string s);
int keygen(char c);
char crypt(char c,int k);
int main(int argc,string argv[]){
    if(argc>2||argc<2)
    {
          printf("<more than 1 or no command line arguments>\n");
        return 1;
    }
    else
    {
        string key=argv[1];
        int x=check(key);
        if(x==1)
        {
            
        printf("<invalid key>\n");
        return x;}
        else
        {
            
            int lk=strlen(key);
            int KEY[lk];
            for(int i=0;i<lk;i++)
            {
                KEY[i]=keygen(key[i]);
            }
            
            string text=GetString();
            int c=0;
            for(int i=0,lt=strlen(text);i<lt;i++)
            {
                if(isalpha(text[i]))
                {
                    
                    printf("%c",crypt(text[i],KEY[c]));
                    c=++c%lk;
                }
                else
                printf("%c",text[i]);
            }
            printf("\n");
            return 0;
        }
    }
}
int check(string s)
{
    int x=0;
    
    for(int i=0,l=strlen(s);i<l;i++){
        if(isalpha(s[i]));
        else
        {
            x=1;
            break;
        }
    }
    return x;
}
int keygen(char c)
{
    if(c<97)
    c%=65;
    else
    c%=97;
    
    return c;
}
char crypt(char c,int k){
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