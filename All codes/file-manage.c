#include <stdio.h>

int main(){
    FILE *fp1,*fp2,*fe,*fw,*fo;
    fp1= fopen("inp.txt","r");
    fw= fopen("wrd.txt","r");
    fe= fopen("even.txt","w");
    fo= fopen("odd.txt","w");
    int k;
    fp2= fopen("out.txt","w");
    char ch;
    while(1){
        int ok = fscanf(fo,"%d",&k);
        if(ok==EOF) break;
        if(k%2==0) fprintf(fe,"%d",k);
        else fprintf(fo,"%d",k);


    }
    fclose(fp1);
    fclose(fp2);
    fclose(fw);
    fclose(fo);
    fclose(fe);
}
