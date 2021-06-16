#ifndef GRAAL_H
#define GRAAL_H

#include <utility>
using std::pair;
#include <iterator>
using std::distance;
#include <algorithm>
using std::sort;
#include <vector>

namespace graal {

/*! 
 * TODO: documentação no estilo doxygen
 */
template<class ForwardIt, class UnaryPredicate>
ForwardIt partition(ForwardIt first, ForwardIt last, UnaryPredicate p)
{
    ForwardIt lastTrue = first;
    for(auto it = first; it != last; it++) {
        for(auto jt = first; jt != it; jt++) {
            if(p(*it) && !p(*jt)) {
                ForwardIt aux = last+1;
                *aux = *it;
                *it = *jt;
                *jt = *aux;
                lastTrue = jt+1;
            }

            if(p(*it) && p(*jt)) {
                lastTrue = it+1;
            }
        }
    }

    return lastTrue;
}

}
#endif
