#ifndef LIST_HPP
#define LIST_HPP

/*
    This header file defines a Interger List Class.
*/

class IntList
{
  private:
    // Struct used for IntList.
    struct Node { int data; Node *next; } * head;
  public:
    IntList();                              // Constructor for the Class IntList.
    ~IntList();                             // Destructor for the Class IntList.
    IntList(const IntList &rhs);            // Copy Constructor for the Class IntList.
    IntList &operator=(const IntList &rhs); // Assignment Overload for Objects of Class.
    bool empty();                           // Return True or False if list empty or not.
    int &front();                           // Return Refrence to First element of IntList.
    void push_back(int value);              // Add an Element at the End of IntList.
    void push_front(int value);             // Add and element to the front of IntList.
    void pop_back();                        // Remove last element from IntList.
    void pop_front();                       // Remove first element from IntList.
    unsigned int size();                    // Calculate the size of IntList and Return it.
    void remove(int value);                 // Remove the first matched value from IntList.
    bool search(int value);                 // Return True or False if Passed value Found.
    // Iterator Class for IntList.
    class Iterator
    {
      private:
        Node *curr;
      public:
        Iterator();                               // Constructor for the Class Iterator.
        ~Iterator() = default;                    // Destructor for the Class Iterator.
        Iterator(Node *rhs);                      // Constructor with Parameter of Node type.
        Iterator &operator=(const Iterator &rhs); // Assignment Overload for Object of Class.
        int &operator*() const;                   // Reference Overload to Get actual value.
        Iterator operator++(int);                 // Increment Overload to Point next element.
        bool operator!=(const Iterator &rhs);     // Not Equal Overload to Campare class Objects.
    };
    Iterator begin() const;                 // Begining of the IntList
    Iterator end() const;                   // Ending of the IntList. 
};

#endif