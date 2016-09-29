#include <stdio.h>
#include <string.h>

double devuelvemeesta(char s[])
{
    double tentero = 0;
    double tdecimal = 0;
    double texponencial = 1;
    int pot=0;
    int i;
    int j;
    int x;
    for(i=0;i!='.';i++){
        tentero*=10;
        tentero+=s[i];
    }
    i++;
    for(;i!='e';i++){
        tdecimal/=10;
        tdecimal+=s[i];
    }
    i++;
    if(s[i]=='-'){
        i++;
        for(;i!='\0';i++){
            pot*=10;
            pot+=s[i];
        }
        for(j=0;j<pot;j++)
            texponencial/=10;
    }
    else{
        for(;i!='\0';i++){
            pot*=10;
            pot+=s[i];
        }
        for(x=0;x<pot;x++)
            texponencial*=10;
    }
    tentero+=tdecimal;
    printf("%f\n",tentero);
    tentero*=texponencial;
    printf("%Lf\n",tentero);
    return tentero;
}

main(){
    char A[15]="123.45e-10";
    printf("%Lf\n",devuelvemeesta(A));

}
