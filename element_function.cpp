#include<bits/stdc++.h>
using namespace std;
 
int main(){
    list<int>myList={1, 2, 4, 5, 5};
    cout<<myList.front()<<endl;
    cout<<myList.back()<<endl;

    cout<<*next(myList.begin(), 3)<<endl;
   
    for(int val:myList){
        cout<<val<<endl;
    }
    return 0;
}