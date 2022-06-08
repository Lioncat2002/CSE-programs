#include "stdio.h"

struct Student{
    char name[200];
    char regno[200];
};
struct Block{
    char block_name;
    struct Student student;
    int room;
};

void get_input(struct Student *s){
    printf("Enter name:");
    fgets(s->name,200,stdin);
    printf("Enter reg. no.:");
    fgets(s->regno,200,stdin);
}

void block_alloc(struct Student *s,struct Block *b,char block,int room){
    b->block_name=block;
    b->student=*s;
    b->room=room;
}

void disp(struct Block b){
    printf("Reg. no.: %s",b.student.regno);
}