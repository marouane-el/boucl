#include <stdio.h>
#include <stdlib.h>

int main(){
int m,i,n;

    printf("saisire le nombre a multuplier : \n");
    scanf("%d",&n);
    for (i=0;i<=10;i++){
        m=n*i;
        printf("%d x %d = %d\n",n,i,m);
    }


    return 0;
}