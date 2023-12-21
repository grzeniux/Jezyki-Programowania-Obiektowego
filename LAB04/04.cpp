
#include <iostream>
#include <vector>
#include <string>
#include <random>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;

void sum(const int row, const int col,vector<vector<int>> v1,vector<vector<int>> v2) {
    vector<vector<int>> v3(row, vector<int>(col));
    for (int i = 0; i < row; i++) {
        for (int n = 0; n < col;n++) {
            v3[i][n] = v1[i][n] + v2[i][n];
            cout << v3[i][n] << '\t';
        }
        cout << '\n';
    }
}

void mul(const int row, const int col, vector<vector<int>> v1, vector<vector<int>> v2) {
    vector<vector<int>> v3(row, vector<int>(col));
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            for (int n = 0;n < col;n++) {
                v3[i][j] += v1[i][n] * v2[n][j];
            }
            cout << v3[i][j] << '\t';
        }
        cout << '\n';
    }
}

int main()
{
    int row{}, col{};
    std::random_device rd;
    std::uniform_int_distribution<int> dist(-10, 10);
    cout << "insert number of rows:";
    cin >> row;
    cout << "instert number of columns:";
    cin >> col;
    vector <vector<int>> matrix1(row, vector<int>(col));
    vector <vector<int>> matrix2(row, vector<int>(col));
    cout << "first vector: \n";
    for (int i = 0; i < row; i++) {
        for (int n = 0; n < col; n++) {
            matrix1[i][n] = dist(rd);
            cout << matrix1[i][n] << '\t';
        }
        cout << '\n';
    }
    cout << "second vector: \n";
    for (auto &i : matrix2) { //rows
        for (auto &n : i) { //cols
            n = dist(rd);
            cout << n << '\t';
        }
        cout << '\n';
    }
    cout << "after summing up: \n";
    sum(row, col, matrix1, matrix2);
    cout << "after multiplication \n";
    mul(row, col, matrix1, matrix2);
}
