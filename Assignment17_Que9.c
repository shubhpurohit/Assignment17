#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,n;
    char str[20],temp;
    printf("Enter an string");
    fgets(str,20,stdin);
    n=strlen(str);

    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
            {
                  if(str[i]>str[j])
                  {
                  temp=str[i];
                  str[i]=str[j];
                  str[j]=temp;
                  }
            }
    }

   printf("%s",str);

    return 0;

}
