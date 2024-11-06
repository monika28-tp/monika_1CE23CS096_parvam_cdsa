#include<stdio.h>
int a=5;
    void add(){
        printf("%d ",a);
    }
    void sub(){
        a++;
        printf("%d",a);
    }
    int main(){
        add();
        sub();
}