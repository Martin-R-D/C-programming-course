# Contributing

Keep each pull request focused and describe what changed, why, and how it was verified.

## File organization

- Place exercises under the relevant topic in `exercises/`.
- Use lowercase, hyphen-separated names. Preserve exercise numbers where they help identify the original sequence.
- Keep each multi-file project with its headers, driver, Makefile, and documentation.
- Update build references and documentation links when moving or renaming files.
- Preserve the existing source/header names within established modules unless a focused change updates every reference.

## Build outputs

Write generated files into a `build/` directory. Do not commit executables, objects, or static libraries. The assembly and preprocessed examples already tracked in compilation-stages are intentional historical references; keep them separate from newly generated output.

## Validation

For file moves, verify that source contents remain identical. For Makefile changes, run the affected build, verify a second invocation needs no rebuild, run a representative example, and check `make clean`. For documentation changes, check paths and run safe command examples from the documented directory.

Run `git diff --check` before submitting. Report existing warnings, failed checks, and commands that were not run. Keep implementation fixes separate from structural cleanup. Do not suppress warnings or change C implementations simply to make a repository-maintenance check pass.
