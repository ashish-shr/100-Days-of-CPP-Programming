# ⚡Memory allocation for an object

- Before using a member of a class, it is necessary to allocate the required memory space to that member.
- The way the memory space for data members and member functions is allocated is different regardless of the fact that both data members and member functions belong to the same class.
- The memory space is allocated to the data members of a class only when an object of the class is declared, and not when the data members are declared inside the class.
- Since a single data member can have different values for different objects at the same time, every object declared for the class has an individual copy of all the data members.
- On the other hand, the memory space for the member functions is allocated only once when the class is defined.
- In other words, there is only a single copy of each member function, which is shared among all the objects
  ### <img src = "1_Memory_allocation_for_an_object.png">
