# **C - Stacks, Queues - LIFO, FIFO**

### **monty**

This is a project for Alx SE training school. The project ams to create an interpreter for monty bytecodes files.

### ***Aim for Student***

*At the end of the project, student should be able to:*

* What do LIFO and FIFO mean
* What is a stack, and when to use it
* What is a queue, and when to use it
* What are the common implementations of stacks and queues
* What are the most common use cases of stacks and queues
* What is the proper way to use global variables
#
**Compilation & Output**

Code was compiled this way:

*gcc -ggdb -Wall -Werror -Wextra -pedantic -std=c89 *.c -o monty*

All output printed on stdout
All error message printed on stderr

### **Usage**

$ cat -e bytecodes/00.m

push 1$

push 2$

push 3$

pall$

$ ./monty bytecodes/00.m

3

2

1
#
### **opcode**
- push, pall
	* implement push/update and print
- pint
	* implement prints the value at the top of the stack
- pop
	* implement delete of value at the top of the stack
- swap
	* swaps the top two elements of the stack
- add
	* adds the top two elements of the stack.
- sub
	* subtracts the top element of the stack from the second top element of the stack.
- nop
	*  doesn’t do anything.
- div
	*  divides the second top element of the stack by the top element of the stack
- mul
	* multiplies the second top element of the stack with the top element of the stack
- mod
	* get remainder from dividing the second top element of the stack by the top element of the stack
- '#'
	* treat line as a comment (don’t do anything).
- pchar
	*  prints the ascii value of the char at the top of the stack
- pstr
	* prints the ascii value of the string starting at the top of the stack
- rotl
	*  rotates the stack to the top.
	*  The top element of the stack becomes the last one, and the second top element of the stack becomes the first one
- rotr
	*  rotates the stack to the bottom.
	*  The last element of the stack becomes the top element of the stack
- queue
	* sets the format of the data to a queue (FIFO).
- stack
	* sets the format of the data to a stack (LIFO). This is the default behavior of the program.
- brainfuck
	* prints "School"
#
**The Monty language**

Monty 0.98 is a scripting language that is first compiled into Monty byte codes (Just like Python). It relies on a unique stack, with specific instructions to manipulate it. The goal of this project is to create an interpreter for Monty ByteCodes files.

**Monty byte code files**

Files containing Monty byte codes usually have the .m extension. Most of the industry uses this standard but it is not required by the specification of the language. There is not more than one instruction per line. There can be any number of spaces before or after the opcode and its argument. Monty byte code files can contain blank lines (empty or made of spaces only, and any additional text after the opcode or its required argument is not taken into account. Lines beginning with hash (#) are overlooked i.e no action will be taken.
:blush::wink:
