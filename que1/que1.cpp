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

void hlp(int xx){
  //  cout<<xx<<endl;

    int r=10,c=10,m=82;
   cin>>r>>c>>m;

  vector<vector<char>> arr(r,vector<char>(c,'.')) ;
    int tag =0 ;
//   if(m>r*c-4){
//     tag=1;
//   }
//   else{
//     tag=0;
//   }
//   if(tag==1 and (m - (r-2)*(c-2) )%2==0){
//     tag=1;
//   }
//   else{
//     tag=0;
//   }

       cout<<"#case"<<xx<<endl;
       if(r*c == m+1){
           for(int i = 0 ; i<r ; i++){
            for(int j = 0 ; j<c ; j++){
                arr[i][j]='*';
            }
           }
           arr[r-1][c-1]='c';
       }
       else if(r==1 ){
         if(m>c-1){
            cout<<"imposible"<<endl;
            return;
         }
        for(int i = 0 ; i<m ; i++){
            arr[0][i] = '*';
        }
        arr[0][c-1]='c';
       
         
       }

      else if(c==1 ){
         if(m>r-1){
            cout<<"imposible"<<endl;
            return;
         }
        for(int i = 0 ; i<m ; i++){
            arr[i][0] = '*';
        }
        arr[r-1][0]='c';

         
       }
       

 else if(m!=0 && (r*c) - m  < 4 || ((r-2)*(c-2) < m && (m-((r-2)*(c-2)))% 2 ==1 ) ){

    cout<<"impossible"<<endl;
    return;
  }

  else{


  for(int i = 0 ; m>0 &&i<r-2 && !tag ; i++ ){
    for(int j = 0 ; j<c-2 && !tag; j++){
        if(m>0){

        arr[i][j]='*';
        m--;
        }
        else{
            tag=1;
        }
    }
  }

  for(int i = 0 ; i<r-2 && m>0 ; i++){
    if(m>0){
        arr[i][c-1] = '*';
        arr[i][c-2] = '*';
    }
    m-=2;
  }
  for(int i = 0 ; i<c-2 && m>0 ; i++){
    if(m>0){
        arr[r-1][i] = '*';
        arr[r-2][i] = '*';
    }
    m-=2;
  }

// for(int i = r-2 ; i<r and m>0 ; i++){
//     arr[c-1][i] = '*';
//     arr[c-2][i] = '*';
//     m-=2;
// }

  }

arr[r-1][c-1]='c';

  for(int i = 0 ; i<r ; i++){
    for(int j = 0 ; j<c ; j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
  }









}

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
        freopen("error.txt", "w", stderr);
    #endif


    int t=1;
    cin >> t;
     for(int i=1;i<=t;i++)
    {
       
        hlp(i);
// cout<<i<<endl;
        
    }
    return 0;
}