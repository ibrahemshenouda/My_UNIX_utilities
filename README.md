# UNIX System Utilities in C

![C](https://img.shields.io/badge/c-%2300599C.svg?style=for-the-badge&logo=c&logoColor=white)
![Linux](https://img.shields.io/badge/Linux-FCC624?style=for-the-badge&logo=linux&logoColor=black)

[unix utilites_Demo.webm](https://github.com/user-attachments/assets/a2b7be53-befc-4f55-ae8a-f1a697939432)

A collection of standard UNIX utilities implemented from scratch in C. These programs demonstrate fundamental system-level programming concepts in Linux/UNIX environments using core POSIX system calls such as `open()`, `read()`, `write()`, `close()`, `getcwd()`, and `unlink()`.

## 🛠️ Utilities Included

Here is the list of utilities provided in this repository and their functionalities:

1. **`mycat`**  
   Mimics the standard `cat` utility. It opens an existing file and outputs its contents directly to the standard output (`stdout`).

2. **`mycp`**  
   Mimics the standard `cp` utility. It copies the contents of a source file to a destination file. If the destination file does not exist, it creates it; if it does, it truncates it to zero before writing.

3. **`mymv`**  
   Mimics the standard `mv` utility. It moves a file to another destination (or simply renames it) by copying its contents to the new path and unlinking (deleting) the original source file.

4. **`mypwd`**  
   Mimics the standard `pwd` utility. It prints the absolute path of the current working directory.

5. **`myecho`**  
   Mimics the standard `echo` utility. It prints the provided arguments back to the standard output, separated by spaces, followed by a newline.

---

## ⚙️ Prerequisites

To compile and run these utilities, you will need a Linux/UNIX environment with a C compiler (like `gcc`) installed.

```bash
sudo apt update
sudo apt install build-essential
```

## 🚀 Compilation

You can compile each utility individually using `gcc`. For example:

```bash
gcc -o mycat mycat.c
gcc -o mycp mycp.c
gcc -o mymv mymv.c
gcc -o mypwd mypwd.c
gcc -o myecho myecho.c
```

## 💻 Usage

Once compiled, you can run the generated executables from the terminal.

### mycat
```bash
./mycat <filename>
```

### mycp
```bash
./mycp <source_file> <destination_file>
```

### mymv
```bash
./mymv <source_file> <destination_file>
```

### mypwd
```bash
./mypwd
```

### myecho
```bash
./myecho [arguments...]
```

## 📖 Under the Hood

These tools avoid the C standard library buffered I/O functions (like `fopen`, `fread`, `fwrite`) where possible to demonstrate lower-level OS interactions. Instead, they make direct use of file descriptors and unbuffered system calls:
- `open(..., O_RDONLY)` and `open(..., O_CREAT | O_RDWR | O_TRUNC, 0644)`
- `read()` and `write()`
- `getcwd()`
- `unlink()`
