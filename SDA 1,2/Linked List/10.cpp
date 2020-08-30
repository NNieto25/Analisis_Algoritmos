#include "LinkedList.h"
#include <iostream>

using namespace std;

void swapNodes(node *, int , int );
void findSecond(node *, int, int );
void printList(node *);
int main(){
    node *pList = nullptr;
    push_back(T(1),&pList);
    push_back(T(2),&pList);
    push_back(T(3),&pList);
    push_back(T(4),&pList);
    cout<< "\nPrinting list: "<<endl;
    printList(pList);
    swapNodes(pList,2,4);
    cout<< "\nPrinting list: "<<endl;
    printList(pList);
    return 0;
}

void swapNodes(node *head, int first, int second){
            node *toSwap = nullptr;

            while (head)
            {
                if(head->content == first || head->content == second)
                {
                    toSwap = head;
                    break;
                }
                head = head->next;
            }
            if(head && toSwap){
                if(toSwap->content == first){
                findSecond(head,second,first);
                toSwap->content.data = second;
                }
                else{
                findSecond(head,first, second);
                    toSwap->content.data = first;
                }
            }
            
}
void findSecond( node *list, int remaining, int asign){
    while (list)
    {   
        if(list->content == remaining){
            list->content = asign;
            break;
        }
        list = list->next;
    }   
}

void printList(node *head){
    while (head)
    {
        cout<< head->content.data<<endl;
        head = head->next;
    }
    
}
