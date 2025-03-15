// //print even numbers form 1 to n using recursion
#include<iostream>
using namespace std;

// void printEven(int n){
//     if(n==2){
//         cout<<2<<endl;
//         return;
//     }
//     printEven(n-2);
//     cout<<n<<endl;
    
// }

// int main(){
//     int n;
//     cin>>n;

//     if(n%2==0){
//         printEven(n);
//     }
//     else{
//         printEven(n-1);
//     }
//     return 0;
// }

// //print all odd numbers from 1 to n

// void printOdd(int n){
//     if(n==1){
//         cout<<1<<endl;
//         return;
//     }
//     printOdd(n-2);
//     cout<<n<<endl;
// }

// int main(){
//     int n;
//     cin>>n;
//     if(n%2==0){
//         printOdd(n-1);
//     }else{
//         printOdd(n);
//     }
//     return 0;
// }


// //factorial of a number using recursion

// int factorial(int n){
//     if(n==0){
//         return 1;
//     }

//     int ans = n * factorial(n-1);
//     return ans;
// }

// int main(){
//     int n;
//     cin>>n;
//     if(n<0){
//         cout<<"Invalid input"<<endl;
//         return 0;
//     }
//     cout<<factorial(n)<<endl;
//     return 0;
// }

// // //sum of n natural numbers using recursion

// int sumN(int n){
//     if(n==0){
//         return 0;
//     }
//     int ans = n + sumN(n-1);
//     return ans;
// }

// int main(){
//     int n;
//     cin>>n;
//     if(n<0){
//         cout<<"Invalid input"<<endl;
//         return 0;
//     }
//     cout<<sumN(n);
//     return 0;
// }



// //power of two 

// int power(int n){
//     if(n==0){
//         return 1;
//     }
//     int ans = 2 * power(n-1);
//     return ans;
// }

// int main(){
//     int n;
//     cin>>n;
//     int ans = power(n);
//     cout<<ans<<endl;
//     return 0;
// }


// //power of a number 

// int power(int n,int p){
//     if(p==0){
//         return 1;
//     }
//     int ans = n * power(n,p-1);
//     return ans;
// }

// int main(){
//     int n,p;
//     cin>>n>>p;
//     int ans = power(n,p);
//     cout<<ans<<endl;
//     return 0;
// }


// // //sum of squares of n natural numbers

// int sumOfSquare(int n){
//     if(n==0){
//         return 0;
//     }
//     int ans = n*n + sumOfSquare(n-1);
//     return ans;
// }

// int main(){
//     int n;
//     cin>>n;

//     cout<<sumOfSquare(n)<<endl;
//     return 0;
// }


// //print fibonacci series using recursion

// void printFibonacci(int n, int a = 0, int b = 1) {
//     if (n == 0) {
//         return;
//     }
//     cout << a << " ";
//     printFibonacci(n - 1, b, a + b);
// }

// int main() {
//     int n;
//     cin >> n;
//     printFibonacci(n);
//     return 0;
// }


// //find minimum element in an array using recursion

// int findMin(int arr[],int n){
//     if(n==1){
//         return arr[0];
//     }
//     int mini = findMin(arr,n-1);
//     return min(arr[n-1], mini);
// }

// int main(){
//     int arr[] = {1,3,-1,0};
//     int n = 4;
//     int min = findMin(arr,n);
//     cout<<min<<endl;
//     return 0;
// }


// Merge Sort
// #include<iostream>
// #include<vector>
// using namespace std;

// void merge(vector<int>& arr, vector<int>& temp, int low, int mid, int high) {
//     int i = low, j = mid + 1, k = low;

//     while (i <= mid && j <= high) {
//         if (arr[i] <= arr[j]) {
//             temp[k++] = arr[i++];
//         } else {
//             temp[k++] = arr[j++];
//         }
//     }

//     while (i <= mid) {
//         temp[k++] = arr[i++];
//     }
//     while (j <= high) {
//         temp[k++] = arr[j++];
//     }

//     // Copy sorted subarray back to original array
//     for (int i = low; i <= high; i++) {
//         arr[i] = temp[i];
//     }
// }

// void mergeSort(vector<int>& arr, vector<int>& temp, int low, int high) {
//     if (low >= high) {
//         return;
//     }
//     int mid = (low + high) / 2;
//     mergeSort(arr, temp, low, mid);
//     mergeSort(arr, temp, mid + 1, high);
//     merge(arr, temp, low, mid, high);
// }

// int main() {
//     int n;
//     cin >> n;
//     vector<int> arr(n);
//     vector<int> temp(n);

//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//     mergeSort(arr, temp, 0, n - 1);

//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     return 0;
// }


// Merge sort to sort in descending order
// #include <iostream>
// #include <vector>
// using namespace std;

// void merge(vector<int>& arr, vector<int>& temp, int low, int mid, int high) {
//     int i = low, j = mid + 1, k = low;

//     while (i <= mid && j <= high) {
//         if (arr[i] >= arr[j]) {  // Change for descending order
//             temp[k++] = arr[i++];
//         } else {
//             temp[k++] = arr[j++];
//         }
//     }

//     while (i <= mid) {
//         temp[k++] = arr[i++];
//     }
//     while (j <= high) {
//         temp[k++] = arr[j++];
//     }

//     // Copy sorted subarray back to original array
//     for (int i = low; i <= high; i++) {
//         arr[i] = temp[i];
//     }
// }

// void mergeSort(vector<int>& arr, vector<int>& temp, int low, int high) {
//     if (low >= high) {
//         return;
//     }
//     int mid = (low + high) / 2;
//     mergeSort(arr, temp, low, mid);
//     mergeSort(arr, temp, mid + 1, high);
//     merge(arr, temp, low, mid, high);
// }

// int main() {
//     int n;
//     cin >> n;
//     vector<int> arr(n);
//     vector<int> temp(n);

//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//     mergeSort(arr, temp, 0, n - 1);

//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     return 0;
// }

// // Given an array find all subsets
// #include<vector>

// void findSubsets(vector<int> &arr, vector<int> &temp, vector<vector<int>> &ans, int ind){
//     //base case
//     if(ind == arr.size()){
//         ans.push_back(temp);
//         return;
//     }

//     //pick
//     temp.push_back(arr[ind]);
//     findSubsets(arr,temp,ans,ind+1);
//     temp.pop_back();

//     //not pick
//     findSubsets(arr,temp,ans,ind+1);
// }

// int main(){
//     int n;;
//     cout<<"Enter the size of array"<<endl;
//     cin>>n;
//     vector<int> arr(n);
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     vector<int> temp;
//     vector<vector<int>> ans;
//     findSubsets(arr,temp,ans,0);
//     cout<<"All subsets are"<<endl;
//     for(auto v:ans){
//         for(auto ele:v){
//             cout<<ele<<" ";
//         }
//         cout<<endl;
//     }
// }


// //Given an array find all subsets whose sum is equal to a given number

// #include<vector>
// #include<iostream>
// using namespace std;

// void findSubsets(vector<int> &arr, vector<int> &temp, vector<vector<int>> &ans, int ind, int target) {
//     // base case
//     if (ind == arr.size()) {
//         if (target == 0) {
//             ans.push_back(temp);
//         }
//         return;
//     }

//     // pick the current element
//     if (arr[ind] <= target) {
//         temp.push_back(arr[ind]);
//         findSubsets(arr, temp, ans, ind + 1, target - arr[ind]);
//         temp.pop_back();
//     }

//     // do not pick the current element
//     findSubsets(arr, temp, ans, ind + 1, target);
// }

// int main() {
//     int n;
//     cout << "Enter the size of array" << endl;
//     cin >> n;
//     vector<int> arr(n);
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//     int target;
//     cout << "Enter the target sum" << endl;
//     cin >> target;
//     vector<int> temp;
//     vector<vector<int>> ans;

//     findSubsets(arr, temp, ans, 0, target);
//     cout << "All subsets are" << endl;
//     for (auto v : ans) {
//         for (auto ele : v) {
//             cout << ele << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }


// //Given an array and a target you have to return true or false if the target can be formed by adding any subset of the array

// #include<vector>
// #include<iostream>
// using namespace std;

// bool findSubsets(vector<int> &arr, int ind, int target){
//     //base case
//     if(ind == arr.size()){
//         return target == 0;
//     }

//     // pick the current element
//     if (arr[ind] <= target) {
//         if (findSubsets(arr, ind + 1, target - arr[ind])) {
//             return true;
//         }
//     }

//     // do not pick the current element
//     return findSubsets(arr, ind + 1, target);
// }

// int main(){
//     int n;
//     cout<<"Enter the size of array"<<endl;
//     cin>>n;
//     vector<int> arr(n);
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }

//     int target;
//     cout<<"Enter the target sum"<<endl;
//     cin>>target;

//     if(findSubsets(arr, 0, target)){
//         cout<<"True"<<endl;
//     }
//     else{
//         cout<<"False"<<endl;
//     }

//     return 0;
// }

// // Given an array find all subset sum possible
// #include<vector>


// void findSubsetsSum(vector<int> &arr, vector<int> &temp, int ind, int sum){
//     //base case
//     if(ind == arr.size()){
//         cout<<sum<<endl;
//         return;
//     }

//     //pick
//     temp.push_back(arr[ind]);
//     findSubsetsSum(arr,temp,ind+1,sum+arr[ind]);
//     temp.pop_back();

//     //not pick
//     findSubsetsSum(arr,temp,ind+1,sum);
// }


// int main(){
//     int n;
//     cout<<"Enter the size of array"<<endl;
//     cin>>n;
//     vector<int> arr(n);
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }

//     vector<int> ans;

//     findSubsetsSum(arr,ans,0,0);

// }


// //Given an array find all subset sum possible and also print the corresponding subset print both sum and subset

// #include<vector>
// #include<iostream>
// using namespace std;

// void findSubsetsSum(vector<int> &arr, vector<int> &temp, int ind, int sum, vector<vector<int>> &subset){
//     //base case
//     if(ind == arr.size()){
//         subset.push_back(temp);
//         cout << "Subset: ";
//         for(int i = 0; i < temp.size(); i++){
//             cout << temp[i] << " ";
//         }
//         cout << " Sum: " << sum << endl;
//         return;
//     }

//     //pick
//     temp.push_back(arr[ind]);
//     findSubsetsSum(arr,temp,ind+1,sum+arr[ind],subset);
//     temp.pop_back();

//     //not pick
//     findSubsetsSum(arr,temp,ind+1,sum,subset);
// }

// int main(){
//     int n;
//     cout<<"Enter the size of array"<<endl;
//     cin>>n;
//     vector<int> arr(n);
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     vector<int> ans;
//     vector<vector<int>> subset;

//     findSubsetsSum(arr,ans,0,0,subset);

//     return 0;
// }