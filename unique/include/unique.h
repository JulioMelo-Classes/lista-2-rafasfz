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

template<class InputIt, class Equal>
bool search(vector<InputIt>& v, InputIt it, Equal eq) {
    for(InputIt value : v) {
        if(eq(*value, *it)) {
            return true;
        }
    }

    return false;
}


/*! 
 * TODO: documentação no estilo doxygen
 */
template<class InputIt, class Equal>
InputIt unique( InputIt first, InputIt last, Equal eq )
{
    vector<InputIt> v;

    for(InputIt it = first; it != last; it++) {
        if(!search(v, it, eq)) {
            v.push_back(it);
        }
    }

    for(auto value : v) {
        *first = *value;
        first++;
    }


    return first;
}

}
#endif
