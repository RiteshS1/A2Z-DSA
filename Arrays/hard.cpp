#include<iostream>
using namespace std;

void findMaxareaofSquare(int matrix[5][5]){
    int dp[5][5];
    int maxArea = 0;
    for(int i = 0; i < 5; i++){
        dp[i][0] = matrix[i][0];
    }
    for(int i = 0; i < 5; i++){
        dp[0][i] = matrix[0][i];
    }
    for(int i = 1; i < 5; i++){
        for(int j = 1; j < 5; j++){
            if(matrix[i][j] == 1){
                dp[i][j] = min(dp[i-1][j-1], min(dp[i-1][j], dp[i][j-1])) + 1;
            }
            else{
                dp[i][j] = 0;
            }
        }
    }
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            if(dp[i][j] > maxArea){
                maxArea = dp[i][j];
            }
        }
    }
    cout << "Max area of square is: " << maxArea*maxArea << endl;
}

int main()
{
//     int matrix[5][5] = {
//     {0,1,1,1,0},
//     {1,1,1,1,1},
//     {0,1,1,1,0},
//     {1,0,1,1,1},
//     {0,1,1,1,0}
// };
//     findMaxareaofSquare(matrix);
//     for(int i = 0; i < 5; i++){
//         for(int j = 0; j < 5; j++){
//             cout << matrix[i][j] << " ";
//         }
//         cout << endl;
//     }
    














return 0;
}