# Static library

From this directory, compile the implementation, archive it, then link the driver:

```sh
mkdir -p build
gcc -c maths.c -o build/maths.o
ar rcs build/libmaths.a build/maths.o
gcc main.c -Lbuild -lmaths -o build/factorial
./build/factorial
```

The program prints `120`. `-Lbuild` selects the library directory; `-lmaths` selects `libmaths.a`. Keep the library after the source/object that uses it in the linker command.
