#include<stdio.h>
int main()
{
    int i,st,end,n;
    char str[50],temp;
    printf("Enter an string\n");
    fgets(str,50,stdin);

    for(i=0;str[i];i++);
    n=i;

    st=0,end=n-1;

    for(i=0;i<n/2;i++)
    {
        temp=str[st+i];
        str[st+i]=str[end-i];
        str[end-i]=temp;
    }
    printf("%s",str);

    return 0;
}
