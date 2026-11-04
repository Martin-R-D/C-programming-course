# Compilation stages

Run these commands from this directory with GCC:

```sh
mkdir -p build
gcc -E 01-square-of-sum.c -o build/01-square-of-sum.preprocessed.c
gcc -S 02-least-common-multiple.c -o build/02-least-common-multiple.s
gcc -c 02-least-common-multiple.c -o build/02-least-common-multiple.o
gcc build/02-least-common-multiple.o -o build/least-common-multiple
./build/least-common-multiple
```

The final program prints `36`. The tracked `.s` and `.preprocessed.c` files are historical teaching examples, preserved as reference material. Regenerate outputs in `build/`; preprocessed system headers and assembly depend on the compiler and platform. Do not compile every `.c` file together.
