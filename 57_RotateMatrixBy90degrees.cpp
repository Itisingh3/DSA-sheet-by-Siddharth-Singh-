
#include<iostream>
using namespace std;
const int n = 3;
void print(int mat[n][n])
{
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            cout << mat[i][j] << " ";
        cout << endl;
    }
   
}
void rotate90clockwise(int mat[n][n]){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            swap(mat[i][j],mat[j][i]);
        }
    }
     for(int i=0;i<n;i++){
        int low = 0, high = n - 1;
        while (low < high) {
            swap(mat[i][low], mat[i][high]);
            low++;
            high--;
        }
    }
}
int main()
{
    int mat[n][n]
        = { { 1, 2, 3 },
                      {4,5,6},
                      { 7,8,9}};
    rotate90clockwise(mat);
    print(mat);
}
