
# Setting Up VS Code for C++ Programming

Follow these steps to set up **Visual Studio Code (VS Code)** for C++ programming on your system:

---

## Prerequisites

- Install **Visual Studio Code**: [Download here](https://code.visualstudio.com/).
- Install a **C++ Compiler**:
  - Windows: [MinGW-w64](http://mingw-w64.org/) or [MSYS2](https://www.msys2.org/).
  - macOS: Install Xcode Command Line Tools (`xcode-select --install`).
  - Linux: Install GCC (`sudo apt install build-essential`).

---

## Step 1: Install C++ Extension

1. Open **VS Code**.
2. Go to the **Extensions View** (`Ctrl+Shift+X`).
3. Search for `C/C++` by **Microsoft** and install it.

---

## Step 2: Install and Configure a Compiler

### Windows (Using MinGW-w64)
1. Download MinGW-w64 from [here](http://mingw-w64.org/).
2. Install it and note the `bin` directory path (e.g., `C:\MinGW\bin`).
3. Add the `bin` folder to your system `PATH`:
   - Search "Environment Variables" in Windows.
   - Edit `Path` and add the MinGW `bin` path.

### macOS
1. Install **Xcode Command Line Tools**:
   ```bash
   xcode-select --install
   ```

### Linux
1. Install GCC:
   ```bash
   sudo apt update
   sudo apt install build-essential
   ```

2. Verify the compiler installation:
   ```bash
   g++ --version
   ```

---

## Step 3: Write Your First C++ Program

1. Create a new folder for your project and open it in VS Code.
2. Create a new file, e.g., `main.cpp`, and write the following code:
   ```cpp
   #include <iostream>
   using namespace std;

   int main() {
       cout << "Hello, World!" << endl;
       return 0;
   }
   ```

---

## Step 4: Configure Build Tasks

1. Open the terminal (`Ctrl+``) and type:
   ```bash
   g++ -o main main.cpp
   ```
2. Run the program:
   ```bash
   ./main      # For Linux/Mac
   main.exe    # For Windows
   ```

### Automating Build and Run
1. Go to **Terminal > Configure Default Build Task**.
2. Select `C/C++: g++.exe build active file`.
3. Use `Ctrl+Shift+B` to build the file.

---

## Step 5: Set Up Debugging (Optional)

1. Install the **Code Runner** extension for quick program execution.
2. To debug:
   - Go to **Run > Add Configuration**.
   - Choose `C++ (GDB/LLDB)` or `C++ (Windows)`.
   - This creates a `.vscode/launch.json` file for debugging.

---

## Additional Tools

- **Clang-Format** for code formatting:
  ```bash
  sudo apt install clang-format clang-tidy  # Linux
  ```
- Configure formatting in `Settings > Text Editor > Formatting`.

---

## Example Output

When you run `main.cpp`, the output will be:
```
Hello, World!
```

