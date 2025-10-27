# libqmsstyle

## Microsoft® Windows™ is a registered trademark of Microsoft® Corporation. This name is used for referential use only, and does not aim to usurp copyrights from Microsoft. Microsoft Ⓒ 2025 All rights reserved. All resources belong to Microsoft Corporation.

## Introduction

libqmsstyle is a Qt C++ library tailor-made specifically for Windows Vista+ MSSTYLE parsing (soon Windows XP). It is extremely unfinished and some stuff may not work as expected or function names might change in the near future.

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

- [msstyleEditor](https://github.com/nptr/msstyleEditor/) original code that helped out **a lot** with Vista+ MSSTYLE parsing
