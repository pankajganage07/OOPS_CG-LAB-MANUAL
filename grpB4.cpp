/* 

Write a C++ program that creates an output file, writes information to it, closes the file, open it
again as an input file and read the information from the file

*/


//program run but it still have some issues to be fixed

#include <iostream>
#include <fstream>
using namespace std;


class student{
    public: 
        int roll;
        char name[4];

        void get_data(){
            cout<<"enter roll no of student: "<<endl;
            cin>>roll;
            cout<<"enter the name of student: "<<endl;
            cin>>name;
        }
};

int main () {

    fstream fs;
    //dont know why but unless u specify the mode file will not be created
    fs.open("student.txt", ios::out);
    student s1;
    s1.get_data();
    fs.write((char*)&s1,sizeof(s1));
    fs.close();

    //reading data from file
    fs.open("student.txt", ios::in);
    // fs.read((char*)&s1, sizeof(s1));
    string str;
    while(!fs.eof()){
        fs>>str;
        cout<<str;
    }

    

    return 0;
}