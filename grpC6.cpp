/*Write C++ program using STL for sorting and searching user defined records 
such as Item records (Item code, name, cost, quantity etc) using vector 
container.
*/

#include <iostream>
#include <string>
#include <vector>
using namespace std;

class item{
   
    public:
    int code;
    string name;
    float cost;

   void get_data(){
    cout<<"enter code: ";
    cin>>code;
    cout<<"enter name: ";
    cin>>name;
    cout<<"enter cost: ";
    cin>>cost;
   }
};

vector<item> v1;
vector<item>::iterator iter;
void insert(){
  item i1;
  i1.get_data();
  v1.push_back(i1);
}
void print_vec(){

   iter = v1.begin();
   while(iter != v1.end()){
    iter->code;
    iter->name;
    iter->cost;
    iter++;
   }   

}
void print_item(item &i1){
  cout<<"code: "<<i1.code<<endl;
  cout<<"name: "<<i1.name<<endl;
  cout<<"cost: "<<i1.cost<<endl;
}
void search(){

}

int main (){

  

    return 0;
}