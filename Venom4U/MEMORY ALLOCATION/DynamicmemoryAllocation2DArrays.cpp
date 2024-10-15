// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;

//     //creation
//     int **arr = new int*[n];
//     for(int i=0 ;i < n;++i){
//         arr[i] = new int[n];
//     }

//     //input
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             cin>>arr[i][j];
//         }
//     }

//     //output
//         for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             cout<<arr[i][j]<<" ";
//         }cout<<endl;
//     }

// }

#include <iostream>
using namespace std;
int main()
{
    int row;
    cin >> row;

    int col;
    cin >> col;

    // creation
    int **arr = new int *[row];
    for (int i = 0; i < row; ++i)
    {
        arr[i] = new int[col];
    }

    // input
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }

    // output
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // releasing memory
    for (int i = 0; i < row; ++i)
    {
        delete[] arr[i];
    }
    delete[] arr;
}

// Homework --> Jaggered array dynamically