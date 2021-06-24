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
 *
 * @tparam ForwardIt iterator para o range.
 * @tparam UnaryPredicate o tipo de uma função bool(const T &a)
 *
 * @param first Ponteiro para o primeiro elemento do range
 * @param last Ponteiro para a posição logo após o último elemento do range
 * @param p A função que retorna true caso o elemento satisfaça determinado predicado
 *
 * @return Um iterator apontando para o elemento logo após o último elemento no range reordenado que satisfaz o predicado.
 *
 */
template<class ForwardIt, class UnaryPredicate>
ForwardIt partition(ForwardIt first, ForwardIt last, UnaryPredicate p)
{
    ForwardIt lastTrue = first;
    for(auto it = first; it != last; it++) {
        for(auto jt = first; jt != it; jt++) {
            if(p(*it) && !p(*jt)) {
                std::swap(*it, *jt);
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
