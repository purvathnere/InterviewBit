public class Solution {
    public String simplifyPath(String A) {
        String[] paths = A.split("/+");
        StringBuilder absolutePath = new StringBuilder();
        Stack<String> stack = new Stack<>();
        for(String path : paths){
            if(path.equals(".") || path.trim().length() <= 0)
                continue;
            else if(path.equals("..")){
                if(!stack.isEmpty()){
                    stack.pop();
                }
            }else{
                stack.push(path);
            }
        }
        
        while(!stack.isEmpty()){
          absolutePath.insert(0, "/"+stack.pop());
        }
        return (absolutePath.length() == 0) ? "/" : absolutePath.toString();
    }
}
