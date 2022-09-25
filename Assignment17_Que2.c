#include<stdio.h>
int main()
{
    int count=0;
    char str[20],x;
    printf("Enter an string\n");
    fgets(str,20,stdin);
    printf("Enter char to count its frequency ");
    scanf("%c",&x);

    for(int i=0;str[i];i++)
    {
        if(str[i]==x)
            count++;
    }

    printf("Frequency is %d",count);

    return 0;

}
