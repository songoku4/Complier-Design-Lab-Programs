#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *fp1,*fp2;
    int flag=0;
    char ch;
    fp1=fopen("f1.c","r");
    fp2=fopen("f2.c","w");
    if(fp1==NULL)
    {
        printf("Error while opening a file for reading");
        return 0;
    }
    if(fp2==NULL)
    {
        printf("Error while opening a file for reading");
        return 0;
    }
    while((ch=fgetc(fp1))!=EOF)
    {
         if((ch=='/')&&(flag==0))
        {
            flag=1;
            continue;
        }
        else if((ch=='/')&&(flag==1))
        {
            flag=2;
            continue;
        }
        else if((ch=='*')&&(flag==1))
        {
            flag=3;
            continue;
        }
        if(flag==2)
        {
            if(ch=='n' || ch=='t')
            {
              flag=0;
            }
            continue;
        }
        if(flag==3)
        {
            if(ch=='*')
            {
              flag=4;
            }
            continue;
        }
        if(flag==4)
        {
            if(ch=='/')
            {
              flag=0;
            }
            continue;
        }
        if(flag==0)
        {
 
            if((ch==13)||(ch==10))
            {
                continue;
            }
            else if((ch!=' '))
            {
               fputc(ch,fp2);
            }
        }
    }
    fclose(fp1);
    fclose(fp2);
    
    fp1=fopen("f2.c","r");
    while((ch=fgetc(fp1))!=EOF)
    {
        printf("%c",ch);
    }
    fclose(fp1);
    printf("\n\n\n");
    return 0;
}
