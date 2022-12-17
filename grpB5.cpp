/*Write a function template selectionSort. Write a program that inputs, sorts and outputs an int array and a float array.*/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

//function selection sort that can take any array as input(int or float)
template <class T>


void selection_sort(T array[], int n){
    for(int i = 0; i<n-1; i++){
        //outer loop
        int min_index = i;
         for(int j = i+1; j<n; j++){
            //inner loop
            if(array[min_index]>array[j]){
                min_index = j;
            }
         }
         swap(array[min_index], array[i]);
    }

   for(int k = 0; k<n; k++){
    cout<<array[k]<<" ";
   }
}

int main (){
 int n;
cout<<"enter size of array: ";
cin>>n;
int choice;
int int_array[n];
float float_array[n];
cout<<"1. int "<<endl;
cout<<"2. float"<<endl;
cin>>choice;
switch (choice)
{
case 1:
    cout<<"enter elements of integer array: ";
    for(int i = 0; i<n; i++){
        cin>>int_array[i];
    }
    cout<<"sorted array:"<<endl;
    selection_sort(int_array, n);
    break;

case 2:
    cout<<"enter elements of float array: ";
    for(int i = 0; i<n; i++){
        cin>>float_array[i];
    }
    cout<<"sorted array:"<<endl;
    selection_sort(float_array, n);
    break;

default:
    break;
}


    return 0;
}