#include "LinkedList.h"
#include <iostream>

using namespace std;
int getProducts(node *);

int main(){
    node *pList = nullptr;
    cout<<"Products of nodes: "<< getProducts(pList)<<endl;
    push_back(T(1),&pList);
    push_back(T(2),&pList);
    push_back(T(3),&pList);
    push_back(T(4),&pList);
    cout<<"Products of nodes: "<< getProducts(pList)<<endl;
    return 0;
}

int getProducts(node *head){
    int product = 1;
    while (head)
    {
        product *= head->content.data;
        head = head->next;
    }
    return product == 1? 0 : product;
}