// #include<stdio.h>
// bool judge(int z[],int num){
//     for(int i=0;i<=num/2;i++){
//         if(z[i]!=z[num-1-i])
//             return false;
//     }
//     return true;
// }
// int main(){
//     int n,b,z[40],num=0;
//     scanf("%d%d",&n,&b);
//     do{
//         z[num++]=n%b;
//         n/=b;
//     }while(n!=0);
//     bool flag=judge(z,num);
//     if(flag==true)  printf("yes\n");
//     else printf("no\n");
//     for(int i=num-1;i>=0;i--){
//         printf("%d",z[i]);
//         if(i!=0)    printf(" ");
//     }



//     return 0;
// }

#include<stdio.h>


bool judge(int z[],int num){//判断是否为回文数的函数
    for(int i=0;i<=num/2;i++){
        if(z[i]!=z[num-1-i])
            return false;
    }
    return true;
}
int main(){
    int z[40],num=0,b,n;//num是位数,z[]是存放结果
    scanf("%d%d",&n,&b);//将n转化为b进制

    do{
        z[num++]=n%b;
        n/=b;
    }while(n!=0);

    bool flag=judge(z,num);//判断是否回文
    if(flag==true)  printf("yes\n");
    else    printf("no\n");

    for(int i=num-1;i>=0;i--){//输出数组z
        printf("%d",z[i]);
        if(i!=0)    printf(" ");
    }
    return 0;
}


