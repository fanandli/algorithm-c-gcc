#include<stdio.h>

int main(){
    float w,t,l;
    int a;
    float max;
    float maxn[3];
    char fuhaon[3];
    float shouyi;
    char fuhao;
    for(int i=0;i<3;i++){
        scanf("%f%f%f",&w,&t,&l);
        if(w>t){
            if(w>l){
                max=w;
                fuhao='w';
            }else{
                max=l;
                fuhao='l';
            }       
        }else{
            if(t>l){
                max=t;
                fuhao='t';
            }else{
                max=l;
                fuhao='l';
            }     
        }
        maxn[i]=max;
        fuhaon[i]=fuhao;
       
        
    }
    shouyi=(maxn[0]*maxn[1]*maxn[2]*0.65-1)*2;
    for(int i=0;i<3;i++){
        printf("%c",fuhaon[i]);
    }
    printf("%f",shouyi);
    return 0;

}