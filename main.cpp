#include "Sort.h"
#include "BubbleSort.h"
#include "QuickSort.h"
#include "RecursiveBinarySearch.h"

#include <iostream>
#include <string>

void print_list(std::vector<int> list){
    
    for(int i = 0; i<list.size(); i++){
        std::cout << " " << list[i];
    }

}

int main(void){

    BubbleSort bs;
    QuickSort qs;
    RecursiveBinarySearch rbs;

    std::string input;

    std::getline(std::cin, input);

    std::vector<int> list;

    for(int i = 0; i<input.size(); i++){

        if(input[i] != ' '){

            int end = input.size()-1;
            for(int j = i; j<input.size(); j++){

                if(input[j] == ' '){
                    end = j-1;
                    break;
                }

            }

            std::string n = input.substr(i, end-i+1);
            list.push_back(std::stoi(n));

            i = end + 1;
        }
    }


    list = qs.sort(list);

    bool found = rbs.search(list, 1);

    if(found){
        std::cout << "true";
    }
    else{
        std::cout << "false";
    }

    print_list(list);

    return 0;
}