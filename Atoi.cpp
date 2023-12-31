public class Solution {
	public int atoi(final String A) {
	    int idx;
	    long num;
	    int n = A.length();
	    boolean sign = true;
	    
	    idx = 0;
	    
	    while (idx < n && A.charAt(idx) == ' ')
	        idx++;
	        
	    if (idx == n)
	        return 0;
	    
	    if (A.charAt(idx) == '-') {
	        sign = false;
	        idx++;
	    } else if (A.charAt(idx) == '+') {
	        idx++;
	    }
	    
	    num = 0;
	    
	    while (idx < n && A.charAt(idx) >= '0' && A.charAt(idx) <= '9') {
	        
	        num = Math.abs(num);
	        num = num * 10 + A.charAt(idx) - '0';
	        
	        if (!sign)
	            num = -num;
	        
	        if (num > Integer.MAX_VALUE)
	            return Integer.MAX_VALUE;
	            
	        else if (num < Integer.MIN_VALUE)
	            return Integer.MIN_VALUE;
	            
	        idx++;
	            

	    }
	    
	    return (int) num;
	    
	}
}
