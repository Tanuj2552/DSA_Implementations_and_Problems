#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n,i,p,j;
    scanf("%d",&n);
    p=(2*n)-1;
    int a[p][p];
   for (i=0;i<p;i++){
       for (j=0;j<p;j++){
        if(i==0){
                a[i][j]=n;

        }
        else if (i<n){
                if (((i-j)>=1) || ((i+j)>=p)) {
                a[i][j]=a[i-1][j];

                   }
               else{
                a[i][j]=n-i;
                   }
        }
        else{
            a[i][j]=a[p-i-1][j];

        }

       }

   }
 for (i=0;i<p;i++){
       for (j=0;j<p;j++){

            printf("%d ",a[i][j]);


       }
       printf("\n");
       }


    return 0;
}
