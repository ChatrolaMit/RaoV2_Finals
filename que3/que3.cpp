#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define pii pair<int,int>
#define vii vector<pii>
#define rep(i , a , b) for(int i=a ; i<b ; i++)
#define ff first
#define ss second
#define setBits(x) builtin_popcount(x)
using namespace std;

int buyRent(vector<int>& arr,int b,int c,int d,int i,int remaining,bool prevbuy,int currentCapacity){
    if(i>=arr.size()){
    
        return 0;
    }

    if(prevbuy){
        prevbuy=!prevbuy; // consiquitive buy and rent


        return min(
    b+buyRent(arr,b,c,d,i+1,remaining,prevbuy,currentCapacity),//if rents stools
    c+buyRent(arr,b,c,d,i+1,remaining,prevbuy,currentCapacity));  //if rents benchs
    }

    else {
        return buyRent(arr,b,c,d,i+1,remaining,!prevbuy,currentCapacity+arr[i]);


    }
 
   




}

void hlp(){
    int b,c,d;
    cin>>b>>c>>d;
    vector<int> arr(9,0);

    for(int i=0;i<9;i++){
        cin>>arr[i];

    }


    buyRent(arr,b,c,d,0,0,true,0);

   



}

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
        freopen("error.txt", "w", stderr);
    #endif


    int t;
    cin >> t;
    while (t--)
    {
        // int a, b;
        // cin >> a >> b;

hlp();


        
    }
    return 0;
}