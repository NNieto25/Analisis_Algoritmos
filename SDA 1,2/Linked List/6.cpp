#include "LinkedList.h"
#include <iostream>

using namespace std;
void getEvens(node *);
void getOdds(node *);

int main(){
    node *pList = nullptr;
    
    push_back(T(1),&pList);
    push_back(T(2),&pList);
    push_back(T(3),&pList);
    push_back(T(4),&pList);
    cout<<"Getting evens : \n";
    getEvens(pList);
    cout<<"\nGetting odds: \n";
    getOdds(pList);
    return 0;
}

void getEvens(node *head){
    while (head)
    {
        if(!(head->content & 1))
            cout <<head->content.data<<endl;
        head = head->next;
    }
    }
void getOdds(node *head){
    while (head)
    {
        if(head->content & 1)
            cout <<head->content.data<<endl;
        head = head->next;
    }
}