#include<stdio.h>
#include<string.h>
char* moveHash(char str[],int n)
{
    char str1[100],str2[100];
    int i,j=0,k=0;
    for(int i;str[i];i++)
    {
        if(str[i]=='#')
        {
            str1[j++]=str[i];
        }
        else
        {
            str2[k++]=str[i];
        }
    }
    strcat(str1,str2);
    printf("%s",str1);
    
}
int main()
{
    char a[100],len;
    scanf("%s",a);
    len=strlen(a);
    moveHash(a,len);
    return 0;
}
