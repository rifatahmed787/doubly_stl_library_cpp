#include<bits/stdc++.h>
using namespace std;
 
int main(){
    list<int>myList={1, 2, 5, 4, 4, 6};
    // myList.remove(4);
    // myList.sort();
    // myList.sort(greater<int>());

    // myList.sort();
    // myList.unique();
    myList.reverse();
    for(int val:myList){
        cout<<val<<endl;
    }
    return 0;
}