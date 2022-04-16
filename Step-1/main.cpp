#include<iostream>
#include<fstream>
#include<cstdio>
#include<vector>

#include "input.h"

int main(){ 

    std::ifstream input_file("input.csv");
    std::string line;
    std::vector<std::string> unprocessed_input; 


    while(getline(input_file, line)){
        unprocessed_input.push_back(line);
    }

    Input* input = new Input();
}