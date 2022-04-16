#pragma once

#include<iostream>
#include<vector>

class Input { 

    public: 
        Input();
        explicit Input(const std::vector<std::string> & unprocessed_input); 
};