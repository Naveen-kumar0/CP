class Test{
    boolean isValid(String s){
        Stack<Char> st=new Stack<Char>();
        for(int i=0;i<s.length;i++)
        {
            if(s[i]=='['|| s[i]=='{'||s[i]=='(' ) 
            {
                st.push(s[i]);
            }
            else
            {
                if(s[i]==']'&& st.top()=='[')
                {
                    st.pop()
                }
                else if(s[i]=='}'&& st.top()=='{')
                {
                    st.pop()
                }
                else if(s[i]==')' && st.top()=='(' )
                {
                    st.pop()
                }
            }
        }
        if(st.empty())
        return true
        else
        return false
    }
}
class ValidParantheses{
    String s="()[]{}"
    System.out.println(new Test().isValid(s));
}