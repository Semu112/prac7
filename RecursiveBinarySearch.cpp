#include "RecursiveBinarySearch.h"

#include <iostream>

bool RecursiveBinarySearch::search(std::vector<int> list, int searchInt){

    return this->searchHelper(list, searchInt, 0, list.size()-1);

}

bool RecursiveBinarySearch::searchHelper(std::vector<int> list, int searchInt, int start, int end){

    int index = (start+end)/2;

    if(list[index] == searchInt){
        std::cout << "found" << std::endl;
        return true;
    }
    else if(start != end){

        if( searchInt < list[index] ){

            return searchHelper(list, searchInt, start, index-1);

        }
        else{

            return searchHelper(list, searchInt, index+1, end);

        }
    }
    else{
        return false;
    }

}