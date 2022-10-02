<h1>Stack and its basic Operations</h1>

First, let us see the properties of data structures that we already do know and build-up our concepts towards the stack.

-Array: Its a random-access container, meaning any element of this container can be accessed instantly

-Linked List: It's a sequential-access container, meaning that elements of this data structure can only be accessed sequentially

→ Following a similar definition,A stack is a container where only the top element can be accessed or operated upon.

*A Stack is a data structure following the LIFO(Last In, First Out) principle.*
<br />
<p align="center">
    <img width="200" src="https://s3.ap-south-1.amazonaws.com/afteracademy-server-uploads/stack-and-its-basic-operations-stack-9082f792c4d05f4e.png" alt="Material Bread logo">
</p>
<br /><br />
If you have trouble visualizing stacks, just assume a stack of books.

1.In a stack of books, you can only see the top book

2.If you want to access any other book, you would first need to remove the books on top of it

3.The bottom-most book in the stack was put first and can only be removed at the last after all books on top of it have been removed.

<p align="center">
    <img width="800" src="https://s3.ap-south-1.amazonaws.com/afteracademy-server-uploads/stack-and-its-basic-operations-operations-402bb6db2acfd56a.png" alt="Material Bread logo">
</p>


***<h3>PUSH Operation</h3>***

Push operation refers to inserting an element in the stack. Since there’s only one position at which the new element can be inserted — Top of the stack, the new element is inserted at the top of the stack.

***<h3>POP Operation</h3>***
Pop operation refers to the removal of an element. Again, since we only have access to the element at the top of the stack, there’s only one element that we can remove. We just remove the top of the stack. Note: We can also choose to return the value of the popped element back, its completely at the choice of the programmer to implement this.

***<h3>PEEK Operation</h3>***

Peek operation allows the user to see the element on the top of the stack. The stack is not modified in any manner in this operation.

***<h3>isEmpty: Check if stack is empty or not</h3>***

To prevent performing operations on an empty stack, the programmer is required to internally maintain the size of the stack which will be updated during push and pop operations accordingly. isEmpty() conventionally returns a boolean value: True if size is 0, else False.




