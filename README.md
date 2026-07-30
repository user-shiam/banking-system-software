# banking-system-software

A simple console-based banking system written in C++ for learning and demonstration purposes. This project provides a menu-driven application that allows creating accounts, depositing and withdrawing money, viewing account details, and closing accounts.

## Language

- C++ (100%)

## Features

- Open a new account (first name, last name, account type, account number, and starting deposit)
- Deposit money into an account
- Withdraw money from an account
- View account details
- Close an account
- About / project credits

## Requirements

- A C++ compiler (g++, clang++, or MSVC)
- Basic terminal/console

## Build

On Linux/macOS:

```bash
g++ -std=c++11 bankfinal.cpp -o banking-system
```

On Windows (MinGW):

```bash
g++ -std=c++11 bankfinal.cpp -o banking-system.exe
```

Run the program:

```bash
./banking-system
# or on Windows:
banking-system.exe
```

## Usage

The program is menu-driven. After launching it you will see the main menu with numbered options:

1. Open a New Account
2. Deposit to an Account
3. Withdraw From An Account
4. View An Account Details
5. Close An Account
6. About our application
0. Exit

Important behavior enforced by the current implementation:

- Starting deposit must be at least 1000 (currency unit used in the program).
- Minimum deposit allowed when depositing through the menu is 500.
- Withdrawals are limited to amounts less than 10000.

## Known issues and limitations

This is an educational/simple implementation and has several limitations you should be aware of:

- No data persistence: all accounts exist only in memory while the program runs. Exiting the program loses all data.
- Fixed-size arrays and inconsistent limits: name arrays are sized for only 5 entries while account arrays are larger in places, and some loops assume at most 5 accounts. This can cause undefined behavior or limited capacity.
- Unsafe/old-style C++ patterns: use of raw char arrays for names, goto statements, and direct use of system("cls") make the code less portable and harder to maintain.
- Minimal input validation and error handling: entering non-numeric text where numbers are expected can crash the program.
- Platform-dependent screen clearing: the program uses system("cls"), which works on Windows but not on POSIX systems. Replace with `system("clear")` on macOS/Linux or remove for portability.

## Suggested improvements

If you'd like to improve the project, here are recommended changes:

- Replace C-style arrays and char buffers with `std::string`, `struct` or `class` for accounts, and `std::vector` to hold accounts dynamically.
- Add file-based persistence (save/load accounts to a text or binary file or use JSON).
- Improve input validation and error handling.
- Remove `goto` and refactor control flow for clarity and safety.
- Add unit tests and automated CI.
- Make screen-clearing portable or optional.

## Contributors

- Shad Ahmed (Shiam)
- Aminul Islam
- Masudur Rahman (Anik)
- Shamim Reza

Special thanks to our teacher: Muhammad Faisal Imran

## License

No license specified. If you want to open-source the project, consider adding a license such as MIT or Apache-2.0 (create a `LICENSE` file).
