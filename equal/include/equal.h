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
 * @tparam Itr iterator para o range.
 * @tparam Equal o tipo de uma função bool(const T &a, const T &b)
 *
 * @param first1 Ponteiro para o primeiro elemento do primeiro range
 * @param last1 Ponteiro para a posição logo após o último elemento do primeiro range
 * @param first2 Ponteiro para o primeiro elemento do segundo range
 * @param eq A função de comparação que retorna true quandoos elmentos são iguais
 * 
 * @return true se os ranges foram iguais
 *
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

/*! 
 *
 * @tparam Itr iterator para o range.
 * @tparam Equal o tipo de uma função bool(const T &a, const T &b)
 *
 * @param first1 Ponteiro para o primeiro elemento do primeiro range
 * @param last1 Ponteiro para a posição logo após o último elemento do primeiro range
 * @param first2 Ponteiro para o primeiro elemento do segundo range
 * @param last2 Ponteiro para a posição logo após o último elmento do segundo range
 * @param eq A função de comparação que retorna true quandoos elmentos são iguais
 * 
 * @return true se os ranges foram iguais
 *
 */
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
