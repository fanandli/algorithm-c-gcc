#include<stdio.h>
#include<math.h>
int main(){
    int num;
    char zifu;
    int kongge;
    int di;
    int shengyu;
    scanf("%d %c",&num,&zifu);
    if(num%2==0){
        di=floor(sqrt(2*(1+num)))-1;
    }else{
        di=floor(sqrt(2*(1+num)));
    }

    for(int i=di;i>=1;i-=2){
        for(int j=0;j<(di-1)/2;j++){
            printf(" ");
        }
        for(int j=0;j<i;j++){
            printf("%c",zifu);
        }
        printf("\n");
    }

    for(int i=3;i<=di;i+=2){
        for(int j=0;j<(di-1)/2;j++){
            printf(" ");
        }
        for(int k=0;k<i;k++){
            printf("%c",zifu);
        }
        printf("\n");
    }

    shengyu=num-(1+di)*((1+di)/2)-1;
    printf("%d",shengyu);
    return 0;

   

}