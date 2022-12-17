/*Write a C++ program that creates an output file, writes information to it, closes the file and open it again as an 
input file and read the information from the file. */

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class telephone{
    long long int number;
    string name;

    public:
    void get_data(){
        cout<<"enter name: ";
        cin>>name;
        cout<<"enter number: ";
        cin>>number;
    }
};

int main (){
    string name;
    long long int number;
 telephone t[2];
 fstream fs;
 fs.open("info.txt");
 for(int i = 0; i<2; i++){
    t[i].get_data();
    fs.write((char*)&t[i],sizeof t[i]);
 }
 fs.close();
 fs.open("info.txt",ios::in);
 while (!fs.eof())
 {
     fs>>name;
     fs>>number;
     cout<<name;
     cout<<number;
 }
 
    

    return 0;
}


////cant get this code to work will ssee it tomorrow