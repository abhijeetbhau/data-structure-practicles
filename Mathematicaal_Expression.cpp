#include <iostream> 
#include <stack> 
using namespace std; 
// Function to evaluate postfix expression 
 
 
 
 
 
 
 
int evaluatePostfix(string exp) { 
    stack<int> s; 
 
    for (int i = 0; i < exp.length(); i++) { 
 
        // If operand, push into stack 
        if (isdigit(exp[i])) { 
            s.push(exp[i] - '0'); 
        } 
        else { 
            int val1 = s.top(); 
            s.pop(); 
            int val2 = s.top(); 
            s.pop(); 
 
            switch (exp[i]) { 
                case '+': s.push(val2 + val1); break; 
                case '-': s.push(val2 - val1); break; 
                case '*': s.push(val2 * val1); break; 
                case '/': s.push(val2 / val1); break; 
            } 
        } 
    } 
    return s.top(); 
} 
 
int main() { 
    string exp = "23*54*+9-"; 
 
    cout << "Postfix Expression: " << exp << endl; 
    cout << "Result: " << evaluatePostfix(exp); 
 
    return 0; 
} 