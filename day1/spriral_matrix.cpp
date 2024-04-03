class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
    vector<int> ans;
    int row=matrix.size();
    int column=matrix[0].size();

    int count=0;
    int total=row*column;


// index initialization
    int startingRow=0;
    int startingcolumn=0;
    int endingrow=row-1;
    int endingcolumn=column-1;


    while(count<total){
       
    //    print starting row
    for(int index=startingcolumn;count<total && index<=endingcolumn;index++){
       ans.push_back(matrix[startingRow][index]); 
       count++;
    }
    startingRow++;

    // printing ending column

    for( int index=startingRow;count<total && index<=endingrow;index++){
        ans.push_back(matrix[index][endingcolumn]); 
         count++;
    }
    endingcolumn--;

    // printing ending row
    
    for(int index=endingcolumn;count<total && index>=startingcolumn;index--){
      ans.push_back(matrix[endingrow][index]);
       count++;  
    }
    endingrow--;

    // print for starting column
    for(int index=endingrow;count<total && index>=startingRow;index--){
       ans.push_back(matrix[index][startingcolumn]);
        count++;    
    } 
    startingcolumn++;

    }
    return ans;



    }
};