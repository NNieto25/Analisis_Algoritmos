#include "LinkedList.h"
#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

int getRandom();
void printReverseList(node *);
void printList(node *);

int main(){
    srand(time(NULL));
    node *pList = nullptr;
    for (size_t i = 0; i < 100; i++)
        push_back(T(getRandom()), &pList);

    cout << "\n\nGoing through the list\n";
    printList(pList);
    cout << "\n\nGoing through the reverse list\n";
    printReverseList(pList);
    return 0;
}

int getRandom(){
    return rand()%1500 + 1;
}

void printReverseList(node *head){
    if (head)
    {
        printReverseList(head->next);
        cout<< head->content.data << " ";
    }
}

void printList(node *head){
    if (head)
    {
        cout<< head->content.data << " ";
        printList(head->next);
    }
}