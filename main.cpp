#include "Sort.h"
#include "BubbleSort.h"
#include "QuickSort.h"
#include "RecursiveBinarySearch.h"

#include <iostream>

void print_list(std::vector<int> list){
    std::cout << "[";
    for(int i = 0; i<list.size(); i++){
        std::cout << " " << list[i];
    }
    std::cout << "]" << std::endl;
}

int main(void){

    BubbleSort bs;
    QuickSort qs;
    RecursiveBinarySearch rbs;

    //Getting all values into a vector
    int arrList[] = {1, 1, 1, 1, 1, 1, 2};

    std::vector<int> list;
    for(int i = 0; i<7; i++){
        list.push_back(arrList[i]);
    }

    list = qs.sort(list);

    print_list(list);

    std::cout << rbs.search(list, 2) << std::endl;

    return 0;
}