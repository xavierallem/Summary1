# C/CPP Coding Style

This guide will help give a quick summary of the C/CPP Coding Style that is followed
by IoTIoT. 

Any Code written for IoTIoT should follow these guidelines strictly.

## How to Read the Document
- First scan through the summary Tables quickly, this should give you quick overview 
of the coding style.
- Go through tables once again, this time only re-read things that you did not get in
the 1st scan.
- Read the description and Examples of those Rules that you did not understand, 
in the 1st and 2nd reads only.

**Note**: If you are following all the above steps, then you should be able to
finish reading the document within 30 mins.

**Remember** : The goal of this is not to learn it by-heart but to scan it and 
implement it in your code. You can come back and refer this again when you 
are coding so that you dont make any mistakes.

## Index 
1. [Documentation Rules](#documentation)
1. [Naming Convention](#naming-convention)
1. [Formatting Rules](#formatting)
1. [General Rules](#general) 
1. [Classes](#classes)(Only for CPP)
1. [Other CPP Features](#other-cpp-features)(Only for CPP)
1. [Contributing to Coding Style](#Contributing)

### Documentation

| **Rule No.** | **Description** | **Examples** |
|--------------|---------------|-------------------|
| 1.1 | Always comment all the lines of code that you write including `.c`, `.h`, `makefiles` and `CmakeList` files. | [Example](#1.1) |
| 1.2 | Always use Doxygen Comment Layout for all project Documentation. | [Example](#1.2) |
| 1.2.1 | All files should contain comments describing filename, file description, author, and known bugs in Doxygen format. | [Example](#1.2.1) |
| 1.2.2 | All functions should contain comments describing its action, its arguments and its return type in .c/cpp and .h files in Doxygen format | [Example](#1.2.2) |
| 1.2.3 | Split include files into standard include files and project include files. | [Example](#1.2.3) |

### Naming Convention

| **Rule No.** | **Description** | **Examples** |
|--------------|--------------------------------|------------------|
| 2.01 | Function Names should make clear what action it does. | [Example](#2.01) |
| 2.02 | For all the functions that are exposed to the user use camelCase | [Example](#2.02) |
| 2.03 | For all internal functions use lowercase with `_` as a word separator. | [Example](#2.03) |
| 2.04 | Variable names should use all lower case letters and use `_` as the word separator | [Example](#2.04) |
| 2.05 | Variables names should include the units in their name if it stores some quantity | [Example](#2.05) |
| 2.06 | Pointer Variables should have `*` before their name and not their dataType | [Example](#2.06) |
| 2.07 | Global Constant variables should be all caps with `_` separators | [Example](#2.07) |
| 2.08 | Structure Names should be nouns and in camelCase | [Example](#2.08) |
| 2.09 | #define and Macro Names should be in upper case using `_` separators | [Example](#2.09) |
| 2.10 | Enum Names should be in CamelCase | [Example](#2.10) |
| 2.11 | Enum labels should be in Upper Case with `_` Word Separators | [Example](#2.11) |


### Formatting 

| **Rule No.** | **Description** | **Examples** |
|--------------|------------------------------------------------------------------------------------|------------------|
| 3.01 | Only One statement per line. | [Example](#3.01) |
| 3.02 | Only One variable per line. | [Example](#3.02) |
| 3.03 | Always place function braces on new line. | [Example](#3.03) |
| 3.04 | Always place if, while, do, for etc.. start braces on the same line. | [Example](#3.04) |
| 3.05 | Always place closing braces on the new line. | [Example](#3.05) |
| 3.06 | Always Add comments to the closing braces and tell what are they closing. | [Example](#3.06) |
| 3.07 | Add space between Keywords and () when next to each other. | [Example](#3.07) |
| 3.08 | Never add space between function names and () when next to each other. | [Example](#3.08) |
| 3.09 | A Line Should Not Exceed 78 Characters. | [Example](#3.09) |
| 3.10 | Always put the constant on the left hand side of an equality/inequality comparison | [Example](#3.10) |
| 3.11 | Never use goto statements. | [Example](#3.11) |
| 3.12 | Use continue statement if it is absolutely necessary. | [Example](#3.12) |
| 3.13 | Use break statement if it is absolutely necessary. | [Example](#3.13) |
| 3.14 | Never mix continue with break in the same loop, | [Example](#3.14) |
| 3.15 | Never use ?: statement instead use if else. | [Example](#3.15) |                             |

### General 

| **Rule No.** | **Description** | **Examples** |
|--------------|------------------------------------------------------------------------------------------------------------------------------------------|------------------|
| 4.01 | Divide each action inside your codes into functions. | [Example](#4.01) |
| 4.02 | Never repeat code blocks, if any action in code gets repeated it should be converted into a function and be used. | [Example](#4.02) |
| 4.03 | Use the .h extension for header files and .c/cpp or for source files. | [Example](#4.03) |
| 4.04 | Never define data or variables in header files, instead define them in a .c/cpp file and use extern. | [Example](#4.04) |
| 4.05 | Never use a bare naked number in source code instead use #define or enum to label them. | [Example](#4.05) |
| 4.06 | Check every system call for an error return, unless you know you wish to ignore errors, In which case you can cast the return to (void). | [Example](#4.06) |
| 4.07 | Check every call to malloc or realloc for errors. | [Example](#4.07) |
| 4.08 | Use const keyword to allow passing as variables that cannot change to indicate when a function doesn't modify the variable. | [Example](#4.08) |
| 4.09 | Always use #if 0 to comment out code blocks. | [Example](#4.09) |
| 4.10 | Use Descriptive Macro Names Instead of #if 0 for example #if NOT_YET_IMPLEMENTED | [Example](#4.10) |


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

### Other CPP Features

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


# Documentation Rules 

## 1.1 
Always comment all the lines of code that you write including `.c`, `.h`, 
`makefiles` and `CmakeList` files.

**Rationale** : Developers do not have infinite memory, they forget the details
writing comments on each line as to why you did it will help remember the 
details as soon as they see the code. This saves a lot of time.  

**Example** :
```c
/**
 *  @brief De-init the GPIO Chip controller
 */
int cd_release_handle(struct gpiod_line *line_handle)
{
        /* Return variable */
        int8_t ret = 0;
        /* Check for error here in line_handle Input*/
        if (line_handle != NULL) {
                /* Release line handle  */
                gpiod_line_release(line_handle);               
        
        } else {
                /*Error has occurred!, Set the error variable */
                errNum = ERR_BAD_ARG_CD_REL_HANDLE;
        }       
        
        return ret ;
}
```

**Example** :

## 1.2 
Always use Doxygen Comment Layout for all project Documentation. 

[Doxygen](https://agapow.net/programming/tools/doxygen-cheatsheet/) is a format for documentation that is most commonly used by developers 
to document C/CPP code.

Each part of the project has a specific comment layout, the section below will give you details of the documentation layout. 

### 1.2.1 - All files should contain comments describing filename, file description, author, and known bugs in Doxygen format. 

**Example** :
```c
/** @file gpio_char_dev.c
 *  @brief GPIO char device internal functions
 *  
 *  These functions directly talk with the gpio char driver to 
 *  manipulate the GPIO.  
 *
 *  @author Yogesh Hegde (yh42)
 *  @bug No known bugs.
 */ 
```

### 1.2.2 - All functions should contain comments describing its action, its arguments and its return type in .c/cpp and .h files in Doxygen format 

**Example** : `.c` file  
```c
/**
 * @brief Initialize the PWM chip and PWM channel
 *
 * @param pwm_chip PWM chip number 
 * @param pwm_channel PWM channel Number
 *
 * @return 0 on SUCCESS and -1 on failure
 */
int8_t pwm_export (int8_t pwm_chip, int8_t pwm_channel)
{
        /* Variable for storing temporary return values */
        int8_t ret = -1;

        /* tmp buffer to store full linux path the sysfs pwm interface */
        char path[MAX_BUFF_SIZE];
        
        /* tmp buffer to store pwm channel number*/
        char buf[MAX_BUFF_SIZE];
        
        /* Variable to store the file descriptor */
        int fd;
        
        /* Before we even begin,
         * We check if the inputs to the function are correct 
         * because we don't trust the user to provide us with correct inputs to 
         * the function 
         */
        if (pwm_chip >= 0 && pwm_channel >= 0) {               
                /* Sysfs interface path changes with change in pwm chip number 
                 * Hence store the correct path into a buffer
                 */
                sprintf(path, "/sys/class/pwm/pwmchip%d/export", pwm_chip);
                
                /* Goto the path provided by the buffer and open the file */
                fd = open(path, O_WRONLY);
                /* close the file */
                (void) close (fd);
        } else {
                /* The user has passed incorrect args to the function 
                 * Bad User !!
                 * Report this error to the global error handler 
                 */
                errNum = ERR_BAD_ARG_PWM_EXPORT;
        }

        return ret;
} 
```

**Example** : `.h` file  
```c
/* --- Standard Includes --- */
#include <stdlib.h>
#include <stdint.h>
/**
 * @brief Initialize the PWM chip and PWM channel
 *
 * @param pwm_chip PWM chip number 
 * @param pwm_channel PWM channel Number
 *
 * @return 0 on SUCCESS and -1 on failure
 */
extern int8_t pwm_export ( int8_t pwm_chip, int8_t pwm_channel );
```

## 1.2.3 - Split include files into standard include files and project include files.

**Example** :  
```c
/* --- Standard Includes --- */
#include <stdlib.h>
#include <stdint.h>

/* --- Project includes --- */
#include "shunyaInterfaces.h"
#include "functions.h"
```

# Naming Conventions 

Only a programmer who understands the system as a whole can create a 
name that "fits" with the system. A name is the result of a long deep 
thought process about the system.

If the name is appropriate everything fits together naturally, i.e
1. **relationships are clear**, 
2. **meaning is derivable**
3. **reasoning works as expected**.

Following these rules will improve your naming in the code, but does not 
guarantee fully fitting names.

## 2.01    
Function Names should make clear what action it does.

**Description** : Usually every function performs an action, 
so the name should make clear what it does.

**Example**:
1. `check_for_errors()` **instead of** `error_check()`
2. `dump_data_to_file()` **instead of** `data_file()` 

**Justification**: Making function names *verbs* programs can be read more naturally.

## 2.02    
For all the functions that are exposed to the user use `camelCase`

**Example**:
1. `getSensorData()` **instead of** `get_sensor_data()`
2. `dumpDataToFile()` **instead of** `dump_data_to_file()` 

## 2.03    
For all internal functions use lowercase with `_` as a word separator.

**Justification**: Easy to determine if the function is Internal or External.

**Example**:
1. `get_sensor_data()` 
2. `dump_data_to_file()` 

## 2.04    
Variable names should use all lower case letters and use `_` as the word separator.

**Example**:
```c
int handle_error (int error_number) 
{
        int time_of_error;
        int error_processor;
}
```

## 2.05    
Variables names should include the units in their name if it stores some quantity.

**Example**:
```c
uint32_t timeout_msecs;
uint32_t my_weight_lbs;
```

## 2.06    
Pointer Variables should have `*` before their name and not their dataType.

**Example**:
```c
/* Compliant code */
char *name = NULL;
char *address;

/* Non-Compliant code */
char * name = NULL;
char* address; 
```

## 2.07    
Global Constant variables should be all caps with `_` separators

**Justification**:  It's tradition for global constants to named this way. 
Be careful to not conflict with other global `#defines` and `enum` labels. 

**Example**:
```c
const int A_GLOBAL_CONSTANT= 5;
```

## 2.08    
Structure names are often nouns. Use `camelCase` to denote Structure names.

**Justification**: This allows us to identify the variable names from the Structure names.

**Example**:

```c
struct fooBar {
        struct fooBar *next;       /* List of active foo */
        struct mumble amumble;/* Comment for mumble */
        int bar;
        unsigned int baz:1,     /* Bitfield; line up entries if desired */
                     fuz:5,
                     zap:2;
        uint8_t flag;
};
struct fooBAr *foohead;            /* Head of global foo list */
```

## 2.09     
`#define` and Macro Names should be in upper case using `_` separators

**Justification**:   This makes it very clear that the value is not alterable 
and in the case of macros, makes it clear that you are using a construct that 
requires care.

**Example**:
```c
#define MAX 1024
#define IS_ERR -10
```

## 2.11    
Enum Names should be in `CamelCase` 

**Example**:
```c
enum PinStateType {
        PIN_OFF,
        PIN_ON
};
```

## 2.12    
Enum labels should be in Upper Case with `_` Word Separators

**Example**:
```c
enum PinStateType {
        PIN_OFF,
        PIN_ON
};
```

## Tools for Naming functions and variables 

Suffixes are sometimes useful:

1. max - to mean the maximum value something can have.
1. cnt - the current count of a running count variable.
1. key - key value.

For example: 
- retry_max to mean the maximum number of retries. 
- retry_cnt to mean the current retry count.

Prefixes are sometimes useful:

1. is - to ask a question about something. Whenever someone sees Is they will know it's a question.
1. get - get a value.
1. set - set a value.

For example: `is_hit_retry_limit()`.


# Formatting Rules 

## 3.01    
Only One statement per line.

**Justification**: The code is easier to read.

## 3.02    
Only One variable per line.

**Justification**: Documentation can be added for the variable on the line. 

**Example**:
```c
Not:
char **a, *x;

Do:
char **a = 0;  /* add doc */
char  *x = 0;  /* add doc */
```

## 3.03    
Always place function braces on new line.

**Example**:
```c
Not:
int cd_release_handle(struct gpiod_line *line_handle) {
...
}

Do:
int cd_release_handle(struct gpiod_line *line_handle)
{
...
}
```

## 3.04    
Always place if, while, do, for etc.. start braces on the same line.

**Example**:
```c
Not:
int cd_release_handle(struct gpiod_line *line_handle) {
...
}

Do:
int cd_release_handle(struct gpiod_line *line_handle)
{
...
}
```

## 3.05    
Always place closing braces on the new line.

**Example**:
```c
Not:
if (1 == somevalue) 
{
   somevalue = 2;
}

Do:
if (1 == somevalue) {
   somevalue = 2;
}
```

## 3.06    
Always Add comments to the closing braces and tell what are they closing.

**Example**:
```c
while (1) {
        if (valid) {
                ...  
        } /* if valid */
        else {
                ...
        } /* not valid */
} /* end forever */
```

## 3.07    
Add space between Keywords and `()` when next to each other.

**Example**:
```c
Not:
if(1 == somevalue);

Do:
if (1 == somevalue);
```

## 3.08    
Never add space between function names and `()` when next to each other.

**Example**:
```c
Not:
int cd_release_handle (struct gpiod_line *line_handle)

Do:
int cd_release_handle(struct gpiod_line *line_handle)
```

## 3.09    
A Line Should Not Exceed 78 Characters.

**Justification**: Helps viewing and printing `diff` output correctly on all terminals.

## 3.10     
Always put the constant on the left hand side of an equality/inequality comparison

**Example**
```c
Not:
if (errorNum == 6) ...

Do:
if (6 == errorNum) ...
```

## 3.11    
Never use goto statements.

## 3.12    
Use continue statement if it is absolutely necessary.

## 3.13    
Use break statement if it is absolutely necessary.

## 3.14    
Never mix continue with break in the same loop.

## 3.15    
Never use ?: statement instead use if else.

# General Rules 

## 4.01    
Divide each action inside your codes into functions.    

## 4.02    
Never repeat code blocks, if any action in code gets repeated it should be 
converted into a function and be used.       

##  4.03    
Use the .h extension for header files and .c/cpp or for source files.


##  4.04    
Never define data or variables in header files, instead define them in a .c/cpp file and use extern.

**Example**:
```c
/*Don't Do this ever: */
/* 
 * a header.h 
 */
int x = 0;
```    

## 4.05    
Never use a bare naked number in source code instead use `#define` or `enum` to label them.

A magic number is a bare naked number used in source code. It's magic because no-one has a clue what it means including the author inside 3 months.

**Example**:
```c
/*Dont Do this ever: */
if      (22 == foo) { start_thermo_nuclear_war(); }
else if (19 == foo) { refund_lotso_money(); }
else if (16 == foo) { infinite_loop(); }
else                { cry_cause_im_lost(); }
```
Instead do this:

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

## 4.06    
Check every system call for an error return, unless you know you wish to ignore errors, 
In which case you can cast the return to (void). 

**Example**:
```c
(void) sscanf("..."); /* This is allowed */

char *ret = sscanf("...."); /* This is allowed */
if (ret == NULL) { /* Check if the sscanf is successful */
        printf("Function Failed\n"); 
        exit(0);
} 
```


## 4.07    
Check every call to malloc or realloc for errors.       

**Example**:
```c
/* Dynamically allocate memory using malloc() */
ptr = (int*)malloc(n * sizeof(int)); 

/* Check if the memory has been successfully 
 * allocated by malloc or not
 */ 
if (ptr == NULL) { 
        printf("Memory not allocated.\n"); 
        exit(0); 
}  
```

## 4.08    
Use `const` keyword to allow passing as variables that cannot change to indicate when a function doesn't modify the variable.

**Example**:
```c
/* If variable foo does not change due to the action of the function example 
 * then, make it a constant using const keyword
 */
void  example(const char foo)
{
        /*foo is only used as input and never changes*/
}
```     

## 4.09.1    
Always use #if 0 to comment out code blocks.

**Justification**: You can't use `/**/`style comments because comments can't contain comments and surely a large block of your code will contain a comment, won't it?


**Example**:
```c
void  example()
{
        great looking code

        #if 0
        lots of code
        #endif

        more code
}
```
## 4.09.2     
Use Descriptive Macro Names Instead of `#if 0`.        

**Example**:
```c
#define OBSOLETE 0 

void  example()
{
        great looking code

        #if OBSOLETE
                lots of code
        #endif

        more code
}
```
Add a Comment to Document Why Add a short comment explaining why it is not implemented, obsolete or temporarily disabled.

# Contributing 
We are open for suggestions from you guys, but remember that this organization 
is not a democracy and suggestions will be only considered if you have a crazy
amount of work experience to show for it.