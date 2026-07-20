class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        vector<int> array;

        for(int i=0 ; i<grid.size() ; i++){
            for(int j=0; j<grid[0].size() ; j++){
                array.push_back(grid[i][j]);
            }
        }

        
        int n = array.size();
        vector<int> rotate(n);
        k %= array.size();

        for(int i=0 ; i<n ; i++){
            rotate[(i+k)%n] = array[i];
        }

       vector<vector<int>> res(grid.size(), vector<int>(grid[0].size()));
        int l=0;
        for(int i=0 ; i<grid.size() ; i++){
            for(int j=0; j<grid[0].size() ; j++){
                res[i][j] = rotate[l];
                l++;
            }
        }

        return res;
    }
};