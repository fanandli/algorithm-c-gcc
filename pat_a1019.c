#include<stdio.h>
bool judge(int z[],int num){
    for(int i=0;i<=num/2;i++){
        if(z[i]!=z[num-1-i])
            return false;
    }
    return true;
}
int main(){
    int n,b,z[40],num=0;
    scanf("%d%d",&n,&b);
    do{
        z[num++]=n%b;
        n/=b;
    }while(n!=0);
    bool flag=judge(z,num);
    if(flag==true)  printf("yes\n");
    else printf("no\n");
    for(int i=num-1;i>=0;i--){
        printf("%d",z[i]);
        if(i!=0)    printf(" ");
    }
    return 0;
}