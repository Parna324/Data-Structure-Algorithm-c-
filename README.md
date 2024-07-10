Functions in C++
Standard Template Library (STL) Overview
Containers, algorithms, and iterators
Offers predefined and efficient data structures and algorithms
Vector and Array Operations
Declare, manipulate, and print vectors using iterators and loop functions
Vector Declaration
vector<int> vec;
Vector Manipulation
Insert: vec.push_back(value)
Access: vec[index]
Size: vec.size()
Vector Printing
Using iterators:
for (vector<int>::iterator it = vec.begin(); it != vec.end(); ++it) {
  cout << *it << " ";
}
Other Container Data Structures
List, deque, stack, queue, priority queue, set
Key Properties
List: Doubly linked list
Deque: Double-ended queue
Stack: Last-in-first-out (LIFO)
Queue: First-in-first-out (FIFO)
Priority queue: Element with highest priority is removed first
Set: Stores only unique elements, keeps elements sorted
Deleting and Inserting Elements
Erase: vec.erase(position) or vec.erase(range.begin(), range.end())
Insert: vec.insert(position, value)
Vector Iterators
Provide a way to traverse and access vector elements
Types: vector<int>::iterator, vector<int>::const_iterator
Dictionary Order Sequences
Items are ordered based on their values
Used in associative containers like set and map
Skeleton of a C++ Code
#include <iostream>
using namespace std;

int main() {
  // Code here
  return 0;
}
Using Namespace std
Brings all standard library elements into the current scope
Use using namespace std; to enable it
Utility Library: Pair
Store two elements of different types
Create: pair<type1, type2> name(value1, value2)
Bit Manipulation: Built-in Popcount Function
Counts the number of set bits in an integer
Use popcount(number)
Iterators for Set and Other Containers
Set iterators: set<int>::iterator, set<int>::const_iterator
Access and manipulate elements in a set
Map and Unordered Map
Implement key-value pairs
Map: Stores elements in a sorted order (dictionary order)
Unordered map: Stores elements in an unsorted order (hash table)
Vectors as a Container
Dynamic array implementation
Efficient storage and manipulation
Algorithms: Sorting, Partial Sorting, Custom Comparison
Sort: sort(vec.begin(), vec.end())
Partial sort: partial_sort(vec.begin(), vec.end(), n)
Custom comparison: Pass a function as an argument to sort
Unique Characteristics of Set
Only unique elements are stored
Elements are kept sorted
Vector Iterators
Overview
STL provides various types of iterators to traverse and manipulate the elements of different containers.
Vector iterators are a type of random-access iterator that can be used to access the elements of a vector.
Declaring Vector Iterators
To declare a vector iterator, use the following syntax:
vector<type> vect;
vector<type>::iterator it;
it = vect.begin();
Manipulating Vector Elements using Iterators
Use the following functions to manipulate vector elements using iterators:
it = vect.begin() : returns an iterator pointing to the first element of the vector.
it = vect.end() : returns an iterator pointing to the theoretical end of the vector.
it++ or ++it : moves the iterator to the next element.
it-- or --it : moves the iterator to the previous element.
*it : dereferences the iterator to access the element it points to.
it1 = it2 + n : moves the iterator it1 n positions ahead of it2.
it1 = it2 - n : moves the iterator it1 n positions behind it2.
Printing Vector Elements using Iterators
To print the elements of a vector using iterators, use the following code snippet:
vector<type> vect;
for(vector<type>::iterator it = vect.begin(); it != vect.end(); it++)
{
    cout << *it << " ";
}
Deleting and Inserting Elements using Iterators
Use the following functions to delete and insert elements at specific positions in a vector:
it = vect.erase(it) : deletes the element pointed to by the iterator and returns an iterator pointing to the next element.
vect.insert(it, value) : inserts a new element with the specified value before the element pointed to by the iterator.
Vector Iterators in Comparison to Set Iterators
Vector iterators are random-access iterators, which allow for faster traversal and manipulation of elements compared to set iterators, which are bidirectional iterators.
However, set iterators provide faster lookup and insertion due to the inherent structure of the set data structure.
References
"Iterators - C++ Reference"
"Vector Iterator - C++ Reference"
"Set Iterator - C++ Reference"