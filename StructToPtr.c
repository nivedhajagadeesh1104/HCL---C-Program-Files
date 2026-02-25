#include<stdio.h>
struct Student{
    int rollno;
    char name[50];
    float mark;
};
void updatemark(struct Student *s,float newmark){
    s->mark=newmark;
}
void printdetails(struct Student *s){
    printf("%d\n",s->rollno);
    printf("%s\n",s->name);
    printf("%.2f\n",s->mark);
}
int main(){
    struct Student s={140,"Nivedha",88.6};
    updatemark(&s,92.8);
    printdetails(&s);
}