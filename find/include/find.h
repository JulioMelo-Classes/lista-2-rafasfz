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
 * @tparam T tipo dos elementos apontado pelos elmentos do range
 * @tparam Verificar se os elmentos são iguais
 * 
 * @param first Ponteiro para o primeiro elemento do range
 * @param last Ponteiro para a posição logo após o último elemento do range
 * @param value O valor a ser comparado na função
 * 
 * @return Um iterator (ou ponteiro) para o primeiro elemento que satisfaz a função eq ou caso nenhum elmeento satisfaça a posição logo após a última do range.
 * 
 */
 /*
 ok
 */
template<class InputIt, class T, class Equal>
InputIt find(InputIt first, InputIt last, const T& value, Equal eq)
{
    
    for(auto it = first; it != last; it++) {
        if(eq(*it, value)) {
            return it;
        }
    }

    return last;
}

}
#endif
