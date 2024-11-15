# 42-libasm-tester

This repository contains a tester for the **42-libasm** project, which you can use to test your implementation of **libasm**.

## Usage

Follow these steps to use the tester:

1. **Clone the 42-libasm-tester repository**:
   Clone the **42-libasm-tester** repository to your local machine:
   ```bash
   git clone git@github.com:HeitorMP/42-libasm-tester.git
   cd 42-libasm-tester
   ```

2. **Copy the tester folder: Change into the 42-libasm-tester directory**:
    ```bash
    cp -r tester <path-to-42-libasm-project>
    ```

3. **Run the tester: Inside the tester directory of your 42-libasm project, run make**:
    ```bash
    cd <path-to-42-libasm-project>/tester
    make
    ```
4. ***Compile the main project!***

5. ***Edit the tests.h File***
    ```
    Open the tests.h file inside the tester folder and update the path to the libasm.h header file to point to its correct location in your environment.

    // path to your libasm.h
    # include "../headers/libasm.h" <- change this if needed
    ```

6. **Edit the Makefile**
    ```
    Open the Makefile inside the tester folder and update the path to the libasm.a library file so it points to the correct location.

    PATH_TO_LIBASM_A  = ../libasm.a <- change this if needed
    ```

7. **Compile and Run the Tester**
    ```
    make
    ./libasm-tester
    ```

## The tester will execute and show the results of various tests to check the functionality of your libasm implementation.
### A file named `log_erros.txt` will be generated with the test results.

Requirements

    A working 42-libasm project.
    A Unix-based system (Linux, macOS).
    Make and a C compiler (e.g., GCC) installed.

License
This project is licensed under the MIT License - see the LICENSE file for details.

