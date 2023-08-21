//
// Created by Thandazani Gwampa on 2023/08/19.
//
#include "FibonacciSequence.h"

// function to create a new node
Node* makeFunc(TypeTag type) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->type = type;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

// function to assign values to a node
Node* makeValue(int value) {
    Node *newNode = makeFunc(LIT);
    newNode->value = value;
    return newNode;
}

// fibonacci function using dynamic programming
int fibonacci(int n) {
    int fib[n+1];
    fib[0] = 0;
    fib[1] = 1;
    for(int i = 2; i <= n; i++) {
        fib[i] = fib[i-1] + fib[i-2];
    }
    return fib[n-1];
}

// function to calculate the value of a node
int calc(Node* node) {
    if (node->type == ADD) {
        return calc(node->left) + calc(node->right);
    }
    else if (node->type == SUB) {
        return calc(node->left) - calc(node->right);
    }
    else if (node->type == MUL) {
        return calc(node->left) * calc(node->right);
    }
    else if (node->type == DIV) {
        return calc(node->left) / calc(node->right);
    }
    else if (node->type == ABS) {
        return abs(calc(node->left));
    }
    else if (node->type == FIB) {
        return fibonacci(calc(node->left));
    }
    else if (node->type == LIT) {
        return node->value;
    }
    printf("Invalid node type %d\n", node->type);
    exit(1);
}
