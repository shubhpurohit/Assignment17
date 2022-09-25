#include<stdio.h>
int main()
{
    int count=0;
    char str[50];
    printf("Enter an string\n");
    fgets(str,50,stdin);

    for(int i=0;str[i];i++)
    {
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||
           str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
            count++;
    }

    printf("Number of Vowels is %d",count);

    return 0;

}
