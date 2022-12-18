#pragma once

#include "Human.hpp"

#include <algorithm>
#include <list>
#include <vector>

std::vector< char > foo(std::list< Human >& people)
{
    std::vector< char > ret_v(people.size());

    std::for_each(people.begin(), people.end(), [&](Human& k) { k.birthday(); });

    std::transform(people.begin(), people.end(), ret_v.rbegin(), [&](Human& k) {
        return k.isMonster() ? 'n' : 'y';
    });

    return ret_v;
}
