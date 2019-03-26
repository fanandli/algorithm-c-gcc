//实现回文数的判断

#include<stdio.h>
#include<string.h>
const int maxn=256;
bool judge(char str[]){
    int len=strlen(str);//notice
    for(int i=0;i<len;i++){
        if(str[i]!=str[len-1-i])
            return false;
    }
    return true;
}

int main(){
    char str[maxn];
    while(gets(str)){//notice
        bool flag=judge(str);
        if(flag==true){
            printf("Yes\n");
        }else{
            printf("No\n");
        }
    }
    return 0;
}