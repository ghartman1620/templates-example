// templates.cpp
// An example file demonstrating use of templates in classes and methods.
// Contains some sections with code to be filled in by students paired programming.
// Author: Gabriel Hartman

#include <vector>
#include <iostream>

// A very simple container class. Demonstrates the sorts of methods necessary
// To create a for(auto& thing: container) sort of loop on a container.
// Uses a std::vector for data storage. This isn't the sort of thing you'd do
// in a useful program (you'd just use std::vector), but is intended for teaching purposes.

template <typename T>
class container {
private:
  std::vector<T> arr;
  
public:
  // A very simple inner iterator class.
  // Implemented using a index pointer into arr.
  
  class iterator{
  private:
    T* ptr;
  public:
    iterator(T* p): ptr(p) {};


    // 2.Once you've done #1 below, try to build the program again. What errors do you get now?
    // If you wrote begin and end such that they'll compile, it will now complain about some missing
    // methods in class container<int>::iterator. Here they are. Your next task is to complete
    // these methods.

    /*
    T& operator*() {
      
    }
    iterator& operator++() {
      
    }
    bool operator!=(iterator other) {
      
    }
    */
  };
  container(int len): arr(len) {};
  container(): arr(0) {};
  void append(T thing) {
    arr.push_back(thing);
  };

  // 1. These two methods are commented out. What happens when you try to build the program without them?

  // Once you've seen the messages resulting from this commented-out build, try to write these methods.
  // notice that iterator uses a pointer into the array. Vector functions much like a C-array, so you can
  // freely get a pointer into a vector for your iterators without trouble.
  /*
  iterator begin() {

  }
  iterator end() {

  }
  */
};



int main() {
  container<int> stuff{};
  stuff.append(10);
  stuff.append(20);
  stuff.append(30);

  // 3. Finally, now that you've completed the container and iterator classes, rewrite this loop in a few ways:
  // - Do not use the : for loop style. Instead, write the entire loop explicitly, calling all methods this loop calls.
  //   Add print statements to each of the methods in container and iterator, and ensure that they are all called.
  // - Print the contents of container in reverse. You will need to add a new set of methods to container, and some
  //   mechanism to iterator for the operator++ to move the pointer backwards for a reverse iterator. You might choose to use
  //   another iterator class.

  for(const auto& thing: stuff) {
    std::cout << thing << std::endl;
  }
}
