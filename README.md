# Console Calculator (C++)

A simple menu-driven calculator built in C++17. It performs basic arithmetic,
validates user input, and handles division by zero safely.

![C++](https://img.shields.io/badge/C++-17-blue)
![License](https://img.shields.io/badge/license-MIT-green)

## Features

- Addition, subtraction, multiplication and division
- Input validation for menu choices and numbers
- Exception handling for division by zero
- Clean multi-file structure (header + implementation + main)

## Getting Started

### Prerequisites

- A C++ compiler with C++17 support (e.g. g++ 9 or later)

### Build and Run

```bash
git clone https://github.com/yourusername/cpp-calculator.git
cd cpp-calculator
g++ -std=c++17 -Iinclude src/*.cpp -o calculator
./calculator
```

On Windows, run `calculator.exe` instead of `./calculator`.

## Sample Output

```
===== Console Calculator =====
1. Add
2. Subtract
3. Multiply
4. Divide
5. Exit
Choose an option: 4
Enter first number: 10
Enter second number: 0
Error: Division by zero is not allowed.
```

## Project Structure

```
cpp-calculator/
├── include/
│   └── calculator.h     # function declarations
├── src/
│   ├── calculator.cpp   # arithmetic logic
│   └── main.cpp         # menu and user interaction
├── .gitignore
├── LICENSE
└── README.md
```

## What I Learned

- Splitting a program into header and source files
- Using namespaces and exceptions in C++
- Validating user input with `std::cin`

## Future Improvements

- [ ] Add modulus and power operations
- [ ] Keep a history of calculations
- [ ] Add unit tests

## Author

**Menaka.S** · [GitHub](https://github.com/menaka-senthilkumar.)

## License

Distributed under the MIT License. See `LICENSE` for details.
