# text2ascii(art)

Input a string and generate a ascii(art) string
 
## build

```
$ mkdir build && cd build
$ cmake ..
$ make
```

## tests

```
$ # mkdir build && cd build
$ # cmake ..
$ ctest
```

## dependencies

- cmake
- make
- g++
- (CPM - Catch2)
- (Bear - needed to resolve lsp missing header files complaints wrt Catch2)
