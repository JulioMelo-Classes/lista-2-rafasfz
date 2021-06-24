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
 * @tparam ForwardIt iterator para o range.
 *
 * @param first Ponteiro para o primeiro elemento do range
 * @param last Ponteiro para a posição logo após o último elemento do range
 * @param n_first Ponteiro para a posição que sera o novo primeiro elemnto do range
 *
 * @return Um iterator para a posição onde se encontra o primeiro elemento do range antes da rotação
 *
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
