/*
 Cpp is a casesenstitive language.
 cout is used to print the output of any cpp statment
 ; semicolon is used as statment termenator
 whenever we are going to do any operation in cpp we always do it inside the main function
 the main purpose of the main function is to tell the compilar that the main execution of the progrm will be from main function
 #include <iostream> is a preprocessor directive which is used in the starting of every program. from this compilar will know the logic behind the cin cout etc.
 using namespace std; is a file where the cout cin and other keywords logics are written.
*/

#include <iostream>
using namespace std;

int main()
{
    // cout<< "Sarir\n Karim\n";

    /**
     * How does code run?
     * we have a cpp file first we need to comiple the file using g++ along with the name of the file with it's extension
     * then it will compile and generate a .exe file which is basically a binary form of our code which we have written in cpp.
     * that .exe file is undertandable by computer.
     * to compile the cpp code we have to write g++ filename.cpp
     * to run the  code we have to write ./a.exe
     * to combine both step we write g++ filename.cpp && ./a.exe
     */

    /*
     _________________________Variables
     variables are containers that store data.
     we can represent single character with '' single quotes and word like name in double quotes ""
     varibles have identifiers like we can use A-Z,a-z,1-9,$_
    when we declare a varable we have to define it's type first.

    int datatype
    int datatype has 4bytes space; computer always stores and compute values in 0&1s
    so 1 is a bit when we combine 8 bits is equal to 1 byte
    8*4 = 32 this mean we have 32 bits of space to store a single integer
    we can use sizeof() function to check the size of a dataype
    */

    int age = 25;
    // cout << sizeof(age) << endl;

    /*
    char datatype
    char datatype takes 1byte space; 8bits = 1byte.
    so how the character are being stored in the memory? To store the character in the momory computer takes the ASCII value of the character and converts it into binary number and then stores it in the memory
    */

    char grade = 'A';
    // cout << grade << endl;

    /**
     * float datatpe
     * float datatype is used to store the floting point values like 2.23 etc...
     * float datatype takes 4bytes space in the memory
     */

    float PI = 3.14f;
    // cout << PI << endl;

    /**
     boolean dataype
     boolean dataype takes 4bytes space in the memory
     in boolean datatype we can store either true or false
    **/

    bool isSafe = false;
    // cout << isSafe << endl;

    /*
    double datatype
    double datatype takes 8 bytes space in the memory
    double datatype stores double values like 100.288
    */

    double price = 300.88;
    
    // cout << price << endl;

    /*
     Type Conversion && type casting
     In Type casting we can convert data from one type to another.
     Type conversion is impicit -> compiar manages to convert one type to another by it's own.
        when there's small converion like from 1 bye to 4 bytes etc. then compilar does it.
     Type casting is explicit-> we convert datatype large values into small  for example 4byes value into 1 bytes
    */

    // implicit example
    char a = 'a';
    int b = a;
    // cout << b << endl; //it prints 97 because the ASCII value of small a is 97

    double Sprice = 100.99;
    int p = (int)Sprice;

    // cout << p<<endl;



    /*
    cin: cin is used to take input from users
    cin and cout are the global objects in cpp

    */

   int userage;
//    cout<<"Enter your age: ";
//    cin>> userage;

//    cout<< "Your age is"<< userage << endl;


//    operators
/*
we have 4 types of operators 
1: arthematic
2: logical opearators
3: arthematic operators

*/ 

int one = 20;
int two = 30;

int sum = a+b;
// cout << "Sum =" << sum << endl;

//differece

int diff = a-b;
// cout << "Diff = " << diff <<endl;

// multply 

int multiply  = a *b;
// cout << "multiply = " << multiply <<endl;

//division

int division = a /b;
// cout << "Division = " << division <<endl;

//modulo

int modulo = a%b;
// cout << "Modulo = " << modulo << endl;

// in divison when we divide  an integer value from integer value then it gives us a integer value

// cout << (5/(double)2); // here we have typecast the value of 2 to be double to get the correct value;

// relational operators
/*
< less than
>greater than
 == equal to
 <= less then equal to
 >= greater then equal to
 != not equal to ;

 these operators returns value in true and false 

*/ 

// cout << (2 < 5) << endl;  //true -> 1
// cout << (2 > 5) <<endl; // false -> 0
// cout << (3 >= 3) <<endl; // true
// cout << (4==4) << endl; // true
// cout << (1 != 5) << endl; //true;


// logical operators
/*
1: AND -> &&
2: OR -> ||
3: NOT -> !

*/ 

// cout << !(2==2) << endl; // false ! operator reverts the final value if it's true then it returns flase if it's false then it returns true
// cout << ((2>3) || (5>2)) <<endl; // true || opearator returns two if one of the condition is true;
// cout << ((2==2) || (3==3)) <<endl; // true && opeartor return true if both of the conditions are ture;



// Questions to solve 
/*
sum of two numbers
pseudo code for this question is 
input a & b;
sum a + b;
print sum;

*/ 

// int num1;
// int num2;

// cout << "Enter num1 :";
// cin >> num1;

// cout << "Enter num2 :";
// cin >> num2;

// int numsum =  num1 + num2;
// cout << "Sum  = " <<numsum << endl; //45



// unary operators

int aa = 20;
int bb = aa++;

// cout << "b = " << bb << " a " << aa <<endl; 


int dd = 5;
int ee = ++dd;

cout << "dd " << dd << " ee " <<ee  <<endl;
 return 0;
}



