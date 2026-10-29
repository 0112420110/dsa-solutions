#include<stdio.h>
#include<string.h>
int main()
{
    char stk[100];
    char stk1[100];
    int top=-1;

    printf("Enter a string: ");
    fgets(stk,sizeof(stk),stdin);
    for(int i=0; stk[i]!='\0'; i++)
    {
        if(stk[i]!=' ' && stk[i]!='\n')
        {
            top++;
            stk1[top]=stk[i];
        }
        else
        {
            while(top!=-1)
            {

                printf("%c",stk1[top]);
                top--;
            }
            printf(" ");
        }
    }
     while(top!=-1)// For printing last world
        // if the input does not end with space or new line
            {

                printf("%c",stk1[top]);
                top--;
            }
    return 0;
}
