#include "queue.h"
using namespace std;

void pushStack(T, node **);
void popStack(node **);
void reverseQueue(node **);
int main(){
    node *pQueue = nullptr;
    push(T(1),&pQueue);
    push(T(2),&pQueue);
    push(T(3),&pQueue);
    printQueue(pQueue);
    reverseQueue(&pQueue);
    printQueue(pQueue);

}

void pushStack(T content, node **stack){
    node *toAdd = new node;
    toAdd->data = content;
    toAdd->next = nullptr;
    if(*stack)
        toAdd->next = *stack;
    *stack = toAdd;
}

void popStack(node **stack){
    if(*stack){
        node *toDelete = *stack;
        *stack = (*stack)->next;
        delete toDelete;
    }
    
}

void reverseQueue(node **queue){
    node *auxStack = nullptr;
    while(*queue){
        pushStack((*queue)->data, &auxStack);
        pop(queue);
    }
    while (auxStack)
    {
        push(auxStack->data,queue);
        popStack(&auxStack);
    }
}