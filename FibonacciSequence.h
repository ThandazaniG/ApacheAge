//
// Created by Thandazani Gwampa on 2023/08/19.
//

#ifndef UNTITLED_FIBONACCISEQUENCE_H
#define UNTITLED_FIBONACCISEQUENCE_H

typedef enum TypeTag {
    ADD,
    SUB,
    MUL,
    DIV,
    ABS,
    FIB,
    LIT
} TypeTag;

// Node definition
typedef struct Node {
    TypeTag type;
    int value;
    struct Node *left;
    struct Node *right;
} Node;

#define MAXN 100
int fib[MAXN];

// function to create a new node
struct Node* makeFunc(enum TypeTag type);

// function to assign values to a node
struct Node* makeValue(int value);

// fibonacci function using dynamic programming
int fibonacci(int n);

// function to calculate the value of a node
int calc(Node *node);

#endif //UNTITLED_FIBONACCISEQUENCE_H
