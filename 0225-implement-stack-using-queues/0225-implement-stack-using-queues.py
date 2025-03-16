class MyStack(object):
    def __init__(self):
        self.stack = []  # Using a list instead of LifoQueue

    def push(self, x):
        """
        :type x: int
        :rtype: None
        """
        self.stack.append(x)  # Append to list (push)

    def pop(self):
        """
        :rtype: int
        """
        if self.stack:
            return self.stack.pop()  # Pop last element
        else:
            raise IndexError("Pop from an empty stack")

    def top(self):
        """
        :rtype: int
        """
        if self.stack:
            return self.stack[-1]  # Get last element without removing it
        else:
            raise IndexError("Top from an empty stack")

    def empty(self):
        """
        :rtype: bool
        """
        return len(self.stack) == 0  # Returns True if stack is empty

# Example Usage
# stack = MyStack()
# stack.push(10)
# stack.push(20)
# print(stack.top())  # Output: 20
# print(stack.pop())  # Output: 20
# print(stack.top())  # Output: 10
# print(stack.empty())  # Output: False
# stack.pop()
# print(stack.empty())  # Output: True
