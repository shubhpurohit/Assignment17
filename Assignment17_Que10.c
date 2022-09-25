#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,n;
    char str[20];
    printf("Enter an string ");
    fgets(str,20,stdin);
    n=strlen(str);
    int freq[n];
    for(i=0;i<n;i++)
    {
        freq[i]=1;
        for(j=i+1;j<n;j++)
        {
            if(str[i]==str[j])
               {
            freq[i]++;

            str[j]='0';
               }
        }
    }
fflush(stdin);
    for(i=0;i<n;i++)
        if(str[i]!=' '&&str[i]!='0')
        printf("%c - %d\n",str[i],freq[i]);



    return 0;

}
