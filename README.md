# C Programming Exercises

A collection of C programming exercises covering arrays, strings, macros, compilation, libraries, integer arithmetic, bitwise operations, and variable scope.

## Exercise index

| Folder | Topics |
| --- | --- |
| [Basics](exercises/basics/) | Prime sums, digits, sorting, searching, recursion, structures |
| [Arrays and strings](exercises/arrays-and-strings/) | Matrix traversal, sorting, searching, duplicate removal |
| [Conditional compilation](exercises/conditional-compilation/) | Debug flags, compile-time sizes, platform selection |
| [Macros and functions](exercises/macros-and-functions/) | Arithmetic macros and least common multiples |
| [Macro examples](exercises/macro-examples/) | Stringification, token pasting, swapping, sorting |
| [Compilation stages](exercises/compilation/compilation-stages/) | Preprocessing, assembly, objects, linking |
| [String conversion](exercises/compilation/string-conversion/) | Linking multiple source files |
| [Math functions](exercises/compilation/math-functions/) | Linking the math library |
| [Static library](exercises/compilation/static-library/) | Creating and linking an archive |
| [String tools](exercises/makefiles/string-tools/) | Makefile-driven string utilities |
| [Safe integers](exercises/safe-integers/) | Checked arithmetic and integer limits |
| [Quadratic roots](exercises/quadratic-roots/) | Multi-file numerical example |
| [Variable scope](exercises/variable-scope/) | Process-list simulation and module state |
| [Bitwise operations](exercises/bitwise-operations/) | Interactive room-light switches |

## Requirements

Use GCC, GNU Make, and a POSIX shell, such as Linux or WSL. The static-library example also requires `ar` (GNU Binutils). The examples have been built with GCC 14; some use GNU extensions. No external libraries or services are required beyond the C and math libraries.

## Quick start

From the repository root:

```sh
make -C exercises/makefiles/string-tools
./exercises/makefiles/string-tools/build/strlength hello
./exercises/makefiles/string-tools/build/strconcat hello world
./exercises/makefiles/string-tools/build/strcompare same same
```

Expected outputs are `5`, `helloworld`, and `0`.

The other Makefile projects use the same build and cleanup commands:

```sh
make -C exercises/safe-integers
./exercises/safe-integers/build/safeadd 20 22
make -C exercises/quadratic-roots
./exercises/quadratic-roots/build/quadratic-roots
make -C exercises/variable-scope
printf 'c\ndemo\np\ne\n' | ./exercises/variable-scope/build/task-manager
make -C exercises/safe-integers clean
```

The addition prints `42`. The process-list example creates and lists `demo`, then exits. Always supply two numeric arguments to the safe-arithmetic programs.

For a standalone exercise:

```sh
mkdir -p build
gcc exercises/basics/01-sum-primes.c -o build/sum-primes
./build/sum-primes
```

This prints `43`. Compile exercises individually; many define their own `main`. See the compilation folders for multi-file and static-library commands.

## Scope and limitations

These are learning exercises with their original implementations preserved. Some contain compiler warnings, portability issues, or runtime defects; a successful build does not imply every input is handled correctly. There is no repository-wide automated test suite. The math-functions guide documents an unsafe array-type mismatch; the string-conversion guide documents a format mismatch.

Generated binaries, objects, libraries, and `build/` directories are ignored. The tracked assembly and preprocessed source in compilation-stages are historical teaching artifacts, not build prerequisites.

See [CONTRIBUTING.md](CONTRIBUTING.md) for conventions. Licensed under the [MIT License](LICENSE).
