/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Write_And_Read_File.cpp
 * Author: Eagleye
 * 
 * Created on September 7, 2018, 6:08 PM
 */

#include "Write_And_Read_File.h"
#include <iostream>
#include <fstream>

using namespace std;

Write_And_Read_File::Write_And_Read_File() {
}

void Write_And_Read_File::writeReadFile(string fileName) {
    ofstream outPutFile(fileName);

    char data[100];

    string data_s;

    cout << "Writing to the file" << endl;
    cout << "Enter your name: ";
    getline(cin, data_s); //Bu da kullanılabiliyor.
    cout << "Enter your lastname: ";
    cin.getline(data, 100); //Bu da kullanılabiliyor.

    // outPutFile<<"deneme "<<1<<" "<<2<<" "<<3<<endl;

    // write inputted data into the file.
    outPutFile << data_s << endl;
    outPutFile << data << endl;

    cout << "Enter your age: ";
    cin >> data_s;
    cout << "Enter your weight: ";
    cin>>data;
    cin.ignore();

    // again write inputted data into the file.
    outPutFile << data_s << endl;
    outPutFile << data << endl;

    outPutFile.close();
    
     // open a file in read mode.
    ifstream infile;
    infile.open(fileName);

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


}


