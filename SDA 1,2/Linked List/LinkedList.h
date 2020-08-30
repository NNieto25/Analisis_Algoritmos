#pragma once

struct nodeContent
{
    int data;

    nodeContent() {}
    nodeContent(int _data) { data = _data; }

    bool operator<(const nodeContent& r){
        return this->data < r.data;
    }

    bool operator>(const nodeContent& r){
        return this->data > r.data;
    }

    bool operator>=(const nodeContent& r){
        return this->data >= r.data;
    }
    bool operator<=(const int& r){
        return this->data <= r;
    }
    bool operator&(const int& r){
        return this->data & r;
    }
    bool operator==(const int& r){
        return this->data == r;
    }
    bool operator>(const int& r){
        return this->data > r;
    }
};
typedef struct nodeContent T;

struct node
{
    T content;
    node *next;
};

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
