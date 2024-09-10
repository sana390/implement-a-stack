#include <stdio.h>


int stack[10];
int top = -1;


int Empty() {
    return top == -1;
}


int Full() {
    return top == 9 ;
}


void push(int item) {
    if (Full()) {
        printf("Stack overflow! ", item);
        return;
    }
    stack[++top] = item;
    printf("%d", item);
}

int pop() {
    if (Empty()) {
        printf("No elements to pop");
        return -1;
    }
    return stack[top--];
}


int peek() {
    if (Empty()) {
        printf("No element");
        return -1;
    }
    return stack[top];
}

int main() {
       push(10);
    push(20);
    push(30);

    printf("%d\n", pop());
    printf("%d\n", peek());

        pop();
    pop();
    pop(); 

    return 0;
}

