vector<pair<int, int>> v;
MinStack::MinStack() {
    v.clear();
}

void MinStack::push(int x) {
    if(v.size() == 0)
    {
        v.push_back({x, x});
       
    }
    else v.push_back({x, min(x, v.back().second)});
}

void MinStack::pop() {
    if(v.size() == 0) return;
    v.pop_back();
}

int MinStack::top() {
    if(v.size() == 0) return -1;
   
    return v.back().first;
}

int MinStack::getMin() {
    if(v.size() == 0) return -1;
    return v.back().second;
}


