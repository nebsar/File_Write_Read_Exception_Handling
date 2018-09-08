/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Read_File_Line_by_Line.cpp
 * Author: Eagleye
 * 
 * Created on September 7, 2018, 5:42 PM
 */

#include "Read_File_Line_by_Line_With_Exception_Handling.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

Read_File_Line_by_Line_With_Exception_Handling::Read_File_Line_by_Line_With_Exception_Handling() {
}

void Read_File_Line_by_Line_With_Exception_Handling::readFileLineByLine(const char* fileName) {

    ifstream inputFile(fileName);

    string sLine;
    try {
        if (inputFile) {

            while (!inputFile.eof()) {
                getline(inputFile, sLine);
                cout << sLine << endl;
            }

        } else {
            std::string message("There is no file named");
            std::string errString(message + fileName);
            throw errString;
        }
    } catch (string& r) {
        cerr << r << endl;
    }
}


