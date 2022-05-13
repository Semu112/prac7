#ifndef RECURSIVEBINARYSEARCH_H
#define RECURSIVEBINARYSEARCH_H

#include <vector>

class RecursiveBinarySearch{

    public:

        bool search(std::vector<int> list, int searchInt);
        bool searchHelper(std::vector<int> list, int searchInt, int start, int end);
};

#endif