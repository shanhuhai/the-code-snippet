#include <stdio.h>
#include <stdlib.h>
struct student {
    char name[20];
    char sex[6];
    char num[15];
    float score;
} student1;

int main(){
    struct student *s= &student1;
    char score[15];
    printf("\n Input name:");
    gets(s->name);
    printf("\n Input sex:");
    gets(s->sex);
    printf("\n Input num:");
    gets(s->num);
    printf("\n Input score:");
    gets(score);
    s->score = atof(score);
    printf("\n Name is:%s",s->name);
    printf("\n Sex is:%s",s->sex);
    printf("\n Num is:%s",s->num);
    printf("\n Score is:%5.1f",s->score);
    return 0;
}
