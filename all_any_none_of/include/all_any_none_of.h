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
 * @tparam UnaryPredicate o tipo de uma função bool(const T &a)
 * 
 * @param first Ponteiro para o primeiro elemento do range
 * @param last Ponteiro para a posição logo após o último elemento do range
 * @param p Função para a validação dos elmentos do range para um determinado prediado
 * 
 * @return true caso todos os elementos satisfaçam o predicado, se não false
 * 
 */
 /*
 blz!
 */
template<class InputIt, class UnaryPredicate>
bool all_of(InputIt first, InputIt last, UnaryPredicate p)
{
    int total = last - first;
    int corrects = 0;

    for(auto it = first; it != last; it++) {
        if(p(*it)) {
            corrects++;
        }
    }

    if(corrects != total)
        return false;

    return true;
}

/*! 
 *
 * @tparam InputIt iterator para o range.
 * @tparam UnaryPredicate o tipo de uma função bool(const T &a)
 * 
 * @param first Ponteiro para o primeiro elemento do range
 * @param last Ponteiro para a posição logo após o último elemento do range
 * @param p Função para a validação dos elmentos do range para um determinado prediado
 * 
 * @return true caso um elemento satisfaça o predicado, se não false
 * 
 */
template<class InputIt, class UnaryPredicate>
bool any_of(InputIt first, InputIt last, UnaryPredicate p)
{
    if(first == last) {
        return true;
    }

    for(auto it = first; it != last; it++) {
        if(p(*it)) {
            return true;
        }
    }

    return false;
}

/*! 
 *
 * @tparam InputIt iterator para o range.
 * @tparam UnaryPredicate o tipo de uma função bool(const T &a)
 * 
 * @param first Ponteiro para o primeiro elemento do range
 * @param last Ponteiro para a posição logo após o último elemento do range
 * @param p Função para a validação dos elmentos do range para um determinado prediado
 * 
 * @return true caso todos os elementos não satisfaçam o predicado, se não false
 * 
 */
template<class InputIt, class UnaryPredicate>
bool none_of(InputIt first, InputIt last, UnaryPredicate p)
{
    int total = last - first;
    int wrongs = 0;

    for(auto it = first; it != last; it++) {
        if(!p(*it)) {
            wrongs++;
        }
    }

    if(wrongs != total)
        return false;

    return true;
}

}
#endif
