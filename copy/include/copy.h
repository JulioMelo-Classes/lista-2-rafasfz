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
 * 
 * @tparam InputIt iterator para o range.
 * 
 * @param first Ponteiro para o primeiro elemento do range que vai ser copiado
 * @param last Ponteiro para a posição logo após o último elemento do range que vai ser copiado
 * @param d_first Ponteiro para o primeiro elemento do range que vai receber o range que foi copiado
 * 
 * @return Um iterator apontado para a posição logo após o último elemento do range cópia.
 * 
 */
 /*
 ok
 */
template<class InputIt>
InputIt copy(InputIt first, InputIt last, InputIt d_first)
{
    for(auto it=first; it!=last; it++) {
        *d_first = *it;
        d_first++;
    }

    return d_first;
}

}
#endif
