/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   SeekG.cpp
 * Author: Eagleye
 * 
 * Created on September 7, 2018, 5:04 PM
 */

#include "SeekG.h"
#include <iostream>     // std::cout
#include <fstream>      // std::ifstream

using namespace std;

SeekG::SeekG() {
}

void SeekG::bufferRead(const char* fileName) {
    // read a file into memory

    ifstream is(fileName, ifstream::binary); // same as ifstream is;
                                             //         is.open(fileName,ifstream::binary); 
    
    //ifstream is;
    //is.open(fileName,ifstream::binary);
   
    if (is) {
        // get length of file:
        is.seekg(0, is.end);
        int length = is.tellg();
        is.seekg(0, is.beg);

        // allocate memory:
        char * buffer = new char [length];

        // read data as a block:
        is.read(buffer, length);

        is.close();

        // print content:
        std::cout.write(buffer, length);

        delete[] buffer;
    }

}

