# Get Started with the Miru C++ SDK
To begin using the miru sdk, clone this [getting-started](https://github.com/miruml/getting-started) repository and navigate the `/cpp` directory from the root of the repository.

```bash
git clone https://github.com/miruml/getting-started.git
```
```bash
cd getting-started/cpp
```

Initialize the build directory and copy the examples to the `/cpp` directory. You can find these examples in the [Miru C++ SDK](https://github.com/miruml/cpp-sdk/tree/main/examples) repository.

```bash
cmake -B build -S .
```

```bash
cp -r ./build/_deps/miru-src/examples ./
```

Build the examples
```bash
cmake --build build
```

Examples should be executed from the `/cpp` directory so that the file system paths evaluate correctly. All examples can be executed using the following pattern.

```bash
./build/examples/<examples-directory-name>/<example-binary-name>
```

For instance, the `from_file` example is executed by invoking

```bash
./build/examples/from_file/from-file
```

from the root of the repository. The binary name is simply the example directory name with the underscores (`_`) replaced with hyphens (`-`)
