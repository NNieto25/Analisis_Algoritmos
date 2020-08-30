#include "LinkedList.h"
#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;
void printList(node *);
void printListWithLimit(node *, int);
int main(){
    srand(time(NULL));

    int limit = 0;
    node *pList = nullptr;
    
    for(int i = 0; i<100; i++)
        push_back(T(rand()%1000),&pList);
    
    cout<<"Set the limit: ";
    cin>> limit;
    cout<< "Printing list with limit: \n";
    printListWithLimit(pList, limit);
    return 0;
}

void printList(node *head){
    while (head)
    {
        cout<< head->content.data <<" ";
        head = head->next;
    }
}

void printListWithLimit(node *head, int limit){
    while (head)
    {
        if(head->content > limit)
        cout<< head->content.data <<" ";
        head = head->next;
    }
}