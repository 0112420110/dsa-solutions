#include<stdio.h>
#include<string.h>

void rabinKarp(char text[],char pattern[])
{
    int n=strlen(text);
    int m=strlen(pattern);

    int patternHash=0;
    int textHash=0;



    for(int i=0; i<m; i++)
    {

        textHash=textHash+text[i];
        patternHash=patternHash+pattern[i];
    }
    int validHit=0;
    int spuriousHit=0;

    for(int i=0; i<=n-m; i++)
    {
        if(textHash==patternHash)
        {
            int j;
            for(j=0; j<m; j++)
            {
                if(text[i+j]!=pattern[j])
                {
                    break;
                }
            }

            if(j==m)
            {
                validHit++;
                printf("Pattern found at index: %d\n",i);
            }
            else
                spuriousHit++;
        }

        if(i<n-m)
        {
            textHash=textHash-text[i]+text[i+m];
        }
    }
    printf("Valid hit: %d\n",validHit);
    printf("Spurious hit: %d\n",spuriousHit);
}

int main()
{
    char text[100];
    char pattern[100];

    printf("Enter text: ");
    scanf("%s",text);

    printf("Enter pattern: ");
    scanf("%s",pattern);

    rabinKarp(text,pattern);

    return 0;
}
