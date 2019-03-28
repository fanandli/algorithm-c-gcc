#include<stdio.h>
int main(){
    int num;
    char mp[3];
    mp[0]='b';
    mp[1]='c';
    mp[2]='j';
    int k1,k2;
    scanf("%d",&num);
    char jia,yi;
    int jiaresult[3]={0};
    int yiresult[3];
    int change(char a){
        if(a=='b')
            return 0;//0;
        if(a=='c')
            return 1;//1
        if(a=='j')
            return 2;//2
    }

    for(int i=0;i<num;i++){
        getchar();
        scanf("%c %c",&jia,&yi);
        k1=change(jia);
        k2=change(yi);
        if((k1+1)%3==k2){
            jiaresult[0]++;
            yiresult[2]++;
        }else if(k1==k2){
            jiaresult[1]++;
            yiresult[1]++;
        }else{
            jiaresult[2]++;
            yiresult[0]++;
        }
    }
    for(int i=0;i<3;i++){
        printf("%d",jiaresult[i]);
    }
    for(int j=0;j<3;j++){
        printf("%d",yiresult[j]);
    }
    return 0;
   
}