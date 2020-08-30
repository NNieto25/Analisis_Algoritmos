#include "LinkedList.h"
#include <iostream>

using namespace std;

int size(node *);

int main(){
    node *pList = nullptr;
    cout<<"Number of nodes: "<< size(pList)<<endl;
    push_back(T(1),&pList);
    push_back(T(2),&pList);
    push_back(T(3),&pList);
    push_back(T(4),&pList);
    cout<<"\nNumber of nodes: "<< size(pList)<<endl;
    
    return 0;
}

int size(node *head){
    int count = 0;
    while (head)
    {
        count++;
        head = head->next;
    }
    return count;
}