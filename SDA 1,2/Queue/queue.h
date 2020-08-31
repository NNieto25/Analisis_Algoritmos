#pragma once
#include <iostream>

typedef struct nodeContent{
    int content;
    nodeContent(){}
    nodeContent(int _content){content = _content;}
} T;

struct node{
    T data;
    node *next;
};

void push(T data, node **queue){
    node *toAdd = new node;
    toAdd->data = data;
    toAdd->next = nullptr;
    if(*queue){
        node *it = *queue;
        while(it->next){
        it = it->next;
        }
        it->next = toAdd;
    }
    else
    *queue = toAdd;
}

void pop(node **queue){
    if (*queue)
    {
        node *toDelete = *queue;
        *queue = (*queue)->next;
        delete toDelete;
    }
}

int size(node *queue){
    int counter = 0;
    while(queue){
        queue = queue->next;
        counter++;
    }
    return counter;
}

void printQueue(node *queue){
    std::cout<<"\n\nPrinting queue: \n";
    while (queue)
    {
        std::cout<< queue->data.content << " ";
        queue  = queue->next;
    }   
}