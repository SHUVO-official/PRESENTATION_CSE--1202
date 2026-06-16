#include <stdio.h>
#include <stdbool.h>

#define MAX 100

bool isBalanced(char s[]) 
    {
        char st[MAX];
        int top = -1;

        for(int i = 0; s[i] != '\0'; i++)
            {
                if(s[i] == '(') 
                    {
                        st[++top] = '(';
                    } 
                else if(s[i] == ')')
                    {
                        if(top == -1) return false;
                        if(st[top] == '(') top--;
                        else return false;
                    }
            }
        return (top == -1);
    }

int main() 
    {
        char s[] = "(()(()))()";

        if(isBalanced(s)) printf("Yes!");
            
        else printf("Not!");
        
        return 0;
    }