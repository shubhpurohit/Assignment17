#include<stdio.h>
int main()
{

    char str[20],strc[20];
    printf("Enter an string\n");
    fgets(str,20,stdin);


    for(int i=0;str[i];i++)
    {
    strc[i]=str[i];
    }
for(int i=0;str[i];i++)
   printf("%c",strc[i]);
    return 0;

}
