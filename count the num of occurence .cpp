#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>v(6);

    for(int i=0 ; i<6 ; i++){
        cin>>v[i];
    }

    int x;
    cout<<"Enter x:"<<endl;
    cin>>x;

    int count =0;
    for(int i=0 ; i<v.size(); i++){
        if(v[i]==x){
            count=count+1;
        }
    }
    cout<<"the count is"<<count<<endl;
    
    return 0;
}
