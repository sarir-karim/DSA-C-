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

    // int n = 5;
    // int sum = 0;
    // int i  = 0;

    // while (i <= n){
    //     sum +=i;
    //     i++;
    // }
    // cout << "sum = " << sum;

    // for loop to print number from 1 to 5;

    // int n = 50;
    // for (int i = 0; i<=n; i++){
    //     cout << "Number is " << i <<endl;
    // };

    // sum of number till n;

    // int n = 20;
    // int sum = 0;

    // for(int i =0; i <=n; i++){
    //     sum+=i;
    //     if(i==2){
    //         break;
    //     }
    // }

    // cout<< "sum =" << sum;

    // sum of odd numbers from 1 to n;

    // int n = 20;
    // int sum = 0;

    // for (int i = 0; i <=n; i++){
    //     if(i%n != 0){
    //         sum+=i;
    //     }
    // }

    // cout << "Sum = " << sum;

    // int n = 5;
    // int oddSum = 0;
    // int i = 0;

    // while (i <=n){
    //     if(i%2 !=0){
    //         oddSum+=i;
    //     }
    //     i++;
    // }
    // cout << "Odd sum ="<< oddSum;

    // int num;
    // cout << "Please enter number of your choice";
    // cin>>num;

    // int sum = 0;

    // for (int i = 0; i < num; i++)
    // {
    //     /* code */
    //     if(i%2 == 0){
    //         cout <<"Even numbers are "<< i<<endl;
    //         sum+=i;
    //     }
    // }

    // cout << "Sum of Even Numbers is =" << sum;

    // do while loop

    // print numbers between 1 to n;

    // int i = 0;
    // int n = 10;

    // do {
    //     cout << "Num = " << i <<endl;
    //     i++;
    // }while(i <=n);

    // check if a number is prime or not

    // int n = 4;
    // bool isPrime = true;

    // for(int i = 2; i*i < n; i++){
    //     if(n %i == 0){
    //         isPrime = false;
    //         break;
    //     }
    // }

    // if(isPrime == true){
    //     cout << n<<" is  prime"<<endl;
    // }else{
    //     cout << n<<" is not prime"<<endl;
    // }

    // int n = 4;
    // bool isPrime = true;
    // int i = 2;

    // while(i <n-1){
    //     if(n%i == 0){
    //         isPrime == false;
    //         break;
    //     }
    // i++;
    // }

    // if(isPrime == true){
    //     cout << "is prime number \n";
    // }else{
    //     cout << "is not prime number\n";
    // }

    // nested loops
//     int n = 4;
//     for (int i = 1; i <= n; i++)
//     {
//         int m = 10;
//         for (int j = 1; j <= m; j++)
//         {
//             cout << "*";
//         }
//         cout<<endl;
//     }

//     return 0;
// }


//practice qusetions
/**
 * Sum of all numbers from 1 to N which are divisible by 3;
 * print factorial of N
 */


//sum from 1 to n;

// int n = 10;
// for(int i = 1; i<=n; i++){
//     if(i % 3 == 0){
//         cout << i << endl;
//     }
// }




// int n = 24;
// int i  = 1;

// while(i <=n){
//     if(i%3 == 0){
//         cout << i << endl;
//     }
//     i++;
// }



//factorial of number n

int n = 5;
int factorial = 1;
for (int i =0; i<=n; i++){
     i*i;
     cout <<i<<endl;
}


return 0;
}
