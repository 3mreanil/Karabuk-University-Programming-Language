int i,j,n=-2;
char za[50],va[50];
printf("1. kelime girin:");
fgets(za,50,stdin);
printf("2. kelime girin:");
fgets(va,50,stdin);
for(i=0;va[i]!='\0';i++)
{
    n++;
}
printf("%s",za);
for(i=n;i>=0;i--)
{
    printf("%c",va[i]);
}




















return 0;




}