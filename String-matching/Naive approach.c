/*#include<stdio.h>
#include<string.h>

void naiveApproach(char text[],char pattern[]){
int n=strlen(text);
int m=strlen(pattern);
int count=0;

for(int i=0;i<=n-m;i++){
    int j;

    for(j=0;j<m;j++){
        if(text[i+j]!=pattern[j])
        {
            break;
        }
    }
    if(j==m){
        count++;
        printf("Pattern found at index: %d\n",i);

    }
}
printf("Total pattern found: %d",count);

}
int main(){
    char text[100];
    char pattern[100];

    printf("Enter text: ");
    scanf("%s",text);

    printf("Enter pattern: ");
    scanf("%s",pattern);

    naiveApproach(text,pattern);

return 0;
}
*/


#include<Stdio.h>
#include<string.h>

void naive(char text[],char pattern[]){

int n=strlen(text);
int m=strlen(pattern);
int count=0;

for(int i=0;i<=n-m;i++){
        int j;
    for(j=0;j<m;j++){
        if(text[i+j]!=pattern[j]){
            break;
        }
    }
    if(j==m){
        count++;
        printf("Pattern found at index: %d\n",i);
    }
}
printf("Total pattern: %d",count);
}

int main(){
char text[100];
char pattern[100];

printf("Enter text: ");
scanf("%s",text);

printf("Enter pattern: ");
scanf("%s",pattern);

naive(text,pattern);
return 0;
}



