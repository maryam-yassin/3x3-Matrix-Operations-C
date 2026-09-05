# 3×3 Matrix Operations Using Functions in C

This project is a C program that works with a **3×3 matrix**. It allows the user to enter the matrix, display it, and calculate the sums of its rows, columns, and main diagonal.

The program is organized using **functions**, with each function responsible for a specific operation.

## Features

* Enter the elements of a 3×3 matrix
* Display the matrix
* Calculate the sum of each column
* Calculate the sum of each row
* Calculate the sum of the main diagonal
* Organize the program using separate functions

## Functions Used

### `enterMatrice()`

Takes the matrix as a parameter and allows the user to enter all 9 elements.

```c
void enterMatrice(int m[3][3])
```

### `DisplayMatrice()`

Displays the elements of the matrix in a structured format.

```c
void DisplayMatrice(int m[3][3])
```

### `sumRowsColumns()`

Calculates and displays the sum of every row and every column.

```c
void sumRowsColumns(int m[3][3])
```

### `sumMainDiagonal()`

Calculates the sum of the main diagonal using the condition:

```c
if (i == j)
```

```c
void sumMainDiagonal(int m[3][3])
```

## Example

For this matrix:

```text
1  2  3
4  5  6
7  8  9
```

The program produces:

```text
Sum of column 0 = 12
Sum of column 1 = 15
Sum of column 2 = 18

Sum of row 0 = 6
Sum of row 1 = 15
Sum of row 2 = 24

Sum of diagonal = 15
```

## Concepts Practiced

This project practices several fundamental C programming concepts:

* 2D arrays
* Matrices
* Functions
* Passing arrays to functions
* Nested `for` loops
* `if` conditions
* User input with `scanf()`
* Output with `printf()`
* Basic matrix operations

## Program Structure

```text
3x3-matrix-functions/
│
├── main.c
└── README.md
```

The `main()` function calls the different functions in order:

```c
int main()
{
    int T[3][3];

    enterMatrice(T);
    DisplayMatrice(T);
    sumRowsColumns(T);
    sumMainDiagonal(T);

    return 0;
}
```

This keeps the `main()` function simple and makes each operation easier to understand and reuse.

## Technologies

* **Language:** C
* **Compiler/IDE:** Code::Blocks

## Author

**Maryam Yassin**

