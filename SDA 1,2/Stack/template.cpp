#include "stack.h"

using namespace std;

int main(){
    node *pList = nullptr;

    push(D(1), &pList);
    push(D(2), &pList);
    push(D(3), &pList);
    printStack(pList);

    printStack(pList);

    return 0;
}