// Function is used to repeat a piece of code

#include <iostream>
using namespace std;

// function defination
void printHello()
{
    cout << "Hello!";
}

// function with parameter

int sum(int a, int b)
{
    int s = a + b;
    return s;
}

int min(int a, int b)
{
    if (a < b)
    {
        return a;
    }
    else
        return b;
}

// Sum of a number from one to n;

int sum1ToN(int n)
{
    int sum = 0;

    for (int i = 0; i <= n; i++)
    {
        sum += 1;
    }
    return sum;
}

int factorial(int n)
{
    int fact = 1;

    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }

    return fact;
}

// Function in memory

// In computer memory we have two types of memory  one is stack and second is heap
// all the static type data is stoed in the stack and dynamic data stores in heap
// our function are also stored in the stack memory
/*
How data is stored in the memory?
when we create function and call it the cstack memory creates a space for it called call stack fram and every information about that function aslo stores in that memory stack;
if we are working on a sum function the sum function will be on the top of the stack memory frame;
if we write code after the return type then it wouldn't execute because return type is the last final statment int the fucntion;
*/

/*
Pass by value

copy of argument is passed to function

when we create a sum function with parameter a and b and then create two variables inside the main fucntion a  = 5 b = 5; then pass those values as the argument of the function then the values returned from the sum functions are the passed as copy;

 */

// calculating sumofDigits

int sumOfDigits(int num)
{
    int digitSum = 0;

    while (num > 0)
    {
        int lastDigit = num % 10;
        num /= 10;
        digitSum += lastDigit;
    }

    return digitSum;
}

// write a function to cehck if a number is prim number or not

bool primeFunction(int n)
{

    if (n <= 1)
    {
        return false;
    }
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}


//write a function to print all prime numbers from 2 to N;

int main()
{

    int n = 100;

    for(int i  = 1; i<= n; i++){
        if(primeFunction(i)){
            cout << i << " ";
        }
    }
    // if (primeFunction(n))
    // {
    //     cout << "pime number";
    // }
    // else
    // {
    //     cout << "Not prme";
    // }
    // return 0;
}