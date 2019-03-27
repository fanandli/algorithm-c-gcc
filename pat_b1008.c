#include <stdio.h>
int main(){
    int a[110];
    int n,m,count=0;//n是数的个数，m是右移的位置，count是已经输出数的个数
    scanf("%d%d",&n,&m);
    m=m%n;//防止m>n
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);//输入数字
    }
    for(int i=n-m;i<n;i++){
        printf("%d",a[i]);
        if(count<n) printf(" ");

    }
    for(int i=0;i<n-m;i++){
        printf("%d",a[i]);
        count++;
        if(count<n) printf(" ");
    }
    return 0;

}