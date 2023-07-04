#include<bits/stdc++.h>
using namespace std;

int countPairs(vector<vector<int>>& matrix, int k) {
    unordered_map<int, int> xorMap;
    int count = 0;

    for ( auto point : matrix) {
        int xorX = point[0] ^ k;
        int xorY = point[1] ^ k;
        int xorSum = xorX + xorY;

        count += xorMap[xorSum];
        xorMap[xorSum]++;
    }

    return count;
}

int main() {
    vector<vector<int>> matrix = {{0,1},{2,3},{1,3}};
    int k = 3;
    int result = countPairs(matrix, k);
    cout << result << endl;

    return 0;
}