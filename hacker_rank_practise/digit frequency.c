// The link for the file is https://www.hackerrank.com/challenges/frequency-of-digits-1/problem
#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{
    char s[1024];
    scanf("%[^\n]s",s);
    int i=0,j=0,k;
    k=strlen(s);
    int c;
    char t[]="0123456789";
        for (j=0;j<10;j++){c=0;
                for (i=0;i<k;i++){
            if(t[j]==s[i]){
                c=c+1;
            }

        }printf("%d ",c);




    }
}
