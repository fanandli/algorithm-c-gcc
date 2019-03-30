#include<stdio.h>
struct Student
{
    char name[15];
    char id[15];
    char sex;
    int score;
}temp,maxf,minm,studentm,studentf;

int main(){
    studentm.score=101;
    studentm.sex='m';
    studentf.score=-1;
    studentf.sex='f';
    int n;
    scanf("%d",&n);
    
    for(int i=0;i<n;i++){
        scanf("%s %c %s %d",temp.name,&temp.sex,temp.id,&temp.score);
        if(temp.sex=='f'&&temp.score>studentf.score)    maxf=temp;
        if(temp.sex=='m'&&temp.score<studentm.score)    minm=temp;
    }

    if(maxf.score==-1){
        printf("absent\n");
    }else{
         printf("%s %s\n",maxf.name,maxf.id);
    }
    if(minm.score==101){
        printf("absent\n");
    }else{
        printf("%s %s\n",minm.name,minm.id);
    }
   if(maxf.score==-1||minm.score==101){
       printf("Na\n");
   }else{
        printf("%d",maxf.score-minm.score);
   }
   return 0; 
}
