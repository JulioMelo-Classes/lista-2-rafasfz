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
 * @tparam Predicado para comparar elementos do range do tipo bool(const T a)
 * 
 * @param first Ponteiro para o primeiro elemento do range
 * @param last Ponteiro para a posição logo após o último elemento do range
 * @param p Função predicado para analisar se um elemento satizfaz sua condição
 * 
 * @return Um interator apontado para o primeiro elemento que satisfaz p ou se nenhum elemento satisfazer o preciado um interator apontatodo para a posição logo após o último elemento do range
 */
 /*
 ok
 */
template<class InputIt, class UnaryPredicate>
InputIt find_if(InputIt first, InputIt last, UnaryPredicate p)
{

    for(auto it = first; it != last; it++) {
        if(p(*it)) {
            return it;
        }
    }

    return last;
}

}
#endif
