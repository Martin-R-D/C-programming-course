# String conversion

This example links a driver with a conversion module. From this directory:

```sh
mkdir -p build
gcc -c transformation.c -o build/transformation.o
gcc main.c build/transformation.o -o build/string-conversion
./build/string-conversion
```

The driver exercises signed numbers and invalid strings. The original driver has a format mismatch (`%d` for a `long` result); its implementation is preserved, so output is not a portability guarantee.
