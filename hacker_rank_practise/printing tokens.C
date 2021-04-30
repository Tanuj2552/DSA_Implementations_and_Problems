#include <stdio.h>
#include <string.h>



int main() {

    char s[1024];
    int i = 0;

    scanf("%[^\n]", s);
    int l=strlen(s);
   
    for ( i=0; i<l; i++){

        if ( s[i] == ' '){
            s[i] = '\n';
        }
    }
    printf("%s",s);
    return 0;
}
