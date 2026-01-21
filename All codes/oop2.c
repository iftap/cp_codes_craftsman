
#include<stdio.h>
int i=0;


void circle(a[],b[]){

}



int main(){
    float a[100],b[100];
    int k=0;
    while(1){
        int n;
        printf("menu\n1.add a circle\n2.add a rectangle\n3.list items\n4.get statistcs\n5.exit\n");
        if(n==1) circle(a,b);
        else if(n==2) rect(a,b);
        else if(n==3) list(a,b,k);
        else if(n==4) stat(a,b);
        else break;


    }

}
