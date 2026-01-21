#include<stdio.h>
#include<stdlib.h>

int main(){

    int i,n,sum=0;
    scanf("%d",&n);
    int *ptr =(int*)malloc(n*sizeof(int));
    for(i=0;i<n;i++){
        scanf("%d",ptr+i);
        sum+= *(ptr+i);
    }
    printf("%d",sum);
    free(ptr);

}


