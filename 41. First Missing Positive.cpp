// Solution Approach
// Think about how you would solve the problem in non-constant space. Can you apply that logic to the existing space?
// We don't care about duplicates or non-positive integers
// Remember that O(2n) = O(n)

class Solution {
public:
    int firstMissingPositive(vector<int>& A) {
        int n = A.size();
            for (int i = 0; i < n; i++) {
                if (A[i] > 0 && A[i] <= n) {
                    int pos = A[i] - 1;
                    if (A[pos] != A[i]) {
                        swap(A[pos], A[i]);
                        i--;
                    }
                }
            }
            for (int i = 0; i < n; i++) {
                if (A[i] != i + 1) return (i + 1);
            }
            return n + 1;
    }
};
