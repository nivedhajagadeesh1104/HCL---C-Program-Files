#include<stdio.h>
struct Amount{
    float price;
    float discount;
};
void discountedbyvalue(struct Amount a){
    a.price=a.price-(a.price*a.discount/100);
}
void discountedbyref(struct Amount *a){
    a->price=a->price-(a->price*a->discount/100);
}
int main(){
    struct Amount a={1000,20};
    discountedbyvalue(a);
    printf("%.2f\n",a.price);
    discountedbyref(&a);
    printf("%.2f\n",a.price);
}