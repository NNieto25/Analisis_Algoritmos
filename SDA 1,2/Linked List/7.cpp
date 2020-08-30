#include "LinkedList.h"
#include <iostream>

using namespace std;
int searchPosition(int , node *);
int main(){
    node *pList = nullptr;
    push_back(T(1),&pList);
    push_back(T(2),&pList);
    push_back(T(3),&pList);
    push_back(T(4),&pList);

    int position = 0;
    cout<<"Number to find: ";
    cin>>position;
    position = searchPosition(position, pList); 
    if (position == -1)
    {
        cout<< "Could not be found."<<endl;
    }
    else cout<< "Was found in position "<< position << "."<<endl;
    return 0;
}

int searchPosition(int data, node *head){
    int position = 0;
    while (head)
    {
        if (head->content == data)
            return position;
        head = head->next;
        position++;
    }
    return -1;
}