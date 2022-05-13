#include "QuickSort.h"

std::vector<int> QuickSort::sort(std::vector<int> list){

    if(list.size() <= 1){
        return list;
    }

    int pivot;

    if(list.size() >= 3){
        pivot = list[3];
    }
    else{
        pivot = list[0];
    }

    std::vector<int> list1;
    std::vector<int> list2;

    for(int i = 1; i<list.size(); i++){

        if(list[i] < pivot){

            list1.push_back(list[i]);

        }
        else{

            list2.push_back(list[i]);

        }

    }

    list1 = sort(list1);
    list2 = sort(list2);

    list1.push_back(pivot);

    list1.insert(list1.end(), list2.begin(), list2.end());

    return list1;

    
}