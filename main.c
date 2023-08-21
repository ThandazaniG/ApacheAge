#include <stdio.h>
#include <stdlib.h>
#include "FibonacciSequence.cpp"
#include "FibonacciSequence.h"

int main() {
    for (int i = 0; i < MAXN; i++) {
        fib[i] = -1;
    }
    Node *add = makeFunc(ADD);
    add->left = makeValue(10);
    add->right = makeValue(6);
    Node *mul = makeFunc(MUL);
    mul->left = makeValue(5);
    mul->right = makeValue(4);
    Node *sub = makeFunc(SUB);
    sub->left = makeValue(calc(add));
    sub->right = makeValue(calc(mul));
    Node *fibo = makeFunc(FIB);
    fibo->left = makeValue(abs(calc(sub)));
    fibo->value = fibonacci(calc(fibo));

//Output
    printf("add : %d\n", calc(add));
    printf("mul : %d\n", calc(mul));
    printf("sub : %d\n", calc(sub));
    printf("fibo : %d\n", calc(fibo));

}
