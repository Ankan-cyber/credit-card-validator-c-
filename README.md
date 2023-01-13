# Credit Card Validator

This program is a C++ implementation of the Luhn algorithm, which is used to validate credit card numbers. The program prompts the user to enter a credit card number and then uses the Luhn algorithm to determine whether the number is valid or not.

## How to Run

The program can be compiled and run using a C++ compiler such as g++. 

```
g++ credit_card_validator.cpp -o credit_card_validator
./credit_card_validator
```


Make sure to replace "credit_card_validator.cpp" with the name of the program you want to run.

## Algorithm

The Luhn algorithm is a simple checksum formula that is used to validate credit card numbers. The algorithm is as follows:

1. Starting from the rightmost digit (the check digit) and moving left, double the value of every second digit.

2. For any digits that thus become 10 or more, subtract 9 from the result.

3. Add all the digits together.

4. If the total modulo 10 is equal to 0 (if the total ends in zero) then the number is valid.

## Example

```
Input: 4111111111111111
Output: Credit card number is valid
```

## Contributing

If you want to contribute to this repository, feel free to submit a pull request with your own improvements to existing code.

## License

This repository is not under any license, if you want to use or redistribute it please contact the author or the owner of the repository to get their permission.
