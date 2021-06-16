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
template<class ForwardIt, class Comparison>
void sort(ForwardIt first, ForwardIt last, Comparison cmp)
{
    for(auto it = first; it != last; it++) {
        for(auto jt = first; jt != it; jt++) {
            if(cmp(*it, *jt)) {
                std::swap(*it, *jt);
            }
        }
    }
}

}
#endif
