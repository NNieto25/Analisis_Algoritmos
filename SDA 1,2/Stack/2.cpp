#include "stack.h"

using namespace std;
void reverseStack(node **);
int main(){
    node *pList = nullptr;
    
    push(D(1), &pList);
    push(D(2), &pList);
    push(D(3), &pList);
    printStack(pList);
    
    reverseStack(&pList);
    printStack(pList);

    return 0;
}

void reverseStack(node **head){
    node *auxStack = nullptr;
    while (*head)
    {
        push(top(*head), &auxStack);
        pop(head);
    }
    *head = auxStack;
}