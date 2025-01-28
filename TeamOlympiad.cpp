#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    int num;
    cin>>num;

    int one=0,two=0,three=0;
    vector<int> o1;
    vector<int> t2;
    vector<int> t3;
    vector<int> vec(num);
    for(int i=0;i<num;i++){
        cin>>vec[i];
    }

    for(int i=0;i<num;i++){
        if(vec[i]==1){
            one++;
            o1.push_back(i+1);
        }
        else if(vec[i]==2){
            two++;
            t2.push_back(i+1);
        }
        else{
            three++;
            t3.push_back(i+1);
        }
    }

    int mini=min({one,two,three});

    cout<<mini<<endl;

    for(int i=0;i<mini;i++){
        cout<<o1[i]<<" "<<t2[i]<<" "<<t3[i]<<endl;
    }
return 0;
}