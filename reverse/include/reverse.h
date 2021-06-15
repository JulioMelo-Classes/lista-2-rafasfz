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
 * TODO: documentação no estilo doxygen
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
