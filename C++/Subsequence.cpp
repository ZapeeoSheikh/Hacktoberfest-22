/*Subsequence of any string 
for ex - i/p : ABC
o/p : A , B,C, BC, AC,AB,ABC, 
*/
#include<iostream>
#include<vector>
using namespace std;

void solve(string s,string output, int index , vector
<string> &ans){
    //base case
    if (index >= s.length()){
        if(output.length() > 0){
            ans.push_back(output);
        }
        return;

    }
    //exclude
    solve(s,output,index+1,ans);

    // include
    char element = s[index];
    output.push_back(element);
    solve(s,output,index+1,ans);
}

vector<string> subset(string s){
    vector<string> ans;
    string output = "" ;
    int index = 0;
    solve(s,output,index,ans);
    return ans;
}

int main(){
    string s;
    cin >> s;
    vector<string> ans = subset(s);
    for(int i=0;i<ans.size();i++){
        cout << ans[i] <<", ";
    }
    return 0;
}