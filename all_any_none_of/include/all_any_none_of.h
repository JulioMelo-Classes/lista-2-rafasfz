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
template<class InputIt, class UnaryPredicate>
bool all_of(InputIt first, InputIt last, UnaryPredicate p)
{
    int total = last - first;
    int corrects = 0;

    for(auto it = first; it != last; it++) {
        if(p(*it)) {
            corrects++;
        }
    }

    if(corrects != total)
        return false;

    return true;
}

/*! 
 * TODO: documentação no estilo doxygen
 */
template<class InputIt, class UnaryPredicate>
bool any_of(InputIt first, InputIt last, UnaryPredicate p)
{
    if(first == last) {
        return true;
    }

    for(auto it = first; it != last; it++) {
        if(p(*it)) {
            return true;
        }
    }

    return false;
}

/*! 
 * TODO: documentação no estilo doxygen
 */
template<class InputIt, class UnaryPredicate>
bool none_of(InputIt first, InputIt last, UnaryPredicate p)
{
    int total = last - first;
    int wrongs = 0;

    for(auto it = first; it != last; it++) {
        if(!p(*it)) {
            wrongs++;
        }
    }

    if(wrongs != total)
        return false;

    return true;
}

}
#endif
