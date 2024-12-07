#include <stdio.h>

int value() {
    return 56;
}

int functionName() {
    static int staticValue = 65;
    printf("The value of static is %d\n", staticValue);
    staticValue++;
    return staticValue;
    // return 0;  // You can use both of returns
}

int main()
{
    // static variable can only be initialized using constant literals;
    // static int b = value(); // can't use non-constant value

    int ashish = functionName();
    ashish = functionName();
    ashish = functionName();
    ashish = functionName();
    ashish = functionName();
    ashish = functionName();
    return 0;
}