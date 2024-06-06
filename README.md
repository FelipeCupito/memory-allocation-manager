# MemManager

MemManager is a custom implementation of a memory manager that provides an alternative to the standard `malloc`, `realloc`, `free`, and `calloc` functions in C. This library is designed for educational purposes and to demonstrate memory management concepts.

## Features

- Custom `malloc` implementation
- Custom `realloc` implementation
- Custom `free` implementation
- Custom `calloc` implementation
- Memory block splitting and coalescing
- Simple debugging utilities

## Getting Started

### Prerequisites

- GCC or any C compiler

### Building the Library

To build the library, navigate to the root directory and run:

```sh
make
```

### Running Tests

To build and run the tests, navigate to the `tests` directory and run:

```sh
make
./test_MemMang
```

### Running Examples

To build and run the example program, navigate to the `examples` directory and run:

```sh
make
./example
```

## Usage

Include the header file in your project:

```c
#include "MemMang.h"
```

Then, use the custom memory management functions as you would use the standard ones:

```c
void *ptr = my_malloc(100);
ptr = my_realloc(ptr, 200);
my_free(ptr);
```

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.
