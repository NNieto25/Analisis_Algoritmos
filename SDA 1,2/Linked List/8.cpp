#include <iostream>
#include <string>
using namespace std;

typedef struct nodeContent{
    int age;
    string name;
    char gender;
    nodeContent(){}
    nodeContent(string _name, char _gender){name = _name; gender = _gender;}
    nodeContent(int _age,string _name, char _gender ){age = _age; name = _name; gender = _gender;}
    string to_string(){return name + ", " + gender;}
} T;

struct node
{
    T content;
    node *next;
};

void orderByGender(node **); 
void push_back(T, node **);
void printList(node *);
int size(node *);
int main(){
    node *pList = nullptr;
    push_back(T("nestor",'F'),&pList);
    push_back(T("nestor",'F'),&pList);
    push_back(T("nestor",'M'),&pList);
    push_back(T("nestor",'M'),&pList);
    push_back(T("nestor",'F'),&pList);
    push_back(T("nestor",'M'),&pList);

    cout<< "Going through the list: "<<endl;
    printList(pList);

    orderByGender(&pList);
    cout<< "\nGoing through the list: "<<endl;
    printList(pList);
    return 0;
}

void push_back(T content, node **head)
{
    node *toAdd = new node;
    toAdd->content = content;
    toAdd->next = nullptr;

    if (*head)
    {
        node *aux = *head;
        while (aux->next)
            aux = aux->next;

        aux->next = toAdd;
    }
    else
    {
        *head = toAdd;
    }
}

void orderByGender(node **list){
    node *aux = nullptr;
    node *it = *list;
    char gender1;
    if (it)
    {
        gender1 = it->content.gender;
        while (it->next)
        {
            if(it->next->content.gender !=gender1){
                node *transfer = it->next;
                it->next = (it->next->next?it->next->next: nullptr);
                push_back(transfer->content, &aux);
                delete transfer;
            }else
            it = it->next;
        }
    }
    int auxSize = size(aux);
    if (auxSize)
    {   
        it = *list;
        for (size_t i = 0; i < auxSize; i++)
        {
            node *aux1 = it->next, *aux2 = aux->next;
            it->next = aux;
            aux->next = aux1;
            it = aux1;
            aux = aux2;
        }
    }
    
    
    
}

void printList(node *head){
    while (head)
    {
        cout<< head->content.to_string()<<endl;
        head = head->next;
    }
    
}

int size(node *head){
    int counter = 0;
    while (head)
    {
        counter++;
        head = head->next;
    }
    return counter;
}