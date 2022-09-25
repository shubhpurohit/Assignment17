#include<stdio.h>
int main()
{

    char str[20];
    printf("Enter an string\n");
    fgets(str,20,stdin);


    for(int i=0;str[i];i++)
    {
        if(str[i]>=65&&str[i]<=90)
            str[i]=str[i]+32;
    }

   printf("%s",str);

    return 0;

}
