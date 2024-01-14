#include <stdio.h>
#include <string.h>


int main()
{
    
int x=0,y=1;
char se[50];
printf("cumlenizi girin: ");
fgets(se,50,stdin);
for(int i =0;1;i++)
{
    
    if(se[i]=='a')
    {
        x++;
    }
    if(se[i]==' '||se[i]=='\0')
    {
        printf("%d. kelimenizde %d adet a harfi var\n",y,x);
        y++;
        x=0;
    }
    if(se[i]=='\0')
    {
        break;
    }

}