//ARRAY 
/*
! Data Structure: is a structure in our code which we used to store data.
& data has different forms data either be in linear form or in Hirecrial form
! Algorithms: performing efficint operation on data ins called algorithm example searching data sorting data etc.

Array is a data structure which we used to store data in a linear form. Array is stored contigous in memory.

Arry stores data of same type.
 */

#include <iostream>
using namespace std;

int main(){
//array with size defined.

// int marks[5] = {1,2,4,55,6};
// int size = 5;

// // the size of function is ued to find the size of any datatype
// // cout << sizeof(marks) <<endl; // 20
// // cout << sizeof (marks) / sizeof(int); // 5

// for(int i = 0; i < size; i++){
//     cout << marks[i] << " ";
// }


//arry is declard but not initialized any value we can assign value to the arry element by looping


int size = 5;
int marks = [size];

for(int i = 0; i < size; i++){
    cin>> marks[i];
}

for(int i  = 0; i < size; i++){
    cout << marks[i];
}


return 0;
}