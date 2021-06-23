

class Matrix {
    public:
        vector<vector<int> > a;
        
    Matrix operator + (Matrix const&b){
        int r = a.size();
        int c = a[0].size();
        Matrix res;
        //cout << r << c << endl;
        
        for(int i=0;i<r;i++){
            vector<int> temp;
            for(int j=0;j<c;j++){
                temp.push_back(a[i][j] + b.a[i][j]);
                
            }
            res.a.push_back(temp);
        }
        
        return res;   
        } 
};
