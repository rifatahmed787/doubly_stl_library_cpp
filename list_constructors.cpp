#include<bits/stdc++.h>
using namespace std;
 
int main(){
    // list<int>myList;
    // list<int>myList(10, 5);
    // list<int>list2={1, 2, 3, 4, 5};
    int a[5]={1, 2, 3, 4, 5};
    // list<int>myList(a, a+5);
    vector<int>v={100, 200, 300, 400};
    list<int>myList(v.begin(), v.end());
     
    // for(auto it=myList.begin();it!=myList.end(); it++){
    //     cout<<*it<<endl;
    // }

    for(int val:myList){
        cout<<val<<endl;
    }
    return 0;
}