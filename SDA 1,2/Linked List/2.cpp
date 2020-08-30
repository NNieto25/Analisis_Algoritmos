#include "LinkedList.h"
#include <iostream>
#include <functional>

using namespace std;

struct storedLambdas{
    function<void(node **)> getNumbers;
    function<void(node *, node *, node **)> getProducts;
    function<void(node*)> travelList;
};

int main(){
    node *pListM = nullptr, *pListN = nullptr, *pListProducts = nullptr;
    storedLambdas functions;
    
    functions.getNumbers = [](node **head) -> void {
        int max, aux;
        cout<<"\ninsert amount of numbers for list: ";
        cin>> max;
        for(int i = 0; i < max; i++){
            cout<<"Insert the term " << i + 1 <<": ";
            cin>> aux;
            push_back(T(aux), head);
        }
    };

    functions.getProducts = [](node *head1, node *head2, node **head3) -> void{
        while (head1)
        {
            node *aux = head2;
            while (aux)
            {
                push_back(T(aux->content.data * head1->content.data), head3);
                aux = aux->next;
            }
            head1 = head1->next;
        }
        
    };

    functions.travelList = [](node *head)-> void{
        while(head){
            cout<< head->content.data << " ";
            head = head->next;
        }
    };

    functions.getNumbers(&pListM);
    functions.getNumbers(&pListN);
    cout<< "\n\nGetting products of numbers... \n";
    functions.getProducts(pListM, pListN,&pListProducts);
    cout<< "\n\nGoing through the list of products: \n";
    functions.travelList(pListProducts);

    return 0;
}