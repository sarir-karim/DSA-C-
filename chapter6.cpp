// Binary number system;

//In matimatics we have learned about the Decimal number system whcih starts from 0 and ends at 9; aslo called bas10 number system becuase it has 10 digits;
/*
Now the computer only understads the binary number system which is 0 and 1;
binary is called base2 number system
octal is called base8 number system
hexadecimal is called base16 number system

*/

#include <iostream>
using namespace std;

//decimal to binary conversion function

int decToBinary(int decNum){
    int ans = 0, pow = 1;
    while(decNum >0){
        int rem = decNum %2;
        decNum /=2;
         
        ans+=(rem * pow);
        pow*=10;
    }

    return ans;
}


int binaryToDec(int binNum){
    int ans = 0, pow = 1;
    while(binNum >0){
        int rem = binNum %10;
        ans += rem * pow;
        binNum /= 10;
        pow *= 2;
    }

    return ans ;
}

int main(){


// for(int i = 2; i<=10; i++){
// cout << decToBinary(i) <<endl;

// }


cout << binaryToDec(1010) <<endl;




return 0;
}