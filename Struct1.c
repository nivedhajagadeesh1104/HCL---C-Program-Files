//Roll name and mark are inputs. Write C program to import details for 5 students and diplay the topper details using structure
#include<stdio.h>
struct student{
    int roll;
    char name[50];
    float mark;
};
int main(){
    struct student s[5],topper;
    for(int i=0;i<5;i++){
        scanf("%d",&s[i].roll);
        scanf("%s",s[i].name);
        scanf("%f",&s[i].mark);
    }
    topper=s[0];
    for(int i=1;i<5;i++){
        if(s[i].mark>topper.mark)
            topper=s[i];
    }
    printf("Topper details:\n");
    printf("Roll: %d\n",topper.roll);
    printf("Name: %s\n",topper.name);
    printf("Mark: %.2f\n",topper.mark);
}   