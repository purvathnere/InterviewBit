string leftJustify(int i,int j,vector<string> &A,int maxLength)
{
    string result = "";
    for(int idx = i;idx<=j-1;idx++)
    {
        result +=A[idx];
        if(idx!=j-1)
        result+=" ";
    }
    while(result.size()< maxLength)
    {
        result+=" ";
    }
    return result;
}




string middleJustify(int i,int j,vector<string> &A,int maxLength,int lineLength)
{
    int remaingSpaces = maxLength - lineLength;
    int noOfWords = j - i;
    int spacesNeeded = noOfWords-1;
    int Spaces = remaingSpaces / spacesNeeded;
    int extraSpaces = (remaingSpaces % spacesNeeded);
    //cout<<remaingSpaces<<" "<<noOfWords<<" "<<Spaces<<" "<<extraSpaces<<endl;
   
    string result ="";
    for(int idx = i;idx<=j-2;idx++)
    {
        result+=A[idx];
        int actualSpaces = Spaces + ((extraSpaces-- > 0)?1:0);
        for(int k=0;k<actualSpaces;k++)
        {
            result+=" ";
        }
    }
    result+=A[j-1];
    return result;
   
   
}

vector<string> Solution::fullJustify(vector<string> &A, int B) {
    int n = A.size();
    int i = 0;
    vector<string> result;
    while(i<n)
    {
        //cout<<i<<" ";
        int j = i + 1;
        int lineLength = A[i].size();
        while(j < n and (lineLength + (int)A[j].size() + j - i) <= B)
        {
            lineLength+=(int)A[j].size();
            j++;
        }
        // cout<<j<<" ";
        // cout<<lineLength<<endl;
       
        if(j-i==  1 || j==n)
        {
            result.push_back(leftJustify(i,j,A,B));
        }
        else
        {
            result.push_back(middleJustify(i,j,A,B,lineLength));
        }
        i=j;
    }
   
    return result;
}
