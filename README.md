# libqmsstyle

## Introduction

libqmsstyle is a Qt C++ library tailor-made specifically for Windows Vista+ MSSTYLE parsing. It is extremely unfinished and some stuff may not work as expected or function names might change in the near future.

At the time of writing this, libqmsstyle is being developed under Qt Creator, with Qt 6.10.0.

## TODO

- [ ] Finish documentation
    - [ ] Vista+ MSSTYLE
    - [ ] XP MSSTYLE
- [X] MSSTYLE extraction to ``/tmp/libqmsstyle-msstylename``
- [X] Add support for reading and storing MSSTYLE classes
- [X] Add support for getting the parts of an MSSTYLE class
- [X] Add support for getting the states of an MSSTYLE class part
- [ ] Make a singleton which will store every MSSTYLE property for every class, part and state
- [ ] Expose the property types enum
- [ ] Finish properties reading
- [ ] Add writing support
- [ ] Add AMAP reading support
- [ ] Convert the current testing app into an MSSTYLE previewer
- [ ] Add Windows XP MSSTYLE parsing support

## Credits

- The Evil Ass Fountain Openers: [catpswin56](https://gitgud.io/catpswin56/), [dominichayesferen](https://github.com/dominichayesferen/), [wackyideas](https://gitgud.io/wackyideas/): research, prototyping and implementation
- [msstyleEditor](https://github.com/nptr/msstyleEditor/) original code that helped out **a lot** with Vista+ MSSTYLE parsing
