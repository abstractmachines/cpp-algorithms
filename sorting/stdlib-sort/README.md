
### C++ std::sort()

Part of the C++ Standard Library.

Recall C's polymorphic sort **[qsort()](https://en.wikipedia.org/wiki/Qsort)** function which is based on Quicksort and uses function pointers.

Quicksort is known as a very inefficient algorithm because it has an exponential worst case.


#### This is where the C++ std::sort comes in; it guarantees a time complexity of O(n log n)!


#### Usage of std::sort()

- Data structure: int
- Standard Library Sequence Container: Array

Basic sort, with the beginning and end of the container specified (defaults to ascending order):

```
std::sort(container.begin(), container.end());
```

This does the same thing:

```
std::sort(container.begin(), container.end(), std::greater<int>);
```

Note the std::greater<type> and related functions which can be used with std:

Also notable are:
- container iterators: for loops

 auto data type

- container iterators: built in Iterators

- container sort functions

 using methods for containers:

 sort (container.begin(), container.end(), sort_by)
