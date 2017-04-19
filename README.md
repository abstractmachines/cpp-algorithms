# Using the C++ Standard Library for algorithms

A practical guide.

## The C++ Standard Library
The C++ Standard Library, or stdlib, is based on the old-school STL's (or Standard Template
Library) conventions. The library is currently part of the ISO standard of C++,
so it's easy to use.

### Why Use It? Performance.
The C++ Standard Library has performance requirements. For example, C++ std::sort() is guaranteed worst case O(n log n), whereas C's qsort() is based on a variation of Quicksort, which is worst case O(n<sup>2</sup>).

### Why Use It? Generics.
The C++ Standard Library has generics and containers similar to Java Collections, including iterators, to handle multiple container types with safe operations and an API of sorts that's easy to remember.

See also:
- [auto](http://en.cppreference.com/w/cpp/language/auto)
- [auto (when to use)](http://stackoverflow.com/questions/6900459/the-new-keyword-auto-when-should-it-be-used-to-declare-a-variable-type)
- [C++ Containers Library](http://en.cppreference.com/w/cpp/container)


### Usage (don't pollute the global namespace)
Including the standard namespace (not recommended, due to pollution of global
	namespace):
`using namespace std;`

Or, namespacing each std:: use (recommended as it reduces pollution of the
	global namespace):
`std::stuff;`



### Algorithmic Complexity Table


| Time          | Notation              | Notes            |
| ---------------- |:------------------:| ---------------------:|
| Constant Time    | O(1)               | Best.** Doesn't rely on input. |
| Logarithmic Time | O(log n)           | Really good; logarithms are small. |
| Linearithmic Time _where log n < 1_   |  O(n log n)  | Smaller than n. |
| Linear Time      | O(n)               | Not bad for small data; proportionate to n. |
| Linearithmic Time _where log n > 1_   |  O(n log n)  | Larger than n. |
| Exponential Time | O(n<sup>2</sup>)   | Terrible; an exponential curve. |
| Power of 2       |  O(2<sup>n</sup>)  | Even worse than exponential. |
| Bad Stuff        |  O(n 2<sup>n</sup>)| Nooooo. |
