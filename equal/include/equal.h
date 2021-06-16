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
template<class InputIt1, class InputIt2, class Equal>
bool equal(InputIt1 first1, InputIt1 last1, InputIt2 first2, Equal eq)
{
    int qnt = last1 - first1;

    for(int i = 0; i < qnt; i++) {
        if(!eq(*(first1+i), *(first2+i))) {
            return false;
        }
    }


    return true;
}

template<class InputIt1, class InputIt2, class Equal>
bool equal(InputIt1 first1, InputIt1 last1,
           InputIt2 first2, InputIt2 last2,
           Equal eq )
{
    int qnt = last1 - first1;
    int qnt2 = last2 - first2;

    if(qnt != qnt2) {
        return false;
    }

    for(int i = 0; i < qnt; i++) {
        if(!eq(*(first1+i), *(first2+i))) {
            return false;
        }
    }


    return true;
}

}
#endif
