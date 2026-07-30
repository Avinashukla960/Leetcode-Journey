class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> v(n,vector<int>(n));
        vector <vector<int>> res(n,vector<int>(n));
        int b=1;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                v[i][j]=b;
                b++;
            }
        }
        
        int minrow=0,mincol=0;
        int maxrow=v.size()-1,maxcol=v[0].size()-1;
        int x=0,y=0;
        while(minrow<=maxrow && mincol<=maxcol){
            for(int i=mincol;i<=maxcol;i++){

                res[minrow][i]=v[x][y];
                y++;
                if(y>n-1){
                    x++;
                    y=0;
                }

            }

            
            minrow++;
            if(mincol>maxcol || minrow>maxrow) {break;}
            for(int j=minrow;j<=maxrow;j++){
                res[j][maxcol]=v[x][y];
                y++;
                if(y>n-1){
                    x++;
                    y=0;
                }
            }
            maxcol--;
            if(mincol>maxcol || minrow>maxrow) break;
            for(int k=maxcol;k>=mincol;k--){
                res[maxrow][k]=v[x][y];
                y++;
                if(y>n-1){
                    x++;
                    y=0;
                }
            }
            maxrow--;
            if(mincol>maxcol || minrow>maxrow) break;
            for(int l=maxrow;l>=minrow;l--){
                res[l][mincol]=v[x][y];
                y++;
                if(y>n-1){
                    x++;
                    y=0;
                }
            }
            mincol++;
            
        }
        return res;
    }
    
};