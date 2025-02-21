#include<bits/stdc++.h>
using namespace std;


void setZeros(vector<vector<int>> &matrix) {
    int rows = matrix.size();
    int cols = matrix[0].size();

    vector<int> marker_rows(rows, 1);
    vector<int> marker_cols(cols, 1);
    
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            if(matrix[i][j] == 0){
                marker_rows[i] = 0;
                marker_cols[j] = 0;
            }
        }
    }

    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            if(marker_cols[j] == 0 || marker_rows[i] == 0){
                matrix[i][j] = 0;
            }
        }
    }
}


void printMatrix(vector<vector<int>> matrix){
    int rows = matrix.size();
    int cols = matrix[0].size();

    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<endl;
}

int main(){

    vector<vector<int>> matrix = {{1, 1, 1}, {1, 0, 1}, {1, 1, 1}};

    cout<<"Rows: "<<matrix.size()<<endl;
    cout<<"Columns: "<<matrix[0].size()<<endl;


    cout<<"Before: "<<endl;
    printMatrix(matrix);

    setZeros(matrix);

    cout<<"After: "<<endl;
    printMatrix(matrix);
    

    return 0;
}