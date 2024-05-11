
#include <bits/stdc++.h>
using namespace std;

bool searchMatrix(vector<vector<int>>& matrix, int target) {

        int m = matrix.size();    // rows
        int n = matrix[0].size(); // cols

        int low = 0;
        int high = m * n - 1;

        while (low <= high) {
            int mid = (low + high) / 2;
            int ele = matrix[mid / n][mid % n];
            if (target == ele) {
                return true;
            }

            if (target > ele){
                low = mid + 1;
            }else {
                high = mid - 1;
            }
        }

        return false;
    }

int main() {

    return 0;
}