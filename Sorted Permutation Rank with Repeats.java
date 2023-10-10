public class Solution {
    static long facts[];
    static int MOD = 1000003;
    static{
        int N = (int)1e6;
        facts = new long[N + 1];
        facts[0] = 1;
        for(int i = 1;i <= N;i++){
            facts[i] = (facts[i - 1] * i) % MOD;
        }
    }
    
    static long powMod(long base, long exp) {
        long ans = 1;
        for (; exp != 0;) {
            if ((exp & 1) == 1) {
                ans *= base;
                ans %= MOD;
            }
            base *= base;
            base %= MOD;
            exp = exp >> 1;
        }
        return ans;
    }

    static long mulMod(long a, long b) {
        long ans = 0;
        for (; b != 0;) {
            if ((b & 1) == 1) {
                ans += a;
                ans %= MOD;
            }
            a += a;
            a %= MOD;
            b >>= 1;
        }
        return ans;
    }

    static long invMod(long num) {
        return powMod(num, MOD - 2); // only works if MOD is prime
    }

    static long divMod(long a, long b) {
        return mulMod(a, invMod(b));
    }
    
    TreeMap<Character,Integer> mp;
    long helper(char c){
        int idx = 0;
        for(Map.Entry<Character,Integer> ent : mp.entrySet()){
            if(ent.getKey() == c) break;
            ++idx;
        }
        int sum = 0;
        long dm = 1;
        for(Map.Entry<Character,Integer> ent : mp.entrySet()){
            sum += ent.getValue();
            dm = mulMod(dm,facts[ent.getValue()]);
        }
        long tmp = 0;
        int i = 0;
        for(Map.Entry<Character,Integer> ent : mp.entrySet()){
            if(i >= idx) break;
            tmp = (tmp + divMod(1,divMod(dm,ent.getValue()))) % MOD;
            i++;
        }
        mp.put(c,mp.get(c) - 1);
        if(mp.get(c) == 0) mp.remove(c);
        return mulMod(facts[sum - 1],tmp);
    }
    public int findRank(String s) {
        mp = new TreeMap<>();
        int n = s.length();
        for(int i = 0;i < n;i++){
            mp.put(s.charAt(i),mp.getOrDefault(s.charAt(i),0) + 1);
        }
        long rank = 0;
        for(int i = 0;i < n;i++){
            rank = (rank + helper(s.charAt(i))) % MOD;
        }
        return (int)((rank + 1) % MOD);
    }
}
