/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Word_by_Word_File_Read.cpp
 * Author: Eagleye
 * 
 * Created on September 7, 2018, 4:12 PM
 */

#include "Word_by_Word_File_Read.h"
#include <fstream>
#include <iostream>
#include <string>

using namespace std;

Word_by_Word_File_Read::Word_by_Word_File_Read() {
}

void Word_by_Word_File_Read::readFile(const char* fileName) {
    ifstream inFile;
    try {
        inFile.open(fileName);

        if (inFile.fail()) {
            throw "No Such File";
        }

        int id = 0;
        string name;
        double money = 0.;

        while (inFile >> id >> name >> money) {
            cout << id << ", " << name << ", " << money << endl;
        }

        inFile.clear(); // Bu iki satırlık kod dosyanın başına geri dönmek için kullanılyor
        inFile.seekg(0, inFile.beg);


        string line;

        while (!inFile.eof()) {
            getline(inFile, line);
            cout << line << endl;
        }

        inFile.close();

    } catch (const char* ex) {
        cerr << ex << endl;
    }

}

