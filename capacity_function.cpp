#include<bits/stdc++.h>
using namespace std;
 
int main(){
    list<int>myList={1, 2, 3, 4, 5};
    // cout<<myList.size();
    // myList.clear();
    // myList.resize(3);
    myList.resize(7, 100);
    for(int val:myList){
        cout<<val<<endl;
    }
    return 0;
}