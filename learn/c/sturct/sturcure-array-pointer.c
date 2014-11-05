#include <stdio.h>
#include <stdlib.h>
struct student {
    char name[20];
    char sex[6];
    char num[15];
    int score[3];
};

int main(){
    struct student stud[10], *s;
    FILE *fp;
    int i,j;
    long c;
    char tit[6][20] = {"Name","Sex","Num","Math","English","Computer"};

    s=stud;
    fp=fopen("study.out","rb");
    if(fp==NULL){
        printf("File can not open\n") ;
        exit(0);
    }

    for(i=0; i<10; i++){
        fread(s+i,sizeof(struct student), 1, fp);
    }
    c = sizeof(struct student);
   // printf("%d", c);
    //exit(0);
   // printf("\n%15s%8s%20s%9s%9s%9s",tit[0],tit[1],tit[2],tit[3],tit[4],tit[5]);
    for(i=0;i<10;i++){
        //printf("\n%15s %8s %20s", stud[i].name, stud[i].sex, stud[i].num);
        printf("\n%d\n", i);
        printf("\n%15s", stud[i].num);
        exit(0);
        for(j=0;j<3;j++){
         //   printf("%7d--", stud[i].score[j]);

        }
    }
    fclose(fp);
    return 0;
}
