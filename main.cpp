#include<iostream>
using namespace std;

class A {
public:
        virtual void foo() { cout << "A::foo"; };
        virtual void bar() { cout << "A::bar"; };
                void baz() { cout << "A::baz"; };
};
 
class B :public A {
public:
        virtual void foo() { cout << "B::foo"; };
                void bar() { cout << "B::bar"; };
        virtual void baz() { cout << "B::baz"; };
};

class C :public B {
public:
        virtual void foo() { cout << "B::foo"; };
        virtual void bar() { cout << "B::bar"; };
                void baz() { cout << "B::baz"; };
};

int main() {
        A* a1 = new B;
        a1->foo();
        a1->bar();
        a1->baz();

        A* a2 = new C;
        a2->foo();
        a2->bar();
        a2->baz();
}
