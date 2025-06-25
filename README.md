# Libft

![C](https://img.shields.io/badge/C-00599C?style=for-the-badge&logo=c&logoColor=white)
![Linux](https://img.shields.io/badge/Linux-FCC624?style=for-the-badge&logo=linux&logoColor=black)
![macOS](https://img.shields.io/badge/macOS-000000?style=for-the-badge&logo=apple&logoColor=white)
![42](https://img.shields.io/badge/42-Project-00BABC?style=for-the-badge)

## 📋 Project Overview

Libft is the first project in the 42 school curriculum, designed to create a custom C library containing a collection of general-purpose functions. These functions replicate standard libc functionalities and include additional utility functions, serving as a foundational tool for future 42 projects. The project emphasizes robust coding practices, memory management, and adherence to strict coding norms.

## ✨ Key Features

- **Standard Libc Functions**: Reimplementations of functions like `ft_strlen`, `ft_memcpy`, and `ft_strchr` with identical behavior to their libc counterparts.
- **Additional Utilities**: Custom functions such as `ft_substr`, `ft_strjoin`, and `ft_split` for advanced string manipulation.
- **Bonus Linked List Functions**: Optional implementations for managing linked lists, including `ft_lstnew`, `ft_lstadd_front`, and `ft_lstmap`.
- **Norm Compliance**: Adheres to 42's strict coding standards, with no memory leaks or undefined behaviors.
- **Modular Design**: Functions are organized for reusability across other projects.

## 🛠️ Prerequisites

- **Operating System**: UNIX-based (Linux, macOS, etc.).
- **Compiler**: `gcc`.
- **Build Tool**: `make`.

## 🚀 Installation

1. Clone the repository:
   ```bash
   git clone https://github.com/your-username/libft.git
   cd libft
   ```

2. Compile the library:
   ```bash
   make
   ```
   This creates `libft.a` at the root of the repository.

3. (Optional) Compile with bonus functions:
   ```bash
   make bonus
   ```

## 📖 Usage

1. Include the library in your project:
   - Copy the `libft` directory into your project folder.
   - Include the header in your source files:
     ```c
     #include "libft.h"
     ```

2. Link the library during compilation:
   ```bash
   gcc -Wall -Wextra -Werror your_program.c -L. -lft
   ```

### Example
```c
#include "libft.h"
#include <stdio.h>

int main(void)
{
    char *str = ft_strdup("Hello, Libft!");
    printf("%s\n", str);
    free(str);
    return (0);
}
```

## 📂 Project Structure

```
libft/
├── Makefile          # Build automation script
├── libft.h           # Header file with function prototypes
├── ft_*.c            # Source files for mandatory functions
├── ft_*_bonus.c      # Source files for bonus functions
└── libft.a           # Compiled library (generated)
```

## 🛠️ Makefile Commands

| Command       | Description                              |
|---------------|------------------------------------------|
| `make`        | Builds the mandatory `libft.a`.          |
| `make bonus`  | Builds `libft.a` with bonus functions.   |
| `make clean`  | Removes object files.                    |
| `make fclean` | Removes object files and `libft.a`.      |
| `make re`     | Rebuilds the project from scratch.       |

## 🔍 Technical Details

- **Mandatory Functions**:
  - Libc reimplementations: `ft_isalpha`, `ft_strlen`, `ft_memcpy`, `ft_strlcpy`, etc.
  - Additional utilities: `ft_substr`, `ft_strjoin`, `ft_split`, `ft_itoa`, etc.
  - File descriptor outputs: `ft_putchar_fd`, `ft_putstr_fd`, `ft_putnbr_fd`, etc.
- **Bonus Functions**:
  - Linked list management: `ft_lstnew`, `ft_lstadd_front`, `ft_lstsize`, `ft_lstmap`, etc.
- **Constraints**:
  - No global variables allowed.
  - Helper functions must be static to limit scope.
  - Compiled with `-Wall -Wextra -Werror`.
  - Uses `ar` to create the library (no `libtool`).
  - Memory allocation must be freed properly (no leaks).
- **External Functions**:
  - Allowed: `malloc`, `free`, `write`.
  - Function-specific allowances per the subject (e.g., `ft_memset` can use `memset`).

## 📝 Notes

- Ensure functions comply with project-specific guidelines when reused in other 42 projects.
- Create test programs to verify functionality, though they are not submitted.
- The bonus part is evaluated only if the mandatory part is flawless.
- All files must be at the repository root, with no unused files submitted.

## 📜 License

This project is licensed under the [MIT License](LICENSE).

## 👤 Author

**your-username**  
GitHub: [your-username](https://github.com/your-username)

---

⭐️ If you find this project useful, consider giving it a star on GitHub!