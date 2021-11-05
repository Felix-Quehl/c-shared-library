# How to code, build and use a shared library in C

This is a example implementation that shows how use dynamically linked shared libraries in c.

## Clone

```bash
git clone git@github.com:Felix-Quehl/c-shared-library.git
cd ./c-shared-library
```

```bash
.
├── LICENSE
├── README.md
├── exec # source code for executable 
│   ├── Makefile
│   └── sources
│       └── main.c
└── joke # source code for library
    ├── Makefile
    ├── headers
    │   └── joke.h
    └── sources
        └── joke.c

5 directories, 7 files
```

## Compile

### Compile Library

Commands:

```bash
cd ./joke
make
cd ..
```

Output:

```
clang -Weverything -Wall -Wextra -Werror -Wpedantic -fno-inline -I./headers  -o sources/joke.o -c sources/joke.c
clang --shared  sources/joke.o -o libjoke.so
```

### Compile Executable

Commands:

```bash
cd ./exec
make
cd ..
```

Output:

```
clang -Weverything -Wall -Wextra -Werror -Wpedantic -I./headers -I../joke/headers  -o sources/main.o -c sources/main.c
clang -L../joke -ljoke sources/main.o -o joke.out
```

## Runtime

When executing you have to tell LD where to find the library.
This can be done via a environmental variable.

Commands:
```bash
LD_LIBRARY_PATH=./joke ./exec/joke.out
```

Output:

```
Why are libraries the tallest buildings in the world? Because they have so many stories!
```
