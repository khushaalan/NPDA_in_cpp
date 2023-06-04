//NPDA for the language L = {w | w has equal number of 0’s and 1’s}.
// L = {0^n 1^n | n>=0}

#include<bits/stdc++.h>
using namespace std;
#define INPUT_SZ 5

char stackState(){
    stack<char> stk;
    stk.push('z');

    string s;
    cin >> s;

    for(auto i:s){
        if(i=='0'){
            stk.push('0');
        }
        else if(i=='1'){
            if(stk.top()!='z'){
                stk.pop();
            }
            else{
                stk.push('1');
            }
        }
        else{
            cout << "Invalid Input\n";
            return '\0';
        }
    }
    return stk.top();
}

int main(){

    for(int i=0;i<INPUT_SZ;i++)
        stackState()== 'z' ? cout<<"String is Accepted\n" : cout<<"String is not Accepted\n";
    return 0;
}