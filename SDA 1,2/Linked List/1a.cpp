#include "LinkedList.h"
#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;
template <class T>
void insertInOrder(T , node **);
void printList(node *);
int getRandom();
void transferValues(node **, node **);

int main(){
    srand(time(NULL));
    node *pList = nullptr, *pList2=nullptr;

    for(int i = 0; i < 50; i++)
        insertInOrder(getRandom(),&pList);
    cout << "going through the firs list\n";
    printList(pList);

    cout << "\ntransferring values less than 100\n";
    transferValues(&pList, &pList2);     
    
    cout << "\ngoing through the second list\n";
    printList(pList2);
    
    cout << "\ngoing through the firs list\n";
    printList(pList);
}

int getRandom(){
    return rand() % 1500 + 1;
}

template <class T>
void insertInOrder(T content, node **head){
    node *toAdd = new node;
    toAdd->content = content;

    if (!(*head) || (*head)->content >= toAdd->content)
    {
        toAdd->next = *head;
        *head = toAdd;
    }
    else
    {
        node *it = *head; //Auxiliar node used as iterator
        while (it->next && it->next->content < toAdd->content)
        {
            it = it->next;
        }
            toAdd->next = it->next;
            it->next = toAdd;
    }
}

void printList(node *head){
    if (head)
    {
        cout<< head->content.data << " ";
        printList(head->next);
    }
}

void transferValues(node **head, node **head2){
    if (*head)
    {
        node *aux = *head;
        while (aux->next && aux->next->content <= 100 )
            aux = aux->next;
        *head2 = *head;
        *head = aux->next;
        aux->next = nullptr;
    }
}