#include <stdio.h>
#include <stdbool.h>

#define MAX 100

bool isBalanced(char s[]) 
    {
        char st[MAX];
        int top = -1;

        for (int i=0;s[i]!='\0';i++)
            {  
                if (s[i]=='('||s[i]=='{'||s[i]=='[') 
                    {
                        st[++top] = s[i];
                    }
                else
                    {
                        if (top == -1) return false;
                        char topChar = st[top];
                        if ((s[i] == ')' && topChar != '(') ||
                            (s[i] == '}' && topChar != '{') ||
                            (s[i] == ']' && topChar != '[')) {
                            return false;
                        }
                        top--;
                    }
            }

        return (top == -1);
    }

int main() {
    char s[] = "{[()]}";

    if (isBalanced(s)) printf("Yes!!! Balanced.\n");
    else printf("No!!!\n");

    return 0;
}