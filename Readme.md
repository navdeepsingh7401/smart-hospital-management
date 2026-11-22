# Smart Hospital Patient and Appointment Management System

## About

The Smart Hospital Patient and Appointment Management System is a C++ application designed to organize patient information and hospital appointments. It uses SQLite for persistent data storage, with `sqlite_modern_cpp` providing a C++ interface to the database.

## Project structure

The application source is in `src/`. The `sqlite_modern_cpp` dependency is kept in the project root.

## Libraries

- **sqlite_modern_cpp**: C++ wrapper for SQLite.
- **iostream**: Standard C++ input/output library.
- **Custom headers**: Project-specific headers.

## Setup

1. Clone the SQLite wrapper into the project root:

   ```bash
   git clone https://github.com/SqliteModernCpp/sqlite_modern_cpp.git
   ```

2. In VS Code, add `${workspaceFolder}/sqlite_modern_cpp/hdr` to the `includePath` in `.vscode/c_cpp_properties.json` so IntelliSense can find `sqlite_modern_cpp.h`.

3. Ensure SQLite is installed and available to your compiler. On macOS, you can install it with:

   ```bash
   brew install sqlite
   ```

4. From the project root, build and run the application:

   ```bash
   clang++ -std=c++14 src/main.c++ -I sqlite_modern_cpp/hdr -lsqlite3 -o hospital
   ./hospital
   ```

The `-I` option adds the wrapper's header directory, and `-lsqlite3` links SQLite.
