
bool isValidIp(string ip,int length){

    if(ip.size() != length + 3) return false;

    string curr = "";

    bool hasnonZero = false;

    for(int i = 0;i<ip.size();i++){

        if(ip[i] == '.'){

            if(curr == "") return false;

            if(to_string(stoi(curr)).size() != curr.size()) return false;

            curr = "";

            continue;

        }

        curr += ip[i];

    }

    if(curr == "") return false;

    if(to_string(stoi(curr)).size() != curr.size()) return false;

    return true;

}



void GetPosIpAddress(vector<string>&pos,string &orig,int currIndex,string temp,int step){

    if(step >= 4 && currIndex != orig.size()){

        return;

    }

    

    if(currIndex == orig.size() && step == 4){

        string ip = temp.substr(1);

        if(isValidIp(ip,orig.size())){

            pos.push_back(ip);

        }

        return;

    }

    string curr = "";

    for(int i = currIndex;i<min(currIndex+3,(int)(orig.size()));i++){

        curr += orig[i];

        if(stoi(curr) < 256){

            GetPosIpAddress(pos,orig,i+1,temp + '.' + curr,step+1);

        }

    }

}


vector<string> Solution::restoreIpAddresses(string A) {

    vector<string>pos;

    GetPosIpAddress(pos,A,0,"",0);

    return pos;

}


