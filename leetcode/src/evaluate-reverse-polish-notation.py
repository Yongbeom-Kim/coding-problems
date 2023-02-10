class Solution:
    def evalRPN(self, tokens: List[str]) -> int:
        stack = []

        for token in tokens:
            if (token.isdigit() or (token != "-" and token.lstrip("-").isdigit())):
                stack.append(int(token))
                continue
            
            op2 = stack.pop()
            op1 = stack.pop()

            if (token == "+"):
                stack.append(op1 + op2)
            elif (token == "-"):
                stack.append(op1 - op2)
            elif (token == "*"):
                stack.append(op1 * op2)
            elif (token == "/"):
                stack.append(int(op1/op2))
            
        
        return stack.pop()