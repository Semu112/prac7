#include "Sort.h"
#include "BubbleSort.h"
#include "QuickSort.h"

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

    //Getting all values into a vector
    int arrList[] = {7, 6, 34636, 8, 3, 2, 1};

    std::vector<int> list;
    for(int i = 0; i<7; i++){
        list.push_back(arrList[i]);
    }

    list = qs.sort(list);

    print_list(list);

    return 0;
}