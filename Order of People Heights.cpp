vector<int> tree; 


int sz; 




void build(int N)

{

    

    sz = 1;

    while(sz < N)

        sz = sz*2;



    tree = vector<int> (2*sz, 0);




    for(int i=sz;i<sz+N;i++) {

        tree[i] = 1;

    }



    for(int i=sz-1; i>=1; i--)

    {

        tree[i] = tree[2*i] + tree[2*i+1];

    }

}




void fill(int index)

{

 

    int id = sz + index;

    while(id>0) {

        tree[id] -= 1;

        id = id/2; 

    }

}




int findEmpty(int x)

{

    int curr = 1;

    while(curr < sz)

    {

        int left = 2*curr;

        if(x <= tree[left]) {

            curr = left;

        }

        else {

            x -= tree[left];

            curr = 2*curr + 1;

        }

    }

    if(tree[curr] == 1)

        return curr-sz;    

    return -1;

}





void display()

{

    cout << "Tree\t";

    for(int i=1; i<tree.size();i++)

        cout << tree[i] << " ";

}


vector<int> Solution::order(vector<int> &A, vector<int> &B) {

    int n = A.size();

    


    vector<pair<int, int>> p;

    for(int i=0;i<A.size() && i<B.size();i++)

    {

        p.push_back({A[i], B[i]});

    }

    sort(p.begin(), p.end());

    vector<int> ans(p.size(), -1);

    

  

    build(A.size());

    

    for(int i=0;i<n;i++)

    {


        int pos = findEmpty(p[i].second + 1);

        

   

        ans[pos] = p[i].first;

        


        fill(pos);

    }

    return ans;

}

