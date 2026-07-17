class Solution {
public:
    bool isPossible(vector<int>& target) {

        priority_queue<int> pq;

        long long sum = 0;

        for (int t : target) {
            pq.push(t);
            sum += t;
        }

        while (true) {
            long long largest = pq.top();
            pq.pop();

            long long rest = sum - largest;

            if (largest == 1 || rest == 1)
                return true;

            if (rest == 0 || largest < rest || largest % rest == 0)
                return false;

            long long prev = largest % rest;

            sum = rest + prev;
            pq.push(prev);
        }

        return true;
    }
};