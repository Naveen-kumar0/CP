
import java.util.Stack;
class Test{
    boolean isValid(String s){
        Stack<Character> st=new Stack<Character>();
        for(int i=0;i<s.length();i++)
        {
            if(s.charAt(i)=='['|| s.charAt(i)=='{'||s.charAt(i)=='(' ) 
            {
                st.push(s.charAt(i));
            }
            else
            {
                if(s.charAt(i)==']'&& st.empty()==false)
                {
                    if(st.peek()=='[')
                    st.pop();
                }
                else if(s.charAt(i)=='}'&& st.empty()==false)
                {
                    if(st.peek()=='{')
                    st.pop();
                }
                else if(s.charAt(i)==')' && st.empty()==false )
                {
                    if(st.peek()=='(')
                    st.pop();
                }
            }
        }
        if(st.empty())
        return true;
        else
        return false;
    }
}
class Validparantheses{
    public static void main(String args[]){
    Test t=new Test();
    String s="()[]{}]]";
    boolean ans=t.isValid(s);
    System.out.println(ans);
    }
}