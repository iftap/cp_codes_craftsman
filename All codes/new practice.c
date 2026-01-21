#include<stdio.h>
int main()
{
    int n=5;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i+j<n) printf("%d ",i+j+1);
            else printf("%d ",2*n-i-j-1);

        }
        printf("\n");

    }
    return 0;
}
