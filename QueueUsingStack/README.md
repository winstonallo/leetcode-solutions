## Implementation

The MyQueue class uses 2 int stacks (**oldTop** & **newTop**).

**newTop** stores newly added elements - **oldTop** is used for dequeue operations.

When calling **pop()** or **peek()** and **oldTop** is empty, shift elements from **newTop** to **oldTop**, reordering the elements to keep the first-in-first-out order of a queue.