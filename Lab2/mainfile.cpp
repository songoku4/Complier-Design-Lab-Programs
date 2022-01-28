#include <iostream>
using namespace std;
int d1(string &s){
    int m=0;
    int i=0;
    while(i<s.size()){
        if(m==0 && s[i]=='a'){
            m=1;
            i++;
        }
        else if(m==0 && s[i]=='b'){
            m=0;
            i++;
        }
        else if(m==1 && s[i]=='a'){
            m=1;
            i++;
        }
        else if(m==1 && s[i]=='b'){
            m=2;
            i++;
        }
        else{
            i++;
        }
    }
    if(m==2) 
        return 1;
    else{
        return 0;
    }
}
int main(){
    string s1;
    string s2;
    cout<<"string 1"<<endl;
    cin>>s1;cout<<"string 2"<<endl;
    cin>>s2;
    int a1;
    int a2;
    a1 = d1(s1);
    a2 = d1(s2);
    if(a1==1){
        cout<<"String 1 Accepted"<<endl;
    }
    else if(a1==0){
        cout<<"String 1 not Accepted"<<endl;
    }
    if(a2==1){
        cout<<"String 2 Accepted"<<endl;
    }
    else if(a2==0){
        cout<<"String 2 is not Accepted"<<endl;
    }
    return 0;
}
