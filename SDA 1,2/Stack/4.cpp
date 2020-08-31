#include "stack.h"

using namespace std;
bool sameQuantity(node *, node *);
int main(){
    node *pListEvens = nullptr, *pListOdds = nullptr;
    int amount = 0, aux = 0;
    cout<<"Set the amount of numbers: ";
    cin>> amount;
    for(int i = 0; i < amount; i++){
        cout<<"Insert the term "<< i + 1<< ": ";
        cin>> aux;
        if(aux&1)
            push(D(aux),&pListOdds);
        else
            push(D(aux), &pListEvens);
    }
    if (sameQuantity(pListEvens,pListOdds))
        {
            cout<<"Oh yes right there."<<endl;
        }
        else
            cout<<"Oh no :("<<endl;
    return 0;
}

bool sameQuantity(node *Evens, node *Odds){
    return size(Evens) == size(Odds);
}