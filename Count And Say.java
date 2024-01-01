public class Solution {
    public String countAndSay(int A) {
       
        String result = "1";
        for(int i = 1; i < A; i++){
           
            char currentChar = result.charAt(0);
            int totalReps = 0;
            String newString = "";
           
            for(int j = 0; j < result.length(); j++){
                if(result.charAt(j) == currentChar){
                    totalReps++;
                }else{
                    newString = newString.concat(String.valueOf(totalReps)+currentChar);
                    currentChar = result.charAt(j);
                    totalReps = 1;
                }  
            }
           
            //Add the last contiguous chars
            result = newString.concat(String.valueOf(totalReps)+currentChar);
        }
       
        return result;
    }
}

