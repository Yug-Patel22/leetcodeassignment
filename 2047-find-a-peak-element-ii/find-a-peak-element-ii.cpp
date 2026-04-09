class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();

        if (m == 1) {
            int maxRow = 0;
            for (int i = 1; i < n; i++) {
                if (mat[i][0] > mat[maxRow][0]) maxRow = i;
            }
            return {maxRow, 0};
        }

        int l = 0, r = m - 1;

        while (l <= r) {
            int mid = (l + r) / 2;

            int matind = 0;
            for (int i = 1; i < n; i++) {
                if (mat[matind][mid] < mat[i][mid]) matind = i;
            }

            // peak checks
            if (mid == 0 && mat[matind][mid] > mat[matind][mid + 1])
                return {matind, mid};

            else if (mid == m - 1 && mat[matind][mid] > mat[matind][mid - 1])
                return {matind, mid};

            else if (mid > 0 && mid < m - 1 &&
                     mat[matind][mid] > mat[matind][mid - 1] &&
                     mat[matind][mid] > mat[matind][mid + 1])
                return {matind, mid};

            // direction move
            if (mid < m - 1 && mat[matind][mid] < mat[matind][mid + 1])
                l = mid + 1;
            else
                r = mid - 1;
        }

        return {0, 0};
    }
};