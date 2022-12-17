/*Write a program in C++ to use map associative container. The keys will be the names of states and the 
values will be the populations of the states. When the program runs, the user is prompted to type the name 
of a state. The program then looks in the map, using the state name as an index and returns the population 
of the state.*/

#include <iostream>
#include <map>
#include <string>
using namespace std;

int main (){

   map<string,int>states_and_popu{{"maharashtra",1},{"punjab",2},{"rajasthan",3}};
   states_and_popu.insert(pair<string,int>("karnataka",4));
   states_and_popu.insert(pair<string,int>("west_bengal",5));
   map<string,int>::iterator iter;
   
   string state_name;
   bool found = 0;
   cout<<"-----------------------"<<endl;
   cout<<"enter state name(key): ";
   cin>>state_name;

   for(iter = states_and_popu.begin(); iter != states_and_popu.end(); iter++){
           if(iter ->first == state_name){
            found = 1;
            break;
           }
          
   }
   if(found == 1){
            cout<<"found";
            cout<<state_name<<":  "<<iter ->second<<endl;
   }
   else{
    cout<<"not found"<<endl;
   }



    return 0;
}