/*
Experiment Number 2 : Develop a program in C++ to create a database of
student’s information system
containing the following information: Name, Roll number, Class, Division,
Date of Birth, Blood group,
Contactaddress, Telephone number, Driving license no. and other. Construct
the database with
suitable member functions. Make use of constructor, default constructor,
copy constructor,
destructor, static member functions, friend class, this pointer, inline
code and dynamic
memory allocation operators-new and delete as well as exception handling.
*/



#include<iostream>
#include<string.h>
using namespace std;

class StudData;

class Student{
    string name;
    int roll_no;
    string cls;
    char* division;
    string dob;
    char* bloodgroup;
    static int count;

    public:

    Student()          // Default Constructor
    {
        name="";
        roll_no=0;
        cls="";
        division=new char;
        dob="dd/mm/yyyy";
        bloodgroup=new char[4];
    }

    ~Student()
    {
        delete division;
        delete[] bloodgroup;
    }

    static int getCount()
    {
        return count;
    }

    void getData(StudData*);
    void dispData(StudData*);
};

class StudData{
    string caddress;
    long int* telno;
    long int* dlno;
    //friend class Student;

    public:

    StudData()
    {
        caddress="";
        telno=new long;
        dlno=new long;
    }
    
    ~StudData()
    {
        delete telno;
        delete dlno;
    }

    void getStudData()
    {
       // cout<<"Enter Contact Address : ";
        //cin.get();
        //getline(cin,caddress);
       // cin>>caddress;
        cout<<"Enter Telephone Number : ";
        cin>>*telno;
        cout<<"Enter Driving License Number : ";
        cin>>*dlno;
    }

    void dispStudData()
    {
        cout<<"Contact Address : "<<caddress<<endl;
        cout<<"Telephone Number : "<<*telno<<endl;
        cout<<"Driving License Number : "<<*dlno<<endl;
    }
};

inline void Student::getData(StudData* st)
{
    cout<<"Enter Student Name : ";
    getline(cin,name);
    cout<<"Enter Roll Number : ";
    cin>>roll_no;
    cout<<"Enter Class : ";
    cin.get();
    getline(cin,cls);
    cout<<"Enter Division : ";
    cin>>division;
    cout<<"Enter Date of Birth : ";
    cin.get();
    getline(cin,dob);
    cout<<"Enter Blood Group : ";
    cin>>bloodgroup;
    st->getStudData();
    count++;
}

inline void Student::dispData(StudData* st1)
{
    cout<<"Student Name : "<<name<<endl;
    cout<<"Roll Number : "<<roll_no<<endl;
    cout<<"Class : "<<cls<<endl;
    cout<<"Division : "<<division<<endl;
    cout<<"Date of Birth : "<<dob<<endl;
    cout<<"Blood Group : "<<bloodgroup<<endl;
    st1->dispStudData();
}

int Student::count;

int main()
{
    
Student s1;
StudData* s11;
s11 = new StudData;
s1.getData(s11);
s1.dispData(s11);

    return 0;
}