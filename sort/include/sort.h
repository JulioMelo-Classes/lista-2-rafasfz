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
 * Ordena os elmentos de um range
 * 
 * @tparam ForwardIt iterator para o range.
 * @tparam Comparison o tipo de uma função bool(const T &a, const T &b)
 *
 * @param first Ponteiro para o primeiro elemento do range
 * @param last Ponteiro para a posição logo após o último elemento do range
 * @param cmp A função de comparação que retorna true quando o primeiro parâmetro é menor do que o segundo
 *
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
