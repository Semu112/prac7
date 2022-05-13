#include "QuickSort.h"

std::vector<int> QuickSort::sort(std::vector<int> list){

    if(list.size() < 2){
        return list;
    }

    int pivotIndex;

    if(list.size() >= 3){
        pivotIndex = 2;
    }
    else{
        pivotIndex = 0;
    }

    std::vector<int> list1;
    std::vector<int> list2;

    for(int i = 0; i<list.size(); i++){

        if(i != pivotIndex){
            if(list.at(i) <= list.at(pivotIndex)){

                list1.push_back(list.at(i));

            }
            else{

                list2.push_back(list.at(i));

            }
        }

    }

    list1 = sort(list1);

    list1.push_back(list.at(pivotIndex));

    list2 = sort(list2);

    list1.insert(list1.end(), list2.begin(), list2.end());

    return list1;

    
}