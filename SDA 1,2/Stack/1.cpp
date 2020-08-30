#include "stack.h"

using namespace std;
void replace(node **, int , int);
int main(){
    node *pList = nullptr;

    push(D(1), &pList);
    push(D(2), &pList);
    push(D(3), &pList);
    printStack(pList);

    replace(&pList, 3, 8);
    printStack(pList);

    return 0;
}


void replace(node **head, int oldNumber, int newNumber){
    node *it = *head;
    while (it)
    {
        if(it->data == oldNumber)
            it->data.content = newNumber;
        it = it->next;
    }
}