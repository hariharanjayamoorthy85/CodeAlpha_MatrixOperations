# Matrix Operations Program in C

A modular C program that demonstrates fundamental matrix operations using two-dimensional arrays and user-defined functions.

The program supports matrix addition, matrix multiplication, and matrix transpose through a menu-driven interface.

This project was developed as part of an internship programming assignment to demonstrate practical understanding of arrays, 2D arrays, functions, loops, conditional statements, and modular programming.

---

## Project Overview

Matrix operations are fundamental concepts in programming, mathematics, engineering, and computer science.

This project implements three basic matrix operations:

* Matrix Addition
* Matrix Multiplication
* Matrix Transpose

The program uses two-dimensional arrays to store matrix elements and separate functions to perform each operation.

---

## Features

* Menu-driven interface
* Matrix addition
* Matrix multiplication
* Matrix transpose
* Uses 2D arrays
* Uses separate functions for each operation
* Supports matrices up to 10 × 10
* Validates matrix dimensions
* Checks multiplication compatibility
* Displays input and output matrices
* Allows multiple operations during a single execution

---

## Technologies Used

| Technology         | Purpose                 |
| ------------------ | ----------------------- |
| C                  | Programming Language    |
| GCC                | Compiler                |
| Visual Studio Code | Development Environment |
| Git                | Version Control         |
| GitHub             | Project Hosting         |

---

## Project Structure

```text
Matrix-Operations-C/
│
├── matrix_operations.c
└── README.md
```

### File Description

**matrix_operations.c**

Contains the complete C source code for matrix operations.

**README.md**

Contains project documentation, setup instructions, features, and usage information.

---

## Matrix Operations

### 1. Matrix Addition

Matrix addition is performed by adding corresponding elements of two matrices.

For example:

```text
Matrix A:

1  2
3  4

Matrix B:

5  6
7  8
```

The result is:

```text
6   8
10  12
```

For matrix addition, both matrices must have the same number of rows and columns.

---

### 2. Matrix Multiplication

Matrix multiplication is performed by multiplying the rows of the first matrix with the columns of the second matrix.

For multiplication to be possible:

```text
Columns of Matrix A = Rows of Matrix B
```

Example:

```text
Matrix A: 2 × 3

1  2  3
4  5  6
```

```text
Matrix B: 3 × 2

7   8
9   10
11  12
```

The resulting matrix will have dimensions:

```text
2 × 2
```

The program automatically checks whether the matrices are compatible for multiplication.

---

### 3. Matrix Transpose

Transpose changes the rows of a matrix into columns and the columns into rows.

Example:

```text
Original Matrix:

1  2  3
4  5  6
```

Transpose:

```text
1  4
2  5
3  6
```

If the original matrix has dimensions:

```text
Rows × Columns
```

the transpose will have:

```text
Columns × Rows
```

---

## Functions Used

The project follows a modular programming approach using separate functions.

| Function             | Description                           |
| -------------------- | ------------------------------------- |
| `inputMatrix()`      | Accepts matrix elements from the user |
| `displayMatrix()`    | Displays matrix elements              |
| `addMatrices()`      | Performs matrix addition              |
| `multiplyMatrices()` | Performs matrix multiplication        |
| `transposeMatrix()`  | Calculates matrix transpose           |
| `main()`             | Controls the program and menu         |

---

## Concepts Demonstrated

This project demonstrates the following C programming concepts:

* Variables and data types
* One-dimensional arrays
* Two-dimensional arrays
* Nested loops
* Functions
* Function prototypes
* Function parameters
* `switch-case`
* `if` statements
* `do-while` loop
* Input and output
* Modular programming
* Basic input validation

---

## How to Run the Project

### Prerequisites

Install a C compiler such as GCC.

Visual Studio Code can also be used as the development environment with a C/C++ compiler configured.

### Step 1: Clone the Repository

```bash
git clone https://github.com/your-username/Matrix-Operations-C.git
```

### Step 2: Open the Project

```bash
cd Matrix-Operations-C
```

### Step 3: Compile the Program

Using GCC:

```bash
gcc matrix_operations.c -o matrix_operations
```

### Step 4: Run the Program

#### Windows

```bash
matrix_operations.exe
```

#### Linux / macOS

```bash
./matrix_operations
```

---

## Sample Output

```text
========================================
          MATRIX OPERATIONS
========================================
1. Matrix Addition
2. Matrix Multiplication
3. Matrix Transpose
4. Exit
========================================

Enter your choice: 1

--- Matrix Addition ---

Enter number of rows: 2
Enter number of columns: 2

Enter Matrix A:
Element [1][1]: 1
Element [1][2]: 2
Element [2][1]: 3
Element [2][2]: 4

Enter Matrix B:
Element [1][1]: 5
Element [1][2]: 6
Element [2][1]: 7
Element [2][2]: 8

Matrix A:
     1     2
     3     4

Matrix B:
     5     6
     7     8

Result of Addition:
     6     8
    10    12
```

---

## Sample Matrix Multiplication

```text
Matrix A:

1  2  3
4  5  6

Matrix B:

7   8
9   10
11  12
```

Output:

```text
Result of Multiplication:

58   64
139  154
```

---

## Sample Matrix Transpose

Input:

```text
1  2  3
4  5  6
```

Output:

```text
1  4
2  5
3  6
```

---

## Input Validation

The program validates matrix dimensions before performing operations.

### Matrix Size

The maximum supported matrix size is:

```text
10 × 10
```

### Matrix Addition

For addition, both matrices must have identical dimensions.

```text
Rows A = Rows B
Columns A = Columns B
```

### Matrix Multiplication

For multiplication:

```text
Columns A = Rows B
```

If this condition is not satisfied, the program displays an appropriate error message.

---

## Program Flow

```text
Start
  |
  v
Display Menu
  |
  v
Select Operation
  |
  +------ Matrix Addition
  |
  +------ Matrix Multiplication
  |
  +------ Matrix Transpose
  |
  +------ Exit
  |
  v
Read Matrix Data
  |
  v
Call Appropriate Function
  |
  v
Display Result
  |
  v
Return to Menu
  |
  v
Exit
```

---

## Learning Objectives

The main objectives of this project are:

1. To understand two-dimensional arrays in C.
2. To implement matrix operations using functions.
3. To understand nested loops.
4. To practice modular programming.
5. To understand matrix addition.
6. To understand matrix multiplication.
7. To understand matrix transpose.
8. To implement basic input validation.
9. To improve problem-solving skills using C programming.

---

## Future Improvements

The project can be extended with additional matrix operations such as:

* Matrix subtraction
* Matrix scalar multiplication
* Matrix determinant
* Matrix inverse
* Identity matrix generation
* Symmetric matrix checking
* Diagonal matrix checking
* Dynamic memory allocation
* File-based matrix input and output

---

## Author

**HARIHARAN J**

Electronics and Communication Engineering (ECE) Student

Interested in VLSI, RTL Design, SoC, Digital Electronics, and C Programming.

---

## License

This project is created for educational and internship purposes.

You are free to study, modify, and improve the source code for learning purposes.

---

## Acknowledgement

This project was developed as part of an internship programming assignment to strengthen practical knowledge of C programming, two-dimensional arrays, functions, and modular programming.
