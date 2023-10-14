vector<int> Solution::powerfulDivisors(vector<int> &a) {
    int maele=0;
    for(int i=0; i<a.size(); i++){
        maele=max(maele, a[i]);
    }
    const int N=maele+1;
    int minprim[N];
    minprim[0]=0;
    minprim[1]=0;
    vector<int> prime;
    for(int i=2; i<N; i++){
        minprim[i]=i;
    }
    for(int i=2; i<N; i++){
        if(minprim[i]==i){
            int b=minprim[i];
            prime.push_back(b);
            for(int n=2; n*b<N; n++){
                minprim[n*b]=min(minprim[n*b], i);
            }
        }
    }
    vector<int> pre(maele+1, 0);
    for(int i=1; i<=maele; i++){
        int num=i;
        bool ans=true;
        while(num>1){
            int co=0;
            int minp=minprim[num];
            while(num%minp==0){
                num/=minp;
                co++;
            }
            if((co&(co+1))!=0) ans=false;
        }
        if(ans) pre[i]=1;
    }
    for(int i=1; i<maele+1; i++) pre[i]+=pre[i-1];
    vector<int> ans;
    for(int i=0; i<a.size(); i++){
        ans.push_back(pre[a[i]]);
    }
    return ans;
}
