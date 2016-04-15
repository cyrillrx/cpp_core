# Cpp logger
A basic logger for cpp

# Build scripts
## Install the requirements
```
$ conan install . -s compiler=clang -s compiler.version=3.7 -s compiler.libcxx=libstdc++11
$ conan install . -s compiler="Visual Studio" -s compiler.version=14 -s compiler.runtime=MT
$ conan install . -s compiler=apple-clang -s compiler.version=7.3 -s compiler.libcxx=libstdc++
```

## Compile and run the tests
```
$ rm -rf build && mkdir build && cd build
$ cmake ../ -DBUILD_TEST=TRUE && cmake --build .
```

## Execute the test!
```
$ cd bin
$ test_core.exe (WIN)
$ ./test_core (UNIX)
```

# Reuse
## Export module
```
$ conan export cyrillrx/stable
```

## Check availability
```
$ conan search *Core*
```

## Install the module
```
$ conan install Core/0.1.0@cyrillrx/stable --build Core
```