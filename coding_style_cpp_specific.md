## Classes
| RuleNo. | Topic | Rule | Reference |
| ------ | ------ | ------ | ------ |
| 5.1 | Constructors | Constructors should never call virtual functions. | [here](https://google.github.io/styleguide/cppguide.html#Doing_Work_in_Constructors) |
| 5.2 | Implicit Conversions | Do not define implicit conversions. Use the explicit keyword for conversion operators and single-argument constructors. | [exp](https://google.github.io/styleguide/cppguide.html#Implicit_Conversions) |
| 5.3 | Structs vs Classed | Use a struct only for passive objects that carry data; everything else is a class. | [here](https://google.github.io/styleguide/cppguide.html#Structs_vs._Classes) |
| 5.4 | Structs vs. Pairs and Tuples | Prefer to use a struct instead of a pair or a tuple whenever the elements can have meaningful names. | [here](https://google.github.io/styleguide/cppguide.html#Structs_vs._Tuples) |
| 5.5 | Inheritance | Composition is often more appropriate than inheritance. When using inheritance, make it public. | [here](https://google.github.io/styleguide/cppguide.html#Inheritance) |
| 5.6 | Operator Overloading | Overload operators judiciously. Do not use user-defined literals. | [here](https://google.github.io/styleguide/cppguide.html#Operator_Overloading) |
| 5.7 | Access Control | Make classes' data members private, unless they are constants. | [here](https://google.github.io/styleguide/cppguide.html#Access_Control) |
| 5.8 | Declaration Order | Group similar declarations together, placing public parts earlier. | [here](https://google.github.io/styleguide/cppguide.html#Declaration_Order) |

## Other C++ Features
| RuleNo. | Topic | Description | Reference |
| ------ | ------ | ------ | ------- |
| 6.1 | Rvalue References | Use rvalue references to: 1.Define move constructors and move assignment operators. 2. Define overload sets with const& and && variants. | [here](https://google.github.io/styleguide/cppguide.html#Rvalue_references) |
| 6.2 | Friends | We allow use of friend classes and functions, within reason. | [here](https://google.github.io/styleguide/cppguide.html#Friends) |
| 6.3 | Exceptions | We do not use C++ exceptions. | [here](https://google.github.io/styleguide/cppguide.html#Exceptions) |
| 6.4 | noexcept | Specify noexcept when it is useful and correct. | [here](https://google.github.io/styleguide/cppguide.html#noexcept) |
| 6.5 | Run-Time Type Information (RTTI) | Avoid using Run Time Type Information (RTTI). | [here](https://google.github.io/styleguide/cppguide.html#Run-Time_Type_Information__RTTI_) |
| 6.6 | Casting | Use C++-style casts like static_cast<float>(double_value) or int64 y = int64{1} << 42 | [here](https://google.github.io/styleguide/cppguide.html#Casting) |
| 6.7 | Streams | Use streams where appropriate, and stick to "simple" usages. Overload << for streaming only for types representing values, and write only the user-visible value, not any implementation details. | [here](https://google.github.io/styleguide/cppguide.html#Streams) |
| 6.8 | PreIncrement and PreDecrement | Use prefix form (++i) of the increment and decrement operators with iterators and other template objects. | [here](https://google.github.io/styleguide/cppguide.html#Preincrement_and_Predecrement) |
| 6.9 | Use of const | In APIs, use const whenever it makes sense. constexpr is a better choice for some uses of const. | [here](https://google.github.io/styleguide/cppguide.html#Use_of_const) |
| 6.10 | Integer Types | Of the built-in C++ integer types, the only one used is int. If a program needs a variable of a different size, use a precise-width integer type from <stdint.h>, such as int16_t. | [here](https://google.github.io/styleguide/cppguide.html#Integer_Types) |
| 6.11 | 64-bit Portability | Code should be 64-bit and 32-bit friendly. | [here](https://google.github.io/styleguide/cppguide.html#64-bit_Portability) |
| 6.12 | Preprocessor Macros | Avoid defining macros, especially in headers; prefer inline functions, enums, and const variables. | [here](https://google.github.io/styleguide/cppguide.html#Preprocessor_Macros) |
| 6.13 | 0 and nullptr/NULL | Use nullptr for pointers, and '\0' for chars (and not the 0 literal). | [here](https://google.github.io/styleguide/cppguide.html#0_and_nullptr/NULL) |
| 6.14 | sizeof | Prefer sizeof(varname) to sizeof(type). | [here](https://google.github.io/styleguide/cppguide.html#sizeof) |
| 6.15 | Type Deduction | Use type deduction only if it makes the code clearer to readers who aren't familiar with the project, or if it makes the code safer. Do not use it merely to avoid the inconvenience of writing an explicit type. | [here](https://google.github.io/styleguide/cppguide.html#Type_deduction) |
| 6.16 | Class template argument deduction | Use class template argument deduction only with templates that have explicitly opted into supporting it. | [here](https://google.github.io/styleguide/cppguide.html#CTAD) |
| 6.17 | Lambda expressions | Use lambda expressions where appropriate. Prefer explicit captures when the lambda will escape the current scope. | [here](https://google.github.io/styleguide/cppguide.html#Lambda_expressions) |
| 6.18 | Template Programming | Avoid complex template programming | [here](https://google.github.io/styleguide/cppguide.html#Template_metaprogramming) |
| 6.19 | Boost | Only use approved libraries from Boost library collection | [here](https://google.github.io/styleguide/cppguide.html#Template_metaprogramming) |
| 6.20 | std::hash | Do not define specializations of std::hash. | [here](https://google.github.io/styleguide/cppguide.html#std_hash) |
| 6.21 | Nonstandard extensions | Nonstandard extensions to C++ may not be used unless otherwise specified. | [here](https://google.github.io/styleguide/cppguide.html#Nonstandard_Extensions) |
| 6.22 | Aliases | Public aliases are for the benefit of an API's user, and should be clearly documented. | [here](https://google.github.io/styleguide/cppguide.html#Aliases) |
