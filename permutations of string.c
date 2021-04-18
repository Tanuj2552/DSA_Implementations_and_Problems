#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void swap_strings(char **a, char **b)
{   char *c =*a;
    *a=*b;
    *b=c;
}

void reverse_strings(int len, char **s)
{
    for (int i=0; i<=len/2;i++) {
        if (i==len-i)
            continue;
        swap_strings(&s[i],&s[len - i]);
    }
}

int next_permutation(int n, char **s)
{ int c=0;
    for (int i=0;i<n-1;i++){
        if (strcmp(s[i],s[i+1]) <0){c++;}
    }
    if (c==0){return 0;}

    else{
    int k, l;
    for (k= n-2;k>=0;k--)
        if (strcmp(s[k],s[k + 1])<0)
            break;

    for (l= n-1;l>k;l--)
        if (strcmp(s[k],s[l])< 0)
            break;

    swap_strings(&s[k],&s[l]);
    reverse_strings(n-k-2,&s[k+1]);
    return 1;
    }
}


