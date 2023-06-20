


Naming Conventions:
    - snake_case --meh whatever
    - camelCase




Operators
    - when you use incrementors or decrementors, ++ or -- you can add it before or after the variable
    - so if the x = 10 and you say y = x++, it will assign y = x and then increment x by 1, so at the end, x will = 11 and y will = 10
    - if you add the incrementor before the variable, it will increment x first and then assign the new value of x to y.  so in the end x = 11 and y = 11

    Order or priority of operators
        multiplication and division have higher priority so it will always do those calculations first.  1 + 2 * 3 = 7 for example.  it does 2 times 3 then adds 1 to that result.
        change the order of operations with () example: (1+2) * 3 = 9


Namespaces
    - certain methods have to be imported
        - #include <iostream> is input output stream, which basically has all the tools to output to the console.
        - using that we can use the std namespace to print to the console.  std::cout << "string";  cout is the command to print to console
        - if you declare std at the start of the code, it will be global and you only have to declare the second one.

        declare it: using namespace std;

            use cout:  cout << string;

            endl puts the next output on the next line - std::cout << "string" std::endl << "second string";

            if you declared it globally it would be just cout << "string << endl 
                                                              << "second string";