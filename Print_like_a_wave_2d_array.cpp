#include <bits/stdc++.h> 
vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols)
{
    vector <int> ans;
    bool flag =true;
    for( int j=0;j<mCols;j++){
       if(flag==true){
           for(int i=0;i<nRows;i++){
               ans.push_back(arr[i][j]);
           }
           flag = !flag; 
       }
else{
    for(int i=nRows-1;i>=0;i--){
          ans.push_back(arr[i][j]);
    } 
    flag = !flag; 
}
    }

    return ans;
}