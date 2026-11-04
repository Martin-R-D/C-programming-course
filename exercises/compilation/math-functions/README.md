# Math functions

This example demonstrates linking the math library. From this directory:

```sh
mkdir -p build
gcc fourth-powers.c -lm -o build/fourth-powers
```

The original example passes an `int` array to a function expecting `long` elements. GCC 14 rejects this command with an incompatible-pointer-types error. Older compilers may only warn; running the resulting program can access memory incorrectly. The source is preserved for a separate code-fix task. This is an expected compile failure with GCC 14, not a setup problem. Do not suppress the diagnostic to run the program.
