/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Read_File_With_Exception_Handling.cpp
 * Author: Eagleye
 * 
 * Created on September 7, 2018, 12:56 AM
 */

#include "Read_File_With_Exception_Handling_Static_Function.h"
#include <iostream>
#include <fstream>

using namespace std;

Read_File_With_Exception_Handling_Static_Function::Read_File_With_Exception_Handling_Static_Function() {
}

void Read_File_With_Exception_Handling_Static_Function::openFileAndRead(const char* fileName) {
        ifstream inFile;
        try {
            inFile.open(fileName);

            if (inFile.fail()) {
                throw "No Such File";
            }

            int x, y;

            inFile >> x >> y;

            cout << "Value of x1 : " << x << endl;
            cout << "Value of y1 : " << y << endl;

        } catch (const char* ex) {
            cerr << ex << endl;
        }
}
