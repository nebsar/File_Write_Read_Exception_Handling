/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Eagleye
 *
 * Created on September 7, 2018, 12:09 AM
 */

#include <fstream>
#include <iostream>
#include <string>
#include <stdlib.h>

#include "Read_File_With_Exception_Handling_Static_Function.h"
#include "Word_by_Word_File_Read.h"
#include "SeekG.h"
#include "Read_File_Line_by_Line_With_Exception_Handling.h"
#include "Write_And_Read_File.h"

using namespace std;

int main() {

    char data[100];

    string data_s;

    // open a file in write mode.
    ofstream outfile;
    outfile.open("afile.dat");

    cout << "Writing to the file" << endl;
    cout << "Enter your name: ";
    getline(cin, data_s); //Bu da kullanılabiliyor.
    cin.getline(data, 100); //Bu da kullanılabiliyor.

    // write inputted data into the file.
    outfile << data_s << endl;
    outfile << data << endl;

    cout << "Enter your age: ";
    cin >> data_s;
    cin>>data;
    cin.ignore();

    // again write inputted data into the file.
    outfile << data_s << endl;
    outfile << data << endl;

    // close the opened file.
    outfile.close();

    // open a file in read mode.
    ifstream infile;
    infile.open("afile.dat");

    cout << "Reading from the file" << endl;
    infile >> data_s;
    infile>>data;

    // write the data at the screen.
    cout << data_s << endl;
    cout << data << endl;

    // again read the data from the file and display it.
    infile >> data_s;
    infile>>data;
    cout << data_s << endl;
    cout << data << endl;

    // close the opened file.
    infile.close();

    Read_File_With_Exception_Handling_Static_Function::openFileAndRead("numbers.txt");

    Read_File_With_Exception_Handling_Static_Function::openFileAndRead("deneme.txt");

    Word_by_Word_File_Read::readFile("newfile.txt");

    SeekG::bufferRead("newfile.txt");

    Read_File_Line_by_Line_With_Exception_Handling::readFileLineByLine("newfile.txt");

    Write_And_Read_File::writeReadFile("olurmu.txt");

    return 0;
}