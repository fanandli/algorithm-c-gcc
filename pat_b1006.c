#include<stdio.h>
int main(){
    int num[5];
    int n;
    int i=0;
    scanf("%d",&n);
    while(n!=0){
        num[i]=n%10;
        n/=10;
        i++;
    }
    for(int j=i-1;j>=0;j--){
        if(j==2){
            for(int k=0;k<num[j];k++)
                printf("B");
        }
        else if(j==1){
            for(int k=0;k<num[j];k++)
                printf("S");
        }
        else{
            for(int k=1;k<=num[j];k++)
                printf("%d",k);
        }
    }
    return 0;

}