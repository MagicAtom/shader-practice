#include<iostream>
class A{
public:
    virtual void print(int a){
        printf("I am father\n");
    }
};
class B:public A{
public:
    void print(double b){
        printf("I am son\n");
    }
};

int main(void){
    B* b = new B;
    b->print(1.0);
    A* a = new B;
    a->print(1.0);
    return 0;
}