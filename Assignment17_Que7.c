#include<stdio.h>
#include<string.h>
int main()
{
    int calpha=0,cdigi=0,cspc=0;
    char str[20];
    printf("Enter an string\n");
    fgets(str,20,stdin);


    for(int i=0;str[i];i++)
    {
        if((str[i]>=65&&str[i]<=90)||(str[i]>=97&&str[i]<=122))
            calpha++;
        else if(str[i]>=48&&str[i]<=57)
            cdigi++;
        else
            cspc++;
    }
    fflush(stdin);
    printf("Number of characters is %d\n",calpha);
    printf("Number of digits is %d\n",cdigi);
    printf("Number of sp. characters is %d\n",cspc);

    return 0;

}
