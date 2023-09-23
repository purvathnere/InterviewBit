vector<vector<string> > Solution::findLadders(string s, string target, vector<string> &d) {
   
   set< string > st;
   
   for(int i=0;i<d.size();i++)
   {
       st.insert(d[i]);
   }
   
   queue< vector<string>> q;
   
   vector<vector<string>> res;
   
   if(s==target)
   {
       return {{s}};
   }
   
   q.push({s});
   
   bool f=false;
   
   while(!q.empty())
   {
       int sz=q.size();
        unordered_set<string>visited;
       
       while(sz--)
       {
           vector<string> str=q.front();
           q.pop();
           
           int m=str.size();
           string last=str[m-1];
           
           if(str[m-1]==target)
           {
               res.push_back(str);
               f=true;
           }
           
           for(int i=0;i<last.size();i++)
           {
               char ch=last[i];
               string p=last;
               for(int j=0;j<26;j++)
               {
                   p[i]='a' + j;
                   
                   if(last!=p && st.find(p)!=st.end())
                   {
                       vector<string> r=str;
                       r.push_back(p);
                       visited.insert(p);
                       q.push(r);
                   }
               }
           }
       }
       
       for(auto x : visited)
       {
           if(st.find(x)!=st.end())
           {
               st.erase(x);
           }
       }
       
       if(f==true)
       {
           return res;
       }
   }
   
   return res;
   
}
