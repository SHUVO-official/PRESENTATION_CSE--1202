# *PRESENTATION_CSE-1202*
# Author & Instructor Information

## Student Details
| Field        | Information           |
|--------------|-----------------------|
| Name         | MARUF HASAN SHUVO     |
| Roll Number  | 250 10 20 22          |
| University   | University of Barishal|
| Course       | CSE-1202 (Data Structures Lab) |

## Instructor Details
| Field        | Information                          |
|--------------|--------------------------------------|
| Name         | Md. Samsuddoha                       |
| Designation  | Assistant Professor                  |
| Department   | Computer Science & Engineering (CSE) |
| University   | University of Barishal               |

## Codeforces 130H – Balanced Brackets

**Problem Description:**
You are given a string consisting only of the characters `'('` and `')'`.  
Your task is to determine whether the string is balanced.

**Definition of Balanced:**
- Every opening bracket `'('` must have a corresponding closing bracket `')'`.
- Brackets must close in the correct order (no crossing or mismatched pairs).
- At the end of traversal, no unmatched brackets should remain.

**Examples:**
- Input: `()()` → Output: Balanced
- Input: `(())` → Output: Balanced
- Input: `(()` → Output: Not Balanced
- Input: `())(` → Output: Not Balanced

**Constraints:**
- String length can be up to *n* (depending on problem statement).
- Time complexity should ideally be **O(n)** using a stack.

<img width="1284" height="855" alt="image" src="https://github.com/user-attachments/assets/d1cbc1be-71ce-4db4-a113-9e8fe196affb" />
<img width="1275" height="857" alt="image" src="https://github.com/user-attachments/assets/94c4d35c-7ef5-4ed9-98a9-8296f000b0e4" />
<img width="1281" height="858" alt="image" src="https://github.com/user-attachments/assets/e1f54bed-37f7-4842-8de5-6b352d7fdd29" />
## LeetCode 20 – Valid Parentheses (Alternative to Codeforces 130H)

**Problem Description:**
You are given a string containing the characters `'('`, `')'`, `'{'`, `'}'`, `'['`, and `']'`.  
Your task is to determine whether the input string is valid.

**Definition of Valid:**
- Every opening bracket must be closed by the same type of bracket.
- Brackets must close in the correct order.
- No unmatched brackets should remain at the end.

**Examples:**
- Input: `()` → Output: Valid 
- Input: `()[]{} ` → Output: Valid 
- Input: `(]` → Output: Not Valid 
- Input: `([)]` → Output: Not Valid 
- Input: `{[]}` → Output: Valid 

**Constraints:**
- String length can be up to *n* (depending on problem statement).
- Time complexity should ideally be **O(n)** using a stack.

---

## 🛠 Approach (Using Stack)
- Push opening brackets (`(`, `{`, `[`) onto the stack.
- When encountering a closing bracket:
  - If the stack is empty → invalid.
  - If the top of the stack matches the closing bracket → pop.
  - Otherwise → invalid.
- At the end, if the stack is empty → the string is valid.




