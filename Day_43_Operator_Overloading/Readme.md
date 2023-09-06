# ⚡Introduction to Operator Overloading in C++

## Operator Overloading

- Operator overloading is the process of using operator instead of function to perform a particular operation.
- We can overload only the existing operator i.e. we cannot create new operator using operator overloading.
- We can add additional tasks to the existing operator using operator overloading.
- We cannot change the basic meaning of an operator i.e. operator overloading never overwrites the existing behavior of an operator.
- In general, we pass objects as arguments in operator overloading.
- In operator overloading, at least one user-defined datatype should be provided.
- All of the operators can be overloaded except scope operator( : : ), member access operator( . , .\* ), sizeof( ) operator and conditional operator( ? : ).
- Also, for operator overloading, the operator or function should be the member of same class.

#### Syntax

```cpp
return_datatype operator operator_symbol(argument_list)
{
  //statements
  return value;
}
```
