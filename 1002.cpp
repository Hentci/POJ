#include <iostream>
#include <map>
#include <string>
using namespace std;
#define ll long long
#define all(x) x.begin(),x.end()
#define ar array
#define sz(x) ((int)x.size())
template <class T,class S> inline bool chmin(T &a,const S &b) {return (a> b? a= b, 1: 0);}
template <class T,class S> inline bool chmax(T &a,const S &b) {return (a< b? a= b, 1: 0);}
int main(){
    ios_base::sync_with_stdio(false),cin.tie(0);
    int n;
    cin >> n;
    map <string, int> mp;
    string s;
    for(int i = 0;i < n;i++){
        string num;
        cin >> s;
        int cnt = 0;
        for(auto ele: s){
            if(isdigit(ele)){
                cnt++;
                num += ele;
            }
            if(ele == 'A' || ele == 'B' || ele == 'C'){
                cnt++;
                num += '2';
            }
            if(ele == 'D' || ele == 'E' || ele == 'F'){
                cnt++;
                num += '3';
            }
            if(ele == 'G' || ele == 'H' || ele == 'I'){
                cnt++;
                num += '4';
            }
            if(ele == 'J' || ele == 'K' || ele == 'L'){
                cnt++;
                num += '5';
            }
            if(ele == 'M' || ele == 'N' || ele == 'O'){
                cnt++;
                num += '6';
            }
            if(ele == 'P' || ele == 'R' || ele == 'S'){
                cnt++;
                num += '7';
            }
            if(ele == 'T' || ele == 'U' || ele == 'V'){
                cnt++;
                num += '8';
            }
            if(ele == 'W' || ele == 'X' || ele == 'Y'){
                cnt++;
                num += '9';
            }
            if(cnt == 3){
                num += '-';
                cnt++;
            } 
        }
        mp[num]++;
    }
    for(auto ele: mp){
        if(ele.second != 1)
            cout << ele.first << " " << ele.second << "\n";
    }


    return 0;
}