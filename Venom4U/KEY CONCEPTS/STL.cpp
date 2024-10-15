// // ARRAY

#include <iostream>
#include <array>

using namespace std;
int main()
{
    int basic[3] = {1, 2, 3};

    array<int, 4> a = {1, 2, 3, 4};
    int size = a.size();

    for (int i = 0; i < size; i++)
    {
        cout << a[i]<<" ";
    }
    cout<<endl;

    cout << "Element at 2nd index --> " << a[2] << endl;

    cout << "Empty set or not --> " << a.empty() << endl;

    cout << "First element --> " << a.front() << endl;

    cout << "Last element --> " << a.back() << endl;
}

// //VECTOR

// #include <iostream>
// #include <vector>

// using namespace std;
// int main(){

//     vector<int> v;
//     cout<<"Size --> "<< v.capacity()<<endl;
//     cout<<"No. of elements --> "<< v.size()<<endl;

//     v.push_back(1);
//     cout<<"Size --> "<< v.capacity()<<endl;
//     cout<<"No. of elements --> "<< v.size()<<endl;

//     v.push_back(2);
//     cout<<"Size --> "<< v.capacity()<<endl;
//     cout<<"No. of elements --> "<< v.size()<<endl;

//     v.push_back(3);
//     cout<<"Size --> "<< v.capacity()<<endl;
//     cout<<"No. of elements --> "<< v.size()<<endl;

//     cout<<"Element at index 2 --> "<<v.at(2)<<endl;

//     cout<<"Before pop: "<<endl;
//     for(int i:v){
//         cout<<i<<" ";
//     }cout<<endl;

// //Remove from the end
//     v.pop_back();
//     cout<<"After pop: "<<endl;
//     for(int i:v){
//     cout<<i<<" ";
//     }cout<<endl;

// //Delete all the elements
//     v.clear();
//     cout<<"After clear: "<<endl;
//     for(int i:v){
//         cout<<i<<" ";
//     }
//     cout<<"Size --> "<<v.size()<<endl;

// //Initialisation all 5 elements with 1
//     vector<int> v2(5,1);
//     for(int j:v2){
//     cout<<j<<" ";
//     }cout<<endl;

// //Copying v2 to another vector last
//     vector<int> last(v2);
//     for(int k:last)
// {
//     cout<<k<<" ";
// }
// }

// //DEQUE

// #include <iostream>
// #include <deque>

// using namespace std;
// int main(){

//      deque<int> d;

//      d.push_back(1);
//      d.push_front(2);
//      d.push_front(3);

//      for(int i:d){
//         cout<<i<<" ";
//      }cout<<endl;

//  d.pop_front();//removes element from start
//  d.pop_back();//removes element from end

// cout<<"After Pop: "<<endl;
//  for(int i:d){
//     cout<<i<<" ";
//  }cout<<endl;

//  cout<<"Element at 1st index --> "<<d.at(1)<<endl;

//  cout<<"Front --> "<<d.front()<<endl;
//  cout<<"Back --> "<<d.back()<<endl;

//  cout<<"Empty or not --> "<<d.empty()<<endl;

//  cout<<"Before erase: "<<d.size()<<endl;
//  d.erase(d.begin(),d.begin()+1);
//  cout<<"After erase: "<<d.size()<<endl;
// }

// //LIST

// #include <iostream>
// #include <list>

// using namespace std;
// int main(){

//      list<int> l;

//      l.push_back(1);
//      l.push_front(2);
//      l.push_front(3);
//      l.push_back(4);

//      for(int i:l){
//         cout<<i<<" ";
//      }cout<<endl;

//      l.erase(l.begin());
//      cout<<"After erase size: "<<l.size()<<endl;
//      for(int i:l){
//         cout<<i<<" ";
//      }cout<<endl;

//      cout<<"After Pop: "<<endl;

//      l.pop_back();
//      l.pop_front();

//      for(int i:l){
//         cout<<i<<" ";
//      }cout<<endl;

// }

// //STACK

// #include <iostream>
// #include <stack>

// using namespace std;
// int main(){
//     stack<string> s;

//     s.push("Love");
//     s.push("You");
//     s.push("Dear");

//     cout<<"Top element --> "<<s.top()<<endl;

//     cout<<"Size --> "<<s.size()<<endl;

//     cout<<"Empty or not --> "<<s.empty()<<endl;

// }

// //QUEUE

// #include <iostream>
// #include <queue>

// using namespace std;
// int main(){
//     queue<string> q;

//     q.push("Love");
//     q.push("You");
//     q.push("Dear");

//     cout<<"Size before pop --> "<<q.size()<<endl;

//     cout<<"First element --> "<<q.front()<<endl;

//     q.pop();

//     cout<<"Size after pop --> "<<q.size()<<endl;

//     cout<<"First element after pop --> "<<q.front()<<endl;

// }

// //PRIORITY QUEUE

// #include <iostream>
// #include <queue>

// using namespace std;
// int main(){
// //max-heap
//     priority_queue<int> maxi;

// //min-heap
//     priority_queue<int,vector<int> , greater<int> > mini;

//     maxi.push(1);
//     maxi.push(3);
//     maxi.push(2);
//     maxi.push(0);

//     cout<<"Size: "<<maxi.size()<<endl;

//     int n = maxi.size();

//     for(int i=0;i<n;i++){
//         cout<<maxi.top()<<" ";
//         maxi.pop();
//     }cout<<endl;

//     mini.push(1);
//     mini.push(2);
//     mini.push(4);
//     mini.push(0);

//     int m = mini.size();
//     cout<<"Size: "<<m<<endl;

//     for(int j=0;j<m;j++){
//         cout<<mini.top()<<" ";
//         mini.pop();
//     }cout<<endl;

// cout<<"Khali hai kya bhai : "<<mini.empty()<<"\n";
// cout<<"Khali hai kya bhai : "<<maxi.empty()<<"\n";

// }

// //SET

// #include <iostream>
// #include <set>

// using namespace std;
// int main(){
//     set<int> s;

//     s.insert(5);
//     s.insert(611);
//     s.insert(71);
//     s.insert(84);

//     for(auto i:s){
//         cout<<i<<" ";
//     }cout<<endl;

//     //s.erase(s.begin());

//     set<int>::iterator it = s.begin();
//     it++;
//     s.erase(it);

//     for(auto i:s){
//         cout<<i<<" ";
//     }cout<<endl;

//     cout<<"5 is present or not: "<<s.count(5)<<endl;

//     set<int>::iterator itr = s.find(5);

//     cout<<"Value present at itr : "<<*it<<endl;

//     for(auto it=itr;it!=s.end();it++){
//         cout<<*it<<" ";

//     }cout<<endl;
// }

// //MAP

// #include <iostream>
// #include <map>

// using namespace std;
// int main(){
//     map<int,string> m;

//     m[1] = "Shahil";
//     m[3] = "girl named";
//     m[2] = "loves";

//     m.insert({5,"Nyasa"});

//     for(auto i:m){
//         cout<<i.first<<" "<<i.second<<" ";
//     }cout<<endl;

//     cout <<"Finding 13 --> "<<m.count(13)<<endl;

//     auto it = m.find(2);
//     for(auto i=it;i!=m.end();i++){
//         cout<<(*i).first<<endl;
//     }
// }

// ALGO

// #include <iostream>
// #include <algorithm>
// #include <vector>

// using namespace std;
// int main()
// {
//     vector<int> v;

//     v.push_back(1);
//     v.push_back(2);
//     v.push_back(3);
//     v.push_back(4);
//     v.push_back(5);
//     v.push_back(6);

//     cout << "Finding 6: " << binary_search(v.begin(), v.end(), 6) << endl;

//     cout << "Lower bound: " << lower_bound(v.begin(), v.end(), 6) - v.begin() << endl;

//     int a = 5;
//     int b = 7;

//     cout << "Max: " << max(a, b) << endl;

//     cout << "Min: " << min(a, b) << endl;

//     swap(a, b);
//     cout << a << "\n";

//     string s = "Shahil";
//     reverse(s.begin(), s.end());
//     cout << "Reverse :" << s << endl;

//     rotate(v.begin(), v.begin() + 1, v.end());
//     cout << "After rotate: " << endl;
//     for (int i : v)
//     {
//         cout << i << " ";
//     }
//     cout << endl;

//     sort(v.begin(), v.end());
//     cout << "After sort: " << endl;
//     for (int i : v)
//     {
//         cout << i << " ";
//     }
// }