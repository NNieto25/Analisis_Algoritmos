#include "stack.h"

using namespace std;
void intToDigit(int, node**);
int main(){
    node *pList = nullptr;
    int number = 0;
    push(D(1), &pList);
    push(D(2), &pList);
    push(D(3), &pList);
    printStack(pList);
    cout<<"Insert a number: ";
    cin>>number;
    
    intToDigit(number, &pList);
    printStack(pList);

    return 0;
}

void intToDigit(int number, node**head){
    while(*head){
        pop(head);
    }
    int aux = 0;
    while(number){
        aux = number%10;
        number -= aux;
        number /= 10;
        push(D(aux),head);
    }
}