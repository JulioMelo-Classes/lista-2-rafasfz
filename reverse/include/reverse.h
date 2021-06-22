#ifndef GRAAL_H
#define GRAAL_H

#include <utility>
using std::pair;
#include <iterator>
using std::distance;
#include <algorithm>
using std::sort;

namespace graal {

/*! 
 * Inverte a ordem de cada elemento em um range
 * 
 * @tparam BidirIt iterator para o range.
 * 
 * @param first Ponteiro para o primeiro elemento do range
 * @param last Ponteiro para a posição logo após o último elemento do range
 * 
 */
template<class BidirIt>
void reverse(BidirIt first, BidirIt last)
{   
    int qnt = last - first;

    for(int i=0; i<(qnt/2); i++) {
        last--;
        auto aux = *first;
        *first = *last;
        *last = aux;
        first++;
    }
    
}

}
#endif
