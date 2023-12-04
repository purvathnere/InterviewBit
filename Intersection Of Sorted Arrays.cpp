vector<int> Solution::intersect(const vector<int> &a, const vector<int> &b) {

   vector<int>res; 
   int i=0;  
   int j=0;  
   
   while(i<a.size() && j<b.size()){
       
       if(a[i]==b[j]){
           res.push_back(a[i]);
           i++;
           j++;
       }
     
       else if(a[i]<b[j]){
       
           i++;
       }
   
       else{
           j++;
       }
       
   }
    return res;
    
}
