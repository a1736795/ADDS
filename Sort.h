#include<vector>
#ifndef SORT_H
#define SORT_H

class Sort
{
public:
    Sort();
    ~Sort() {};
    virtual void exec() {};
    void swap(int&, int&);
    std::vector<int> sort(std::vector<int> list);

private:

};
#endif