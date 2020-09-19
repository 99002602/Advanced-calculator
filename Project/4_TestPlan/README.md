## Test Plan

| ID   | Description | Precondition | Expected input | Expected output | Actual output |
|----  |-------------|--------------|----------------|-----------------|---------------|
|H01| Basic operations | Operation number entered must be between 1 and 4 | 4 | Division | Division |
|H02| Advanced operations | Operation number entered must be between 5 and 15 | 9 | Common Logarithm | Common Logarithm |
|H03| Report invalid operations | Operation number entered must not be between 1 and 16 | 20 | Invalid operation | Invalid operation |
|H04| Report invalid inputs | Size of operand(s) entered exceeds the size of type of operand(s) | 3.5e+38 | 3.5e+38 | Size exceeded |
|H04| Report invalid inputs | Size of result of an operation exceeds the size for which it is defined | factorial(20) | 2.4e+18 | Size exceeded |
|H04| Report invalid inputs | Operand entered for division/modulo/inverse is zero | inverse(0) | Not defined | Error. Try again |
