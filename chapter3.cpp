/*
Conditional Statments and loops.
*/

#include <iostream>
using namespace std;

int main()
{

    //  int num = -2;
    //  if(num >=0){
    //     cout <<num << "is Positive";
    //  }else{
    //     cout << num <<" is Negitive";
    //  }

    // int age;
    // cout << "Enter your age";
    // cin>> age;

    // if(age >=18){
    //     cout << "You can vote";
    // }else{
    //     cout << "You can't vote";
    // }

    // int n;
    // cout<< "Enter a number : ";
    // cin >> n;

    // if(n %2 == 0){
    //     cout << n <<" Is a even number \n";
    // }else{
    //     cout << n << " is a ood number \n";
    // }

    // int marks = 80;

    // if(marks >=80 && marks <90){
    //     cout << "Your grade is A";
    // }else if (marks >=60 && marks <80){
    //     cout << "your garde is B";
    // } else{
    //     cout<< "Your grade is C";
    // }

    // Practice Question
    // find if the charter is in lowercase or uppercase

    // char ch;
    // cout << "Enter a character \n";
    // cin >> ch;

    // if (ch >= 97 && ch <= 123) //ASCII values for small characters starts from 97 to 123
    // {
    //     // cout << "lowercase \n";
    // }
    // else if (ch >= 65 && ch <= 90) // ASCII valeus for capital charters starts from 65 to 90
    // {
    //     // cout << "uppercase \n";
    // }
    // else
    // {
    //     // cout << "Please enter valid character.\n";
    // }


// Ternary statment
// ternary operator is the shorter version of if else statment 

// int num = 59;
// cout << (num >=0? "Postive": "Negitive");


// while loop
// print numbers from 1 to 5;

// int count = 1;
// int  n;
// cout<< "Please enter a number\n";
// cin>> n;
// while(count <=n){
//     cout << "Number is " << count <<'\n';
//     count++;
// }
    // break;



// for loop

// int n  = 5;
// int o = 10;
// for( int i =0, j = 1; i< n && i >=0; i++, j++){
//     cout << i*j ;
//     cout <<  j*i <<endl;
// }


// sum of numbers from 1 to n;

// int n = 5;
// int sum = 0;

// for (int i = 0; i <= n; i ++){
//     sum+=i;
// }

// cout << " sum = " << sum;


int n = 5;
int sum = 0;
int i  = 0;

while (i <= n){
    sum +=i;
    i++;
}
cout << "sum = " << sum;
















    return 0;
}
