#pragma once
#include <iostream>

typedef struct operationType{
    std::string name;
    double time;
    operationType(){}
    operationType(std::string _name, double _time){name = _name; time = _time;}
} operation;

typedef struct person{
    std::string name;
    operation op;
    int opTimes;
    person(){}
    person(std::string _name, operation _op, int _opTimes){name = _name; op = _op; opTimes = _opTimes;}
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
        std::cout<< "Client: "<< queue->data.name << "\n\tOperation: "<< queue->data.op.name << " (";
        std::cout<< queue->data.op.time<< " mins)\n\t"<<"Times: "<<queue->data.opTimes<<std::endl;
        queue  = queue->next;
    }   
}

