# text2ascii(art)

Input a string and generate a ascii(art) string

```
$ text2ascii "top text"

888                               888                       888
888                               888                       888
888                               888                       888
888888  .d88b.  88888b.           888888  .d88b.   888  888 888888
888    d88""88b 888 "88b          888    d8P  Y8b  `Y8bd8P' 888
888    888  888 888  888          888    88888888    X88K   888
Y88b.  Y88..88P 888 d88P          Y88b.  Y8b.      .d8""8b. Y88b.
 "Y888  "Y88P"  88888P"            "Y888  "Y8888   888  888  "Y888
                888
                888

$ text2ascii "bottom text"

888               888    888                                    888                       888
888               888    888                                    888                       888
888               888    888                                    888                       888
88888b.   .d88b.  888888 888888  .d88b.  88888b.d88b.           888888  .d88b.   888  888 888888
888 "88b d88""88b 888    888    d88""88b 888 "888 "88b          888    d8P  Y8b  `Y8bd8P' 888
888  888 888  888 888    888    888  888 888  888  888          888    88888888    X88K   888
888 d88P Y88..88P Y88b.  Y88b.  Y88..88P 888  888  888          Y88b.  Y8b.      .d8""8b. Y88b.
88888P"   "Y88P"   "Y888  "Y888  "Y88P"  888  888  888           "Y888  "Y8888   888  888  "Y888
```
 
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
