#include <set>

std::set<int> operator+(const std::set<int>& s1,const std::set<int>& s2)
{
    std::set<int> new_set;
    for (auto s : s1)
    {
        new_set.insert(s);
    }
    for (auto s : s2)
    {
        new_set.insert(s);
    }
    return new_set;
}

std::set<int> operator-(const std::set<int>& s1,const std::set<int>& s2)
{
    std::set<int> new_set;
    for (auto s : s1)
    {
        new_set.insert(s);
    }
    for (auto s : s2)
    {
        new_set.erase(s);
    }
    return new_set;
}


std::set<int> operator+(const std::set<int>& s1,const std::set<int>& s2)
{
    std::set<int> new_set;
    for (auto s : s1)
    {
        new_set.insert(s);
    }
    for (auto s : s2)
    {
        new_set.insert(s);
    }
    return new_set;
}

std::set<int> operator-(const std::set<int>& s1,const std::set<int>& s2)
{
    std::set<int> new_set;
    for (auto s : s1)
    {
        new_set.insert(s);
    }
    for (auto s : s2)
    {
        new_set.erase(s);
    }
    return new_set;
}