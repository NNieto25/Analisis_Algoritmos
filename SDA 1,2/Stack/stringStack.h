#pragma once 
#include <iostream>
#include <string>

typedef struct nodeContent{
    std::string content;
    nodeContent(){}
    nodeContent(std::string _content){content = _content;}
    
} D;

struct node{
    D data;
    node *next;
};

void push(D data, node **head){
    node *toAdd = new node;
    toAdd->data = data;
    
    toAdd->next = *head;
    *head = toAdd;
}

int size(node *head){
    int counter = 0;
    while (head)
    {
        head = head->next;
        counter++;
    }
    return counter;
}

void pop(node **head){
    if(*head){
        node *toDelete = *head;
        *head = (*head)->next;
        delete toDelete;
    }
}

void printStack(node *head){
    std::cout<<"\n\nPrinting stack: \n";
    while (head)
    {
        std::cout<< head->data.content << " ";
        head  = head->next;
    }   
}

D top(node *head){
    if(head)
        return head->data;
}