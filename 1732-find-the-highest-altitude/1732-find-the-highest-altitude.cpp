class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector<int> altitude;

        altitude.push_back(0);
        int alt = 0;

        for(int i=0 ; i<gain.size() ; i++){
            alt += gain[i];
            altitude.push_back(alt);
        }

        sort(altitude.begin(), altitude.end() , greater());

        return altitude[0];
    }
};