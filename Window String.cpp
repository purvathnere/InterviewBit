string Solution::minWindow(string A, string B) {
      map<char,int>mp;
      for(int i =0 ; i<B.size(); i++){
          mp[B[i]]++;
      }
      int x =  mp.size();
     
      map<char,int>mp1 ;
      int head = -1 ; int tail =0 ;
      int n = A.size();
      int ans = 1e9 ;
     int prev = 1e9 ;

      string res = "";
      int cnt =0 ;
     
      while(tail<n){
         
          while(head+1<n &&  cnt<x ){
             
              head++;
              if( mp.find(A[head]) != mp.end() ){
                  mp1[A[head]]++;
                  if(mp1[A[head]] == mp[A[head]]){
                      cnt++;
                  }
              }
          }

         if(cnt == x){
             if(ans> (head-tail+1)){
                 ans = head-tail+1 ;
                 res = A.substr(tail,head-tail+1);
                 prev = tail ;
                //  forans[res] = tail ;
             }
             else if(ans == (head-tail+1)){
                  string temp = A.substr(tail,head-tail+1);
                  if(prev > tail ){ res = temp ; prev = tail ;}
                 
             }
         }
         
          if(head>=tail){
              if(mp.find(A[tail]) != mp.end()){
                  mp1[A[tail]]--;
                  if(mp1[A[tail]] < mp[A[tail]])cnt--;
              }
              tail++;
          }
          else{
              tail++;
              head = tail-1 ;
          }
      }
     
      return res ;
     
}

