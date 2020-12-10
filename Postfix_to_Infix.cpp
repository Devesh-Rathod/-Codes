#include <iostream>
#include <stack>
using namespace std;
stack <char> s;
bool isOperator(char x){
    if(x == '+' || x == '-' || x == '*' || x == '/' || x == '^') return true;
    else false;
}
int precedence(char x){
    if(x == '^') return 3;
    else if(x == '*' || x == '/') return 2;
    else if(x == '+' || x == '-') return 1;
    return -1;
}
string infix_to_postfix(string infix){
    string postfix;
    for(int i=0; i<infix.length(); i++){
        if(infix[i] >= 'a'&&infix[i] <= 'z' || infix[i] >= 'A' && infix[i] <= 'Z') s.push(infix[i]);
        else if(infix[i] == '(') s.push(infix[i]);
        else if(infix[i] == ')'){
            while (!s.empty() && s.top() != '(')
            {
                postfix += s.top();
                s.pop();
            }
            if(s.top() == '(') s.pop();
        }
        else if(isOperator(infix[i])){
            if(precedence(infix[i]) > precedence(s.top())) s.push(infix[i]);
            else if(precedence(infix[i]) == precedence(s.top()) && infix[i] == '^') s.push(infix[i]);
            else{
                
            }
        }
    }
    return postfix;
}
int main(){
    string infix_exp, postfix_exp;
    postfix_exp = infix_to_postfix(infix_exp);
    cout << "Infix Expression " << infix_exp << endl;
    cout << "Postfix Expression " << postfix_exp << endl;
    return 0;
}