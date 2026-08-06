class Solution {
public:

    int product(int n){
        int prod = 1;

        while(n!=0){
            prod *= n%10;
            n/=10;
        }
        return prod;
    }

    int smallestNumber(int n, int t) {

        int prod = product(n);

        while(prod%t != 0){
            n++;
            prod = product(n);
        }

        return n;
    }
};