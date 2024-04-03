## CS150/250 C++ Template

## TODO

1. In main, create an Employee called your name with some made up ID.  Output the Employee data to the display.

2. Implement HourlyEmployee as described in class.  

3. Create a pointer variable of type HourlyEmployee.  

4. Create a dynamically allocated HourlyEmployee pointed to by the variable pcHourlyEmployee. Output the HourlyEmployee data to the display.

5. In the terminal, type the command "make valgrind" without the quotes. Do you get any memory leaks? If so, fix the problem.

6. Show me your work.

7. A salaried employee is one that has a yearly salary and gets paid either monthly or bi-weekly. Create a SalariedEmployee class in SalariedEmployee.h.

8. Implement SalariedEmployee.

9. Create a dynamically allocated SalariedEmployee pointed to by the variable pcSalariedEmployee. Output the SalariedEmployee data to the display.

10. Run "make valgrind" to make sure you have no memory leaks.


## Commands

1. Execute without debugging

    * Open a Terminal session
    * Make sure you are in the directory where the Makefile is located
    * Type the command <b>make</b>. If all goes well, you will see something similar to 

      ```
        @ryan2135 ➜ /workspaces/AssignmentT (main) $ make
        mkdir -p bin
        clang++ -g -Wall -std=c++17 -o bin/main.exe src/*.cpp -Iinclude
        ryan2135 ➜ /workspaces/AssignmentT (main) $ 
      ```
    * Type bin/main.exe

2. Debug

    * Set a break point in your program
    * In the VS Code Activity Bar, select the Debug option (triangle)
    * Select the RUN AND DEBUG lldb - debug option

3. Print PDF

    * Open task bar with Ctrl+P
    * Type <b>task</b> in the task bar followed by a space
    * Select printToPDF
    * The pdf will be created in the pdfs directory