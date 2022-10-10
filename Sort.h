#include<vector>
#ifndef SORT_H
#define SORT_H

class Sort
{
public:
    Sort();
    ~Sort() {};
    virtual std::vector<int> sort(std::vector<int> list);
    void swap(int&, int&);

private:

};
#endif