# c-shared-library

This is a example implementation that shows how use dynamically linked shared libraries in c.


## Runtime

When executing you have to tell LD where to find the library.
This can be done via a environmental variable:

```bash
LD_LIBRARY_PATH=./joke ./exe/joke.out
```