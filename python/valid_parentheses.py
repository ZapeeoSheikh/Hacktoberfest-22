'''
A program to check whether the string has a matching open and close parentheses.
'''

pairs = [
    ('(', ')'),
    ('{', '}'),
    ('[', ']')
]
opening_brackets = [x[0] for x in pairs]
closing_brackets = [x[1] for x in pairs]

def get_closing_bracket(s: str) -> str:
    return closing_brackets[opening_brackets.index(s)]

def get_opening_bracket(s: str) -> str:
    return opening_brackets[closing_brackets.index(s)]
    
def is_valid(s: str) -> bool:
    stack = []
    for bracket in s:
        if bracket in opening_brackets:
            stack.append(bracket)
            continue
            
        if bracket in closing_brackets:
            if len(stack) == 0: return False
            if stack[-1] != get_opening_bracket(bracket): return False
            stack.pop()
            continue
        
    return len(stack) == 0

if __name__ == '__main__':
    example_string = "{{}}"
    print(f"is {example_string} valid? {is_valid(example_string)}")