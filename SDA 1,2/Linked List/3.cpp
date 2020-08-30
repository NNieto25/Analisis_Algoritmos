#include "LinkedList.h"
#include <iostream>

using namespace std;
char empty(node *);

int main(){
    node *pList = nullptr;
    cout<<"Empty : " << empty(pList) << endl;
    push_back(T(1),&pList);
    push_back(T(2),&pList);
    push_back(T(3),&pList);
    cout<<"Empty : " << empty(pList) << endl;
    return 0;
}

//Return '0' if the list is empty
char empty(node *list){
    return list? '#' : '0';
}