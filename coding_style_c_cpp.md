# C/CPP Coding Style

This guide will help give a quick summary of the C/CPP Coding Style that is followed
by IoTIoT. 

Any Code written for IoTIoT should follow these guidelines strictly.

We are open for suggestions from you guys, but remember that this organization 
is not a democracy and suggestions will be only considered if you have a crazy
amount of work experience to show for it.

## Index 
1. [Naming Convention](#naming-convention)
2. [Formatting Rules](#formatting)
3. [General Rules](#general)
4. [Documentation Rules](#documentation)
5. [Classes](#classes)(Only for CPP)
6. [Other CPP Features](#cppfeatures)(Only for CPP)

### Naming Convention
| Rule No. | Description                                                                          | Examples                     |
|----------|--------------------------------------------------------------------------------------|------------------------------|
| 1.01     | Function Names should make clear what **action** it does.                            | [Goto Example](#function-names)              |
| 1.02     | For all the functions that are exposed to the user use `camelCase`                   | [Goto Example](#function-names)              |
| 1.03     | For all internal functions use `lowercase` with `_` as a word separator.             | [Goto Example](#variable-names-on-the-stack) |
| 1.04     | Variable names should use all lower case letters and use `_` as the word separator   | [Goto Example](#variable-names-on-the-stack) |
| 1.05     | Variables names should include the units in their name if it stores some quantity    | [Goto Example](#include-units-in-names)      |
| 1.06     | Pointer Variables should have `*` before their name and not their dataType           | [Goto Example](#pointer-variables)           |
| 1.07     | Global Constant variables should be all caps with `_` separators                     | [Goto Example](#global-constants)            |
| 1.08     | Structure Names should be nouns and in camelCase                                     | [Goto Example](#structure-names)             |
| 1.09     | Variables inside the structure should be ordered in size and then alphabetical order | [Goto Example](#structure-names)             |
|  1.10    | `#define` and Macro Names should be in upper case using `_` separators               | [Goto Example](#define-and-macro-names)      |
| 1.11     | Enum Names should be in `CamelCase`                                                  | [Goto Example](#enum-names)                  |
| 1.12     | Enum labels should be in Upper Case with `_` Word Separators                         | [Goto Example](#enum-names)                  |


### Formatting 

| Rule No. | Description                                                                                                        | Examples                                       |
|----------|--------------------------------------------------------------------------------------------------------------------|------------------------------------------------|
| 2.01     | Only One statement per line.                                                                                       | [Goto Example](#one-statement-per-line)                        |
| 2.02     | Only One variable per line.                                                                                        | [Goto Example](#one-variable-per-line)                         |
| 2.03     | Always place function braces on new line.                                                                          |                                                |
| 2.04     | Always place if, while, do, for etc.. start braces on the same line.                                               | [Goto Example](#brace-placement)                               |
| 2.05     | Always place closing braces on the new line.                                                                       | [Goto Example](#brace-placement)                               |
| 2.06     | Always Add comments to the closing braces and tell what are they closing.                                          | [Goto Example](#add-comments-to-closing-braces)                |
| 2.07     | Add space between Keywords and () when next to each other.                                                         | [Goto Example](#parens-()-with-key-words-and-functions-policy) |
| 2.08     | Never add space between function names and () when next to each other.                                             | [Goto Example](#parens-()-with-key-words-and-functions-policy) |
| 2.09     | A Line Should Not Exceed 78 Characters.                                                                            | [Goto Example](#a-line-should-not-exceed-78-characters)        |
| 2.10     | Always put the constant on the left hand side of an equality/inequality comparison                                 | [Goto Example](#condition-format)                              |
| 2.11     | The default case in Switch should always be present and trigger an error.                                          | [Goto Example](#switch-formatting)                             |
| 2.12     | If you need to create variables inside switch put all the code in a braces.                                        | [Goto Example](#switch-formatting)                             |
| 2.13     | Falling through a case statement into the next case statement shall be permitted as long as a comment is included. | [Goto Example](#switch-formatting)                             |
| 2.14     | Never use goto statements.                                                                                         | [Goto Example](#use-of-goto)                                   |
| 2.15     | Use `continue` statement if it is absolutely necessary.                                                            | [Goto Example](#use-of-goto)                                   |
| 2.16     | Use `break` statement if it is absolutely necessary.                                                               | [Goto Example](#use-of-goto)                                   |
| 2.17     | Never mix `continue` with `break` in the same loop,                                                                | [Goto Example](#use-of-goto)                                   |
| 2.18     | Never use `?:` statement instead use if else.                                                                      | [Goto Example](#use-of-goto)                                  |

### General 

| Rule No. | Description                                                                                                                              | Examples                                      |
|----------|------------------------------------------------------------------------------------------------------------------------------------------|-----------------------------------------------|
| 3.01     | Divide each action inside your codes into functions.                                                                                     |                                               |
| 3.02     | Never repeat code blocks, if any action in code gets repeated it should be converted into a function and be used.                        |                                               |
| 3.03     | Use the .h extension for header files and .c/cpp or for source files.                                                                        | [Goto Example](#file-extensions )                             |
| 3.04     | Never define data or variables in header files, instead define them in a .c/cpp file and use extern.                                         | [Goto Example](#no-data-definitions-in-header-files)         |
| 3.05     | Never use a bare naked number in source code instead use #define or enum to label them.                                                    | [Goto Example](#no-magic-numbers)                            |
| 3.06     | Check every system call for an error return, unless you know you wish to ignore errors, In which case you can cast the return to (void). | [Goto Example](#error-return-check-policy)                    |
| 3.07     | Check every call to malloc or realloc for errors.                                                                                        | [Goto Example](#error-return-check-policy)                    |
| 3.08     | Use `const` keyword to allow passing as variables that cannot change to indicate when a function doesn't modify the variable.            | [Goto Example](#be-const-correct)                             |
| 3.09     | Always use `#if 0` to comment out code blocks.                                                                                           | [Goto Example](#commenting-out-large-code-blocks)             |
| 3.10     | Use Descriptive Macro Names Instead of `#if 0` for example `#if NOT_YET_IMPLEMENTED`                                                     | [Goto Example](#use-descriptive-macro-names-instead-of-#if-0) |


### Documentation

| Rule No. | Description                                                                                                                                                                              | Examples |
|----------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|----------|
| 4.01     | Always comment all the lines of code that you write including .c, .h and makefiles or CmakeList.txt files                                                                                |          |
| 4.02     | Your comments should be a story describing the system.                                                                                                                                   |          |
| 4.03     | Function description, function arguments, and function implementation. Are all parts of one story, they should weave together and inform someone else just exactly what you did and why. |          |
| 4.04     | Comment decisions separately, describing which choice you made and why.                                                                                                                  |          |
| 4.05     | Always use Doxygen for Documentation                                                                                                                                                     |          |
| 4.06     | Every file should contain comments saying filename, file description, author, and known bugs in Doxygen format.                                                                          |          |
| 4.07     | Every function should contain comments describing its action, its arguments and its return type in .c/cpp and .h files in Doxygen format                                                     |          |
| 4.08     | Every file included would be documented describing why it is included and what functionality is used.                                                                                   |          |
| 4.09     | All include files should be classified into standard include files and project include files.                                                                                            |          |


### Classes
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

### Other C++ Features
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
------------

# Naming Format 

## Make Names Fit

Names are the heart of programming. In the past people believed knowing someone's true name gave them magical power over that person. If you can think up the true name for something, you give yourself and the people coming after power over the code.

A name is the result of a long deep thought process about the ecology ( environment) it lives in. Only a programmer who understands the system as a whole can create a name that "fits" with the system.

If the name is appropriate everything fits together naturally, **relationships are clear**, **meaning is derivable**, and **reasoning** i.e from common human expectations works as expected.

If you find all your names are `abc` `foo` and `xyz` then you should probably revisit your design.

## Function Names

Usually every function performs an action, so the name should make clear what it does: `check_for_errors()` **instead of** `error_check()`, `dump_data_to_file()` **instead of** `data_file()`. This will also make functions and data objects more distinguishable.

By making function names verbs and following other naming conventions programs can be read more naturally.

Suffixes are sometimes useful:

1. max - to mean the maximum value something can have.
1. cnt - the current count of a running count variable.
1. key - key value.

For example: retry_max to mean the maximum number of retries, retry_cnt to mean the current retry count.

Prefixes are sometimes useful:

1. is - to ask a question about something. Whenever someone sees Is they will know it's a question.
1. get - get a value.
1. set - set a value.

For example: `is_hit_retry_limit()`.

1. For all the functions that are exposed to the user use `camelCase`
1. For all internal functions use `lowercase` with `_` as a word separator.

## Include Units in Names

If a variable represents time, weight, or some other unit then include the unit in the name so developers can more easily spot problems. For example:

```
uint32 timeout_msecs;
uint32 my_weight_lbs;
```

## Structure Names

Structure names are often nouns. Use `camelCase` to denote Structure names.

Justification  
This allows us to identify the variable names from the Structure names

When declaring variables in structures, declare them organized like

1. size
1. alphabetical order

E.g, : don't use `int a; char *b; int c; char *d;`

use `int a; int b; char *c; char *d`.

Each variable gets its own type and line.

Major structures should be declared at the top of the file in which they are used, or in separate header files, if they are used in multiple source files.

Use of the structures should be by separate declarations and should be "extern" if they are declared in a header file.

It may be useful to use a meaningful prefix for each member name.

E.g, for `struct softc` the prefix could be `sc_`.

Example

```c
struct fooBar {
        struct fooBar *next;       /* List of active foo */
        struct mumble amumble;  /* Comment for mumble */
        int bar;
        unsigned int baz:1,     /* Bitfield; line up entries if desired */
                     fuz:5,
                     zap:2;
        uint8_t flag;
};
struct fooBAr *foohead;            /* Head of global foo list */
```

## Variable Names on the Stack

1. use all lower case letters
1. use `_` as the word separator.

**Justification**

With this approach the scope of the variable is clear in the code. Now all variables look different and are identifiable in the code.

Example

```c
int handle_error (int error_number) {
int            error= OsErr();
Time           time_of_error;
ErrorProcessor error_processor;
}
```

## Pointer Variables

place the \* close to the variable name not pointer type

Example

```c
char *name= NULL;

char *name, address; 
``
## Global Variables

1. Global variables should be prepended with a 'g_'.
2. Global variables should be avoided whenever possible.

Justification

It's important to know the scope of a variable. 

Example
```c
Logger  g_log;
Logger* g_plog;
```

## Global Constants

Global constants should be all caps with `_` separators.

Justification  
It's tradition for global constants to named this way. You must be careful to not conflict with other global #defines and enum labels. Example

```c
const int A_GLOBAL_CONSTANT= 5;
```

## #define and Macro Names

1. Put #defines and macros in all upper using `_` separators.
1. Macros are capitalized, parenthesized, and should avoid side-effects.
1. Spacing before and after the macro name may be any whitespace, though use of TABs should be consistent through a file.
1. If they are an inline expansion of a function, the function is defined all in lowercase, the macro has the same name all in uppercase.
1. If the macro is an expression, wrap the expression in parenthesis.
1. If the macro is more than a single statement do not use that MACRO.

Justification  
This makes it very clear that the value is not alterable and in the case of macros, makes it clear that you are using a construct that requires care.

Some subtle errors can occur when macro names and enum labels use the same name. Example

```c
#define MAX(a,b) blah
#define IS_ERR(err) blah
```

## Enum Names

1. Labels All Upper Case with `_` Word Separators

This is the standard rule for enum labels. No comma on the last element.  
Example

```c
   enum PinStateType {
      PIN_OFF,
      PIN_ON
   };
```

## Make a Label for an Error State

It's often useful to be able to say an enum is not in any of its valid states. Make a label for an uninitialized or error state. Make it the first label if possible.  
Example

```c
enum { STATE_ERR,  STATE_OPEN, STATE_RUNNING, STATE_DYING};
```
# Formatting Rules 

## Brace Placement

Of the three major brace placement strategies one is recommended:

```c
       if (condition) {      while (condition) {
          ...                   ...
       }                     }
```

## Always Uses Braces Form

All if, while and do statements require braces even if there is only a single statement within the braces. For example:

```c
if (1 == somevalue) {
   somevalue = 2;
}
```

Justification  
It ensures that when someone adds a line of code later there are already braces and they don't forget. It provides a more consistent look. This doesn't affect execution speed. It's easy to do.

## Add Comments to Closing Braces

Adding a comment to closing braces can help when you are reading code because you don't have to find the begin brace to know what is going on.

```c
while(1) {
   if (valid) {
  
   } /* if valid */
   else {
   } /* not valid */

} /* end forever */
```

## Consider Screen Size Limits

Some people like blocks to fit within a common screen size so scrolling is not necessary when reading code.

## Parens () with Key Words and Functions Policy

1. Do not put parens next to keywords. Put a space between.
1. Do put parens next to function names.
1. Do not use parens in return statements when it's not necessary.

Justification

Keywords are not functions. By putting parens next to keywords keywords and function names are made to look alike.

Example

```c
if (condition) {
}

while (condition) {
}

strcpy(s, s1);

return 1;
```

## A Line Should Not Exceed 78 Characters

Lines should not exceed 78 characters.

Justification

Even though with big monitors we stretch windows wide our printers can only print so wide. And we still need to print code. The wider the window the fewer windows we can have on a screen. More windows is better than wider windows. We even view and print diff output correctly on all terminals and printers.

## If Then Else Formatting

### Layout

It's up to the programmer. Different bracing styles will yield slightly different looks. One common approach is:

```c
if (condition) {
} else if (condition) {
} else {
}
```

If you have else if statements then it is usually a good idea to always have an else block for finding unhandled cases. Maybe put a log message in the else even if there is no corrective action taken.

#### Condition Format

Always put the constant on the left hand side of an equality/inequality comparison. For example:

```c
if ( 6 == errorNum ) ...
```

One reason is that if you leave out one of the = signs, the compiler will find the error for you. A second reason is that it puts the value you are looking for right up front where you can find it instead of buried at the end of your expression. It takes a little time to get used to this format, but then it really gets useful.

## switch Formatting

Falling through a case statement into the next case statement shall be permitted as long as a comment is included. The default case should always be present and trigger an error if it should not be reached, yet is reached. If you need to create variables put all the code in a block.

Example

```c
   switch (...)
   {
      case 1:
         ...
      /* comments */

      case 2:
      {        
         int v;
         ...
      }
      break;

      default:
   }
```

## Use of goto,continue,break and ?:

### Goto

Goto statements should be used sparingly, as in any well-structured code. The goto debates are boring so we won't go into them here. The main place where they can be usefully employed is to break out of several levels of switch, for, and while nesting, although the need to do such a thing may indicate that the inner constructs should be broken out into a separate function, with a success/failure return code.

```c
   for (...) {
      while (...) {
      ...
         if (disaster) {
            goto error;

         } 
      }
   }
   ...
error:
   clean up the mess 
```

When a goto is necessary the accompanying label should be alone on a line and to the left of the code that follows. The goto should be commented (possibly in the block header) as to its utility and purpose.

### Continue and Break

Continue and break are really disguised gotos so they are covered here.

Continue and break like goto should be used sparingly as they are magic in code. With a simple spell the reader is beamed to god knows where for some usually undocumented reason.

The two main problems with continue are:

1. It may bypass the test condition
1. It may bypass the increment/decrement expression

Consider the following example where both problems occur:

```c
while (TRUE) {
   ...
   /* A lot of code */
   ...
   if (/* some condition */) {
      continue;
   }
   ...
   /* A lot of code */
   ...
   if ( i++ > STOP_VALUE) break;
}
```

Note: "A lot of code" is necessary in order that the problem cannot be caught easily by the programmer.

From the above example, a further rule may be given: Mixing continue with break in the same loop is a sure way to disaster.

### ?:

`?:` is evil, do not use it.

Justification

The code is easier to read.

## One Statement Per Line

There should be only one statement per line unless the statements are very closely related.

Justification

The code is easier to read. Use some white space too. Nothing better than to read code that is one line after another with no white space or comments.

## One Variable Per Line

Related to this is always define one variable per line:

```c
Not:
char **a, *x;

Do:
char **a = 0;  /* add doc */
char  *x = 0;  /* add doc */
```

Justification

Documentation can be added for the variable on the line. It's clear that the variables are initialized. Declarations are clear which reduces the probability of declaring a pointer when you meant to declare just a char.


# 

## Be Const Correct

Using const in all the right places is called "const correctness." It's hard at first, but using const really tightens up your coding style. Const correctness grows on you.

Use #if Not #ifdef Use #if MACRO not #ifdef MACRO. Someone might write code like:

```c
#ifdef DEBUG
        temporary_debugger_break();
#endif
```

Someone else might compile the code with turned-of debug info like:

```
cc -c lurker.cc -DDEBUG=0
```

Alway use #if, if you have to use the preprocessor. This works fine, and does the right thing, even if DEBUG is not defined at all (!)

```c
#if DEBUG
        temporary_debugger_break();
#endif
```

If you really need to test whether a symbol is defined or not, test it with the defined() construct, which allows you to add more things later to the conditional without editing text that's already in the program:

```
#if !defined(USER_NAME)
 #define USER_NAME "john smith"
#endif
```

## Commenting Out Large Code Blocks

Sometimes large blocks of code need to be commented out for testing.

### Using #if 0

The easiest way to do this is with an #if 0 block:

```c
   void 
   example()
   {
      great looking code

      #if 0
      lots of code
      #endif
    
      more code
    }
```

You can't use `/**/`style comments because comments can't contain comments and surely a large block of your code will contain a comment, won't it?

Don't use `#ifdef` as someone can unknowingly trigger ifdefs from the compiler command line.

`#if 0` is that even day later you or anyone else has know idea why this code is commented out. Is it because a feature has been dropped? Is it because it was buggy? It didn't compile? Can it be added back? It's a mystery.

### Use Descriptive Macro Names Instead of #if 0

```c
#if NOT_YET_IMPLEMENTED  

#if OBSOLETE

#if TEMP_DISABLED 
```

Add a Comment to Document Why Add a short comment explaining why it is not implemented, obsolete or temporarily disabled.

## File Extensions

In short: Use the .h extension for header files and .c/cpp for source files.

## No Data Definitions in Header Files

Do not put data definitions in header files. for example:

```c
/* 
 * aheader.h 
 */
int x = 0;
```

It's bad magic to have space consuming code silently inserted through the innocent use of header files. It's not common practice to define variables in the header file so it will not occur to developers to look for this when there are problems. Consider defining the variable once in a .c file and use an extern statement to reference it.

## Mixing C and C++

In order to be backward compatible with dumb linkers C++'s link time type safety is implemented by encoding type information in link symbols, a process called name mangling. This creates a problem when linking to C code as C function names are not mangled. When calling a C function from C++ the function name will be mangled unless you turn it off. Name mangling is turned off with the extern "C" syntax. If you want to create a C function in C++ you must wrap it with the above syntax. If you want to call a C function in a C library from C++ you must wrap in the above syntax. Here are some examples:

#### Calling C Functions from C++

```c
extern "C" int strncpy(...);
extern "C" int my_great_function();
extern "C"
{
   int strncpy(...);
   int my_great_function();
};
```

#### Creating a C Function in C++

```c
extern "C" void
a_c_function_in_cplusplus(int a)
{
}
```

#### `__cplusplus` Preprocessor Directive

If you have code that must compile in a C and C++ environment then you must use the `__cplusplus` preprocessor directive. For example:

```
#ifdef __cplusplus

extern "C" some_function();

#else

extern some_function();

#endif
```

## No Magic Numbers

A magic number is a bare naked number used in source code. It's magic because no-one has a clue what it means including the author inside 3 months. For example:

```c
if      (22 == foo) { start_thermo_nuclear_war(); }
else if (19 == foo) { refund_lotso_money(); }
else if (16 == foo) { infinite_loop(); }
else                { cry_cause_im_lost(); }
```

In the above example what do 22 and 19 mean? If there was a number change or the numbers were just plain wrong how would you know? Instead of magic numbers use a real name that means something. You can use `#define` or constants or enums as names. Which one is a design choice. For example:

```c
#define   PRESIDENT_WENT_CRAZY  (22)
const int WE_GOOFED= 19;
enum  {
   THEY_DIDNT_PAY= 16
};

if      (PRESIDENT_WENT_CRAZY == foo) { start_thermo_nuclear_war(); }
else if (WE_GOOFED            == foo) { refund_lotso_money(); }
else if (THEY_DIDNT_PAY       == foo) { infinite_loop(); }
else                                  { happy_days_i_know_why_im_here(); }
```

Now isn't that better? The const and enum options are preferable because when debugging the debugger has enough information to display both the value and the label. The #define option just shows up as a number in the debugger which is very inconvenient. The const option has the downside of allocating memory. Only you know if this matters for your application.

## Error Return Check Policy

Check every system call for an error return, unless you know you wish to ignore errors. For example, printf returns an error code but rarely would you check for its return code. In which case you can cast the return to (void) if you really care. Include the system error text for every system error message. Check every call to malloc or realloc unless you know your versions of these calls do the right thing. You might want to have your own wrapper for these calls, including new, so you can do the right thing always and developers don't have to make memory checks everywhere.

# Documentation

## Comments Should Tell a Story

Consider your comments a story describing the system. Expect your comments to be extracted by a robot and formed into a man page. Class comments are one part of the story, method signature comments are another part of the story, method arguments another part, and method implementation yet another part. All these parts should weave together and inform someone else at another point of time just exactly what you did and why.

## Document Decisions

Comments should document decisions. At every point where you had a choice of what to do place a comment describing which choice you made and why. Archeologists will find this the most useful information.

## Use Headers

Use a document extraction system like Doxygen.

These headers are structured in such a way as they can be parsed and extracted. They are not useless like normal headers. So take time to fill them out. If you do it right once no more documentation may be necessary.

## Comment Layout

Each part of the project has a specific comment layout. Doxygen has the recommended format for the comment layouts.

## Make Gotchas Explicit

Explicitly comment variables changed out of the normal control flow or other code likely to break during maintenance. Embedded keywords are used to point out issues and potential problems. Consider a robot will parse your comments looking for keywords, stripping them out, and making a report so people can make a special effort where needed.

Gotcha Keywords

@author: specifies the author of the module

@version: specifies the version of the module

@param: specifies a parameter into a function

@return: specifies what a function returns

@deprecated: says that a function is not to be used anymore

@see: creates a link in the documentation to the file/function/variable to consult to get a better understanding on what the current block of code does. @todo: what remains to be done

@bug: report a bug found in the piece of code

## Gotcha Formatting

Make the gotcha keyword the first symbol in the comment.

Comments may consist of multiple lines, but the first line should be a self-containing, meaningful summary.

The writer's name and the date of the remark should be part of the comment. This information is in the source repository, but it can take a quite a while to find out when and by whom it was added. Often gotchas stick around longer than they should. Embedding date information allows other programmer to make this decision. Embedding who information lets us know who to ask.

## Commenting function declarations

Functions headers should be in the file where they are declared. This means that most likely the functions will have a header in the .h file. However, functions like main() with no explicit prototype declaration in the .h file, should have a header in the .c/cpp file.

## Include Statement Documentation

Include statements should be documented, telling the user why a particular file was included.

```c
/*
* Kernel include files come first.
*/
/* Non-local includes in brackets. */
/*
* If it's a network program, put the network include files next.
* Group the includes files by subdirectory.
*/
/*
* Then there's a blank line, followed by the /usr include files.
* The /usr include files should be sorted!
*/
```

