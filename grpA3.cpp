/* Imagine a publishing company which does marketing for book and audio 
cassette versions. Create a class publication that stores the title (a string) and 
price (type float) of publications. From this class derive two classes: book 
which adds a page count (type int) and tape which adds a playing time in 
minutes (type float).
Write a program that instantiates the book and tape class, allows user to enter 
data and displays the data members. If an exception is caught, replace all the 
data member values with zero values.*/

#include <iostream>
#include <string>
using namespace std;

class publication{   //base class
  //private by default
  string title;
  float price;

  public: 
    void get_data_publication(){
        cout<<"enter title:(enter as as a single text with underscore) ";
        cin>>title;
        cout<<endl;
        cout<<"enter price: ";
        cin>>price;
    };

    void display_publication(){
        cout<<"-----------------------------------------"<<endl;
        cout<<"title: "<<title<<endl;
        cout<<"price: "<<price<<endl;
    }
};

class book: public publication{
    //derived class book
    //public by default
    int page_count;

    public:
    void get_data_book(){
        get_data_publication();
        cout<<"enter page count for book: ";
        cin>>page_count;
    }

    void display_book(){
        display_publication();
        cout<<"page count: "<<page_count<<endl;
    }
};


class tape: public publication{
    //derived class tape
    //private by default
    float play_time;

    public: 
      void get_data_tape(){
        get_data_publication();
        cout<<"enter play time: ";
        cin>>play_time;
      }

      void display_tape(){
        display_publication();
        cout<<"play time: ";
        cout<<play_time<<endl;
      }
};

int main () {
    book b[10];  //array of 10 books
    tape t[10];  //array of 10 tapes
    int choice=0,book_count = 0, tape_count = 0;

    //do while loop
    do{
            cout<<"menu"<<endl;
            cout<<"\n 1. Add book ";
            cout<<"\n 2. Add tape: ";
            cout<<"\n 3. Display book ";
            cout<<"\n 4. Display tape";
            cout<<"\n 5. Exit:"<<endl;
            cout<<"\n Enter Choice : ";
            cin>>choice;



            //switch case 
            switch (choice)
            {
            case 1:
                b[book_count].get_data_book();
                book_count++;
                break;
            case 2: 
               t[tape_count].get_data_tape();
               tape_count++;
               break;
            case 3:
               for(int i = 0; i<book_count; i++){
                b[i].display_book();
               };
               break;
            case 4:
               for(int i = 0; i<book_count; i++){
                t[i].display_tape();
               };
               break;
            case 5:
                break;

            default:
                cout<<"invalid option"<<endl;
                break;
            };
    }
    while(choice != 5);
    
   return 0;
}
