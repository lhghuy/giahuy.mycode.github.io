public class Main {
    public static boolean bracketPair(String str) {
        Stack<Character> stack = new Stack<>();
        for (int i = 0; i < str.length(); i++) {
            char c = str.charAt(i);
            if (c == '(' || c == '{' || c == '[' || c == '"' || c == '\'' || c == '<') {
                stack.push(c);
            } else if (c == ')' || c == '}' || c == ']' || c == '"' || c == '\'' || c == '>') {
                if (stack.isEmpty()) {
                    return false;
                }
                char top = stack.pop();
                if ((c == ')' && top != '(') || (c == '}' && top != '{') || (c == ']' && top != '[')
                        || (c == '"' && top != '"') || (c == '\'' && top != '\'') || (c == '>' && top != '<')) {
                    return false;
                }
            }
        }
        return stack.isEmpty();
    }
}