# Grade Calculator

## Overview

This is a simple C++ console application that calculates the Semester Grade Point Average (SGPA) and Cumulative Grade Point Average (CGPA) for a student based on their grades and credit hours. The application allows users to input their grades and corresponding credit hours for each course, and then calculates their SGPA for the semester. Additionally, users can input their SGPA for multiple semesters to compute their CGPA.

## Features

- **SGPA Calculation**: Enter the grades and credit hours for each course to calculate the SGPA for a semester.
- **CGPA Calculation**: Enter the SGPA for each semester to compute the overall CGPA.
- **User-Friendly Menu**: An interactive menu to choose between SGPA calculation, CGPA calculation, and exit options.

## Usage

1. **Compile and Run**:
   - Compile the code using a C++ compiler:
     ```sh
     g++ -o grade_calculator grade_calculator.cpp
     ```
   - Run the executable:
     ```sh
     ./grade_calculator
     ```

2. **Menu Options**:
   - Select **1** to calculate SGPA:
     - Enter the total number of courses.
     - For each course, enter the grade and the corresponding credit hours.
     - The program will calculate and display the SGPA for the semester.
   - Select **2** to calculate CGPA:
     - Enter the total number of semesters.
     - For each semester, enter the SGPA.
     - The program will calculate and display the CGPA after the given number of semesters.
   - Select **3** to exit the program.

## Grading Scale

The following grading scale is used in the program:
- A: 4.0
- A-: 3.7
- B+: 3.3
- B: 3.0
- B-: 2.7
- C+: 2.3
- C: 2.0
- C-: 1.7
- D+: 1.3
- D: 1.0
- D-: 0.7


## License

This project is licensed under the MIT License.

## Contributing

Contributions are welcome! Please fork this repository and submit pull requests with your improvements.

- F: 0.0

## Example

