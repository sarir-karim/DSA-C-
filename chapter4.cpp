// Patterns in cpp

/*
Print the square patterns from 1 to n in 4 lines */

#include <iostream>
using namespace std;

int main()
{

    // int n = 4;
    // for (int i = 1; i <= n; i++)
    // {
    //     int m = 4;
    //     for (int j = 1; j <= m; j++)
    //     {
    //         cout<< j;
    //     }
    //     cout <<endl;
    // }

    // print star patterns in square

    // int n = 4;
    // for(int i=0; i <=n; i++){
    //     int m = 4;
    //     for(int j=0; j<=m; j++ ){
    //         cout<< "*";
    //     }
    //     cout<<endl;
    // }

    // print square pattern using Characters

    // int n = 5;
    // for (int i = 0; i < n; i++)
    // {
    //     char ch = 'A';
    //     for (int j = 0; j < n; j++)
    //     {
    //         cout << ch;
    //         ch = ch + 1;
    //     }
    //     cout << endl;
    // }

    // print numbers in a square pattern
    /**
     * 123
     * 456
     * 789
     */

    // int n = 3;
    // int num = 1; // if we declare a varible outside of the outer loop then it prints number in a non breaking squence

    // for(int i= 0; i<n; i++){
    //     for(int j=0; j<n; j++){
    //         cout << num;
    //         num++;
    //     }
    //     cout << endl;
    // }

    // int n = 3;
    // char ch= 'A';

    // for(int i=0; i <n; i++){
    //     for(int j=0; j<n; j++){
    //         cout << ch;
    //         ch = ch+1;
    //     }
    //     cout << endl;
    // }

    // printing starts in triangle from
    /*
     *
     **
     ***
     ****
     */

    // int n = 4;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < i + 1; j++)
    //     {
    //         cout << " * -";
    //     }
    //     cout << endl;
    // }

    // now for numbers
    /*
    1
    22
    333
    4444
    */

    // int n = 4;
    // for(int i =0; i<n; i++){
    //     for(int j= 0; j<i+1; j++){
    //         cout << i+1;
    //     }
    //     cout << endl;
    // }

    // now for characters
    /**
     a
     bb
     ccc
     dddd

     */

    // int n = 6;

    // char ch = 'A';
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < i+1; j++)
    //     {
    //         cout << ch <<" ";
    //     }
    //      ch = ch+1;
    //     cout << endl;
    // }

    // print numbers pattern like
    /*
    1
    12
    123
    1234
    */

    //    int n = 4;

    //    for(int i = 0; i <n; i++){
    //     for(int j = 1; j<i+1; j++){
    //         cout << j;
    //     }
    //     cout << endl;
    //    }

    // reversing the loop input

    // int n = 3;
    // for(int i = 0; i< n; i++){
    //     for(int j = i+1; j>0; j--){
    //         cout << j;
    //     }
    //     cout<< endl;
    // }

    // Floy's Triangle Pattern;

    // int n = 4;
    // int num = 0;

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = i+1; j >0 ; j--)
    //     {
    //         cout << num +1 << " ";
    //         num++;
    //     }
    //     cout << endl;
    // }

    // int n = 4;

    // for(int i = 0; i < n; i ++){
    //     for(int j = 0; j < n; j++){
    //         cout << "*";
    //     }
    //     cout << endl;
    // }

    // int n  = 4;
    // for(int i = 0; i < n; i ++){
    //     for(int j = 0; j< i+1; j++){
    //         cout << "*";
    //     }
    //     cout <<endl;
    // }

    // int n = 4;
    // int num =1;
    // for(int i = 0; i < n; i++){
    //     for(int j = 0; j<i+1; j++){
    //         cout << num;
    //     num++;
    //     }
    //     cout << endl;
    // }

    // int n = 4;
    // char ch = 'a';
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < i + 1; j++)
    //     {
    //         cout << ch;
    //     }
    //     ch++;
    //     cout << endl;
    // }

    // int n = 4;
    // char ch = 'a';
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < i + 1; j++)
    //     {
    //         cout << ch;
    //     ch++;
    //     }
    //     cout << endl;
    // }

    // Floyd's Triangle pattern

    // int n = 4;
    // int num= 1;
    // for(int i = 0; i<n; i++){
    //     for(int j = 0; j<i+1; j++){
    //         cout << num;
    //         num++;
    //     }
    //     cout << endl;
    // }

    // reverse loop

    // int n= 4;

    // for(int i = n; i>0; i--){
    //     cout << i << endl;
    // }

    // int n = 4;

    // for(int i = 0; i <n; i++){
    //     for(int j = i+1; j>0; j--){
    //         cout << j;
    //     }
    //     cout << endl;
    // }

    // int n = 4;

    // for (int i = 0; i < n; i++)
    // {
    //     // spaces
    //     for (int j = 0; j < i; j++)
    //     {
    //         cout << " ";
    //     }
    //     // numbers
    //     for (int j = 0; j < n - i; j++)
    //     {
    //         cout << (i + 1);
    //     }
    //     cout << endl;
    // }

    // int  n = 4;
    // char ch = 'A';

    // for(int i = 0; i<n; i++){
    //     for(int j = 0; j <i; j++){
    //         cout << " ";
    //     }

    //     for(int j = 0; j < n-i; j++){
    //         cout << ch;
    //     }
    //     ch = ch+1;
    //     cout<< endl;
    // }

    // int n = 4;

    // for (int i = 0; i < n; i++)
    // {
    //     // spaces;

    //     for (int j = 0; j <n-i-1; j++)
    //     {
    //         cout << " ";
    //     }
    //     for (int j = 1; j <=i + 1; j++)
    //     {
    //         cout << j;
    //     };
    //     for (int k = i; k >0; k--)
    //     {
    //         cout << k;
    //     }
    //     cout << endl;
    // }

    // pyramit pattern for letters

    // int n = 5;

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n - i - 1; j++)
    //     {
    //         cout << " ";
    //     }
    //     char ch = 'a';
    //     for (int j = 0; j < i + 1; j++)
    //     {
    //         cout << ch;
    //         ch = ch + 1;
    //     }

    //     char ch1 = 'a';
    //     for (int k = i; k > 0; k--)
    //     {
    //         cout << ch1;
    //     }
    //         ch1 = ch1 + 1;
    //     cout << endl;
    // }

    // hollow diamonad

    // int n = 4;

    // for(int i = 0; i<n; i++){
    //     //space
    //     for(int j=0; j<n-i-1; j++){
    //         cout << " ";
    //     }
    //     cout << "*";

    //     if(i !=0){
    //         for(int j =0; j<2*i-1; j++){
    //             cout << " ";
    //         }
    //     cout << "*";
    //     }
    //     cout<<endl;
    // }

    // for(int i = 0; i<n-1; i++){
    // space
    //     for(int j = 0; j<i+1; j++){
    //         cout << " ";
    //     }
    //     cout << "*";

    //     if(i != n-2){
    //             for(int j=0; j<2*(n-i)-5; j++){
    //                 cout << " ";
    //             }

    //         cout << "*";
    //     }
    //     cout <<endl;
    // }

    int n = 4;
    int i, j;

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < i + 1; j++)
        {
            cout << "*";
        }

        // space

        for (j = 1; j < 2 * (n - i) - 1; j++)
        {
            cout << " ";
        }

        for (j = 0; j < i + 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    for (i = 0; i < n; i++)
    {
        for (j = 1; j < n - i + 1; j++)
        {
            cout << "*";
        }

        for (j = 1; j < 2 * i + 1; j++)
        {
            cout << " ";
        }
        for (j = 1; j < n - i + 1; j++)
        {
            cout << "*";
        }

        cout << endl;
    }

    

    return 0;
}
