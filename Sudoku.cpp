
bool isValid(vector<vector<char> > &A, int row, int col, char c){

    for(int i=0; i<9; i++){

        if(A[i][col]==c)return false;

        if(A[row][i]==c)return false;

        if(A[3*(row/3)+i/3][3*(col/3)+i%3]==c)return false;

    }

    return true;

}



bool solve(vector<vector<char> > &A){

    for(int i=0; i<A.size(); i++){

        for(int j=0; j<A[0].size(); j++){

            if(A[i][j]=='.'){

                for(char c='1'; c<='9'; c++){

                    if(isValid(A,i,j,c)){

                        A[i][j]=c;

                        if(solve(A))return true;

                        else A[i][j] = '.';

                    }

                }

                return false;

            }

        }

    }

    return true;

}





void Solution::solveSudoku(vector<vector<char> > &A) {

    solve(A);

}
