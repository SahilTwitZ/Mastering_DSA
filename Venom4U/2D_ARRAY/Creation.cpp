// CREATION OF 2-D ARRAY
#include <iostream>
using namespace std;
int main()
{
    // int arr[3][4];//[row][col]

    // //int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};  // //row-wise input
    int arr[3][4] = {{1, 11, 111, 1111}, {2, 22, 222, 2222}, {3, 33, 333, 3333}};

    // //taking input-->row wise inputF
    // for(int i=0;i<3;i++){
    //     for(int j=0;j<4;j++){
    //         cin>>arr[i][j];
    //     }
    // }

    // //taking input-->col wise input
    // for(int i=0;i<4;i++){
    //     for(int j=0;j<3;j++){
    //         cin>>arr[j][i];
    //     }
    // }

    // output print
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}