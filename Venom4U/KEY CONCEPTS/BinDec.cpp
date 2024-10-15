// //DEC TO BIN
// #include<iostream>
// #include<math.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     float ans=0;
//     float i=0;
//     while(n!=0){
//         int bit = n&1;
//         ans=(bit*pow(10,i))+ans;
//         n=n>>1;
//         i=i+1;
//     }
//     cout<<ans<<endl;
// }



// //DEC TO BIN
// #include <iostream>
// using namespace std;

// int main() {
//     int decimal, binary = 0, base = 1;
//     cout << "Enter a decimal number: ";
//     cin >> decimal;
//     while (decimal > 0) {
//         int rem = decimal % 2;
//         binary += rem * base;
//         decimal /= 2;
//         base *= 10;
//     }
//     cout << "Binary equivalent is: " << binary << endl;
//     return 0;
// }


// Same Flow ==> ans = (ans*10)+digit
// Reverse Flow ==> ans = (digit*10^i)+ans


// //-ve DEC TO BIN
// #include <iostream>
// #include <bitset>

// int main() {
//     int decimal;
//     std::cout << "Enter a negative decimal number: ";
//     std::cin >> decimal;
    
//     // Check if the number is negative
//     if (decimal >= 0) {
//         std::cout << "Invalid input. Please enter a negative decimal number.\n";
//         return 0;
//     }
    
//     // Convert to binary using bitset
//     std::bitset<32> binary(decimal);
    
//     // Print the binary representation
//     std::cout << "Binary representation: " << binary << std::endl;
    
//     return 0;
// }



// //BIN TO DEC
// #include<iostream>
// #include<math.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int i=0 , ans=0;
//     while(n!=0){
//         int digit = n%10;
//         if(digit==1){
//             ans = ans+pow(2,i);
//         }
//         n=n/10;
//         i++;
//     }
//     cout<<ans<<endl;
// }
