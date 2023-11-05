std::vector<int> Solution::allFactors(int A) {
    std::vector<int> factors;

    for (int i = 1; i*i <= A; i++) {
        if (A % i == 0) {
            factors.push_back(i);

            if (i != sqrt(A)) {
                factors.push_back(A / i);
            }
        }
    }

    std::sort(factors.begin(), factors.end());

    return factors;
}
