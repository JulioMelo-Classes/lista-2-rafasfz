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
template<class ForwardIt>
ForwardIt rotate(ForwardIt first, ForwardIt n_first, ForwardIt last)
{
    if(first == n_first) {
        return first;
    }

    int qnt = n_first - first;

    for(int i = 0; i < qnt; i++) {
        auto firstElement = *first;
        for(auto it = first; it != last - 1; it++) {
            *it = *(it + 1);
        }
        *(last - 1) = firstElement;
    }

    return n_first+1;
}

}
#endif
