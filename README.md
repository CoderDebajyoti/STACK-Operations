# STACK Operations

A repository implementing stack data structures in C/C++. This project covers essential stack operations and demonstrates practical applications such as recursion and expression evaluation.

## Table of Contents
- [About](#about)
- [Features](#features)
- [Setup](#setup)
- [Usage](#usage)
- [Directory Structure](#directory-structure)
- [Contributing](#contributing)
- [License](#license)

## About

This repository provides stack implementations using array and linked list structures in C/C++. It includes common stack operations (`push`, `pop`, `peek`, `isEmpty`) along with examples of stack applications. Ideal for learning about stack functionality and use cases in algorithms.

## Features

- **Core Stack Operations**: 
  - `push` - Add an element to the stack
  - `pop` - Remove the top element
  - `peek` - View the top element
  - `isEmpty` - Check if the stack is empty

- **Error Handling**: 
  - Stack overflow for fixed-size stacks
  - Stack underflow handling

- **Implementations**: 
  - Array-based stack
  - Linked-list-based stack
  
- **Applications**: Examples of stack use in recursion and expression evaluation.

## Setup

1. **Clone the repository**:
   ```bash
   git clone https://github.com/CoderDebajyoti/STACK-Operations.git
   cd STACK-Operations
   ```

2. **Compile the Code**:
   Use a C compiler to compile the files. For example:
   ```bash
   gcc src/stack_array.c -o stack_array
   gcc src/stack_linked_list.c -o stack_linked_list
   ```

3. **Run the Executables**:
   ```bash
   ./stack_array
   ./stack_linked_list
   ```

## Usage

Use the provided files to understand and test stack operations. Run individual implementations to perform operations like `push`, `pop`, and view the stack contents.

## Directory Structure

```plaintext
STACK-Operations
├── src
│   ├── stack_array.c       # Array-based stack implementation
│   ├── stack_linked_list.c # Linked-list-based stack implementation
│   ├── stack.h             # Header file for stack functions
├── tests
│   └── test_stack.c        # Test cases for stack operations
├── README.md               # Repository documentation
└── LICENSE                 # License file
```

## Contributing

Contributions are welcome! Please fork the repository and create a pull request with your changes. Ensure code follows existing styles and is well-documented.

## License

See the [LICENSE](LICENSE) file for details.

