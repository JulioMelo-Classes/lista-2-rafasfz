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
 * @tparam InputIt iterator para o range.
 * @tparam Equal o tipo de uma função bool(const T &a, const T &b)
 *
 * @param v Vetor de ponteiros iterators
 * @param it Ponteiro que sera procurado no vector
 * @param eq A função de comparação que retorna true quando os 2 elementos são iguais
 * 
 * @return true caso ache o ponteiro iterator no vetor
 *
 */
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
 * Exemplo de documentação seguindo o formato Doxygen
 *
 * @tparam InputIt iterator para o range.
 * @tparam Equal o tipo de uma função bool(const T &a, const T &b)
 *
 * @param first Ponteiro para o primeiro elemento do range
 * @param last Ponteiro para a posição logo após o último elemento do range
 * @param eq A função de comparação que retorna true quando os 2 elementos são iguais
 * 
 * @return a posição logo após a última do range após a remoção dos elementos iguais
 *
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
