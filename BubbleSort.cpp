#include "BubbleSort.h"

std::vector<int> BubbleSort::sort(std::vector<int> list){

    bool sorted = false;

    while(!sorted){

        sorted = true;
        for(int i = 0; i<list.size()-1; i++){ //minus one so the algorithm doesn't compare the last number with a number that is out of the bounds of the vector

            if(list[i] > list[i+1]){ //swaps items

                int temp = list[i];
                list[i] = list[i+1];
                list[i+1] = temp;

                sorted = false;
            }

        }

    }

    return list;

}