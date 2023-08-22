# ⚡Structures, Unions and Enums

## Structure

- A structure is a user-defined data type used to group items of possibly different types into a single type.
- Structures in C++ can contain two types of members:
  - <b>Data Member</b>: We can create a structure with variables of different data types.
  - <b>Member Functions</b>: Along with variables, we can also include functions inside a structure declaration.

## How to create a structure

- The 'struct' keyword is used to create a structure.

#### Syntax:

```cpp
   struct structure_name
   {
    member1;
    member2;
    member3;
    .
    .
    memberN;
  };
```

## Structure using typedef

- 'typedef' is a keyword that is used to assign a new name to any existing data-type.

#### Syntax:

```cpp
  typedef struct struct_name
  {
    member1;
    member2;
    member3;
    .
    .
    memberN;
  }new_name;
```

## Union

- A union is a user-defined type in which all members share the same memory location.

## How to create a union

- The 'union' keyword is used to create a union.

#### Syntax:

```cpp
   union union_name
   {
    member1;
    member2;
    member3;
    .
    .
    memberN;
  };
```

## Enums

- Enums are user-defined types that consist of named integral constants.
- It helps to assign constants to a set of names to make the program easier to read, maintain and understand.

## How to create an enum

- An Enumeration is declared by using the keyword "enum".

#### Syntax:

```cpp
enum enum_name{member1, member2, ......, memberN};
```
