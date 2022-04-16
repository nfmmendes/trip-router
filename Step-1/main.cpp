#include<iostream>
#include<fstream>
#include<cstdio>
#include<vector>

#include "input.h"
#include "solver.h"

int main(){ 

    std::ifstream input_list_file("input_list.txt");
    std::string line;

    if(input_list_file.is_open()){
        while(getline(input_list_file, line)){
            std::ifstream input_file(line);
            std::vector<std::string> unprocessed_input; 

            if(input_file.is_open()){
                while(getline(input_file, line)){
                    unprocessed_input.push_back(line);
                }

                Input* input = new Input(unprocessed_input);
                Solver* solver = new Solver(input);
            }
        }
    }
}