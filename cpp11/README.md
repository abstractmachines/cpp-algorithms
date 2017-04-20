# C++11

We will be using C++11 and the C++ Standard Library for our algorithms.

This section includes information on how to use modern C++ for algorithm
problem solving.

## Assertions versus Exceptions and error handling : When to use

**Exceptions and error handling are for situations in which control flow
interruptions are minimized and in which control flow happens as smoothly
as possible. Recovery - or reporting errors nicely to user - is the goal.**

**Assertions crash your program.**

Assertions are used to check that a program or API is operating properly.

## Strings and streams

### std::cin

returns an istream object. [MSDN](https://msdn.microsoft.com/en-us/library/71t65ya2.aspx)

**EOFBit flag and cin.clear()**

cin looks for the end of file "signal" and terminates in response to EOF (upon discovering delimiter and/or n characters).

If that EOF is not discovered, cin sets an EOF bit flag. Use .clear() to clear that bit for future use of cin.

References:

•[Quora](https://www.quora.com/Can-you-explain-cin-ignore-and-cin-clear-for-C++-When-is-it-appropriate-to-use-these-How-do-they-effect-the-next-cin)

### std::stringstream

Associates a string with a stringstream object.

### Use Cases: Stringstream over cin

#### Use Case: for converting strings to numerical types
Why would I use a stringstream instead of cin?

Use Case: When you want to convert strings into numerical types.

Stringstream notable member functions include:

**Getter str()**

Get (return) the contents of its buffer in string type.

**Setter str(string)**

Set the the contents of the buffer with the string argument.


[Here is an example of how to use string streams, from Stack Overflow.](http://stackoverflow.com/questions/20594520/what-exactly-does-stringstream-do) :

```
std::ostringstream os;

os << "dec: " << 15 << " hex: " << std::hex << 15 << std::endl;

std::cout << os.str() << std::endl;
```
That's it.


## Const correctness

This is material taken from lectures with Michael Hoffman at Oregon Institute of Technology's Software Engineering in C++ courses. I've paraphrased it, but really this is Michael's work. He is definitely an authoritative source on C/C++.

Const is primarily used to prevent mutation; it can also be used for
polymorphism (function overloading).

### Const position and ordering : always read C++ right to left

The tradition is to place const last, and this is echoed in how const member functions are declared. However, placing const last isn't the only option.

[from Stack Overflow](http://stackoverflow.com/questions/15157113/position-of-const-keyword)

Read the rules from right to left:

`void * const ptr1;`
myPointer1 is a const pointer to void.

`void const *ptr2;`
myPointer2 is a pointer to a const void.

`const void *ptr3;`
myPointer3 is a pointer to a void const. This is the exact same thing as ptr2, the only difference is syntax.

`Object const * ptr4;`
ptr4 is a pointer to a const Object.

`Object const * const ptr5;`
ptr5 is a const pointer to a const Object.

```
void afunction(const char * const str1, char * const str2)
```
str1 is a const pointer to a const char. str2 is a const pointer to a char.

### Const variables / generics
```
const std::array<int, RANGE> arr const = {5,4,7,9,0,1,2,3,8,6};
```

### Const member functions : const must be declared on the right
```
class someClass
{
	public:
	int someInt() const;
}
```

### Const and polymorphism

Two member functions can be exactly the same except for the `const` keyword, and hence overloaded.

The function that is invoked depends on the const-ness of the calling object/context.

### Member-wise (bit-wise) constness
What: All data members must be preserved

How: **Member functions** declared with the `const keyword`.

### Logical constness
What: Objects can appear unchanged externally and be somewhat opaque, as implementations can alter the data for member variables as needed. This is generally done with efficiency in mind.

How: **Member variables** declared with the `mutable keyword`.

Member variables declared with the `mutable keyword` can be altered in const member functions!
