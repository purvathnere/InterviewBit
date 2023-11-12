void helper(vector<int> &A, set<vector<int>> &vec, int start, int end)

    {

        if(start >=end)

        {

            vec.insert(A);

            return ;

        }

        for(int i=start; i<A.size();i++)

        {

            swap(A[start],A[i]);

            helper(A,vec,start+1,end);

            swap(A[start],A[i]);

            

        }

        

        

    }


vector<vector<int> > Solution::permute(vector<int> &A) {

    

    set<vector<int>> vec;

    helper(A,vec,0,A.size()-1);

    

    vector<vector<int>> ans (vec.begin(), vec.end());

    return ans;

}



