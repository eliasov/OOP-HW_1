#include <iostream>
#include "Za_1.cpp"
#include "Za_2.cpp"
#include "Za_3.cpp"

using namespace std;


int main()
{
    // Za_1 1
    Power Num;

    Num.set(2.0, 3.0);
    std::cout << Num.calculate() << endl;

    // Za_2

    RGBA Color1;
    Color1.print();
    RGBA Color2(100, 123, 210, 13);
    Color2.print();

    // Za_3

    Stack stack;
    stack.reset();
    stack.print();

    stack.push(3);
    stack.push(7);
    stack.push(5);
    stack.print();

    stack.pop();
    stack.print();

    stack.pop();
    stack.pop();
    stack.print();

    return 0;
}




