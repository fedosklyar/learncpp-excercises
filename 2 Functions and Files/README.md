# Chapter 2: C++ Basics: Functions and Files

This directory contains the solutions to the practical questions, given throughout the chapter. The simple calculator application preserves the same functionality, but was transformed in the multi-file project in accordance with the best practices on that, demonstrated in the lesson.

## What the Programs Demonstrate
* **Functions usage:** In this chapter the construction of a function was introduced along with some fundamental aspects and best practices.
* **Forward declarations:** The technique which allows to keep the definitions of the objects after the main function and make them visible for it via the declaration at the top.
* **Multiple files usage:** How to configure the environment in order for the project to consist of several files.
* **.h files:** The usage of the files of the special .h type, which are intended for the declarations of the identifiers.

## Configuration & Dependencies
- The `.vscode` file with properly structured configuration can be located under [.vscode Folder](../0%20Introduction/.vscode) in the Introductory chapter.
## Prerequisites & Local Setup 
- The same as described in the [Introductory README](../0%20Introduction/README.md##-prerequisites--local-setup)
- In order for the multiple-file project to compile, all the .cpp files should be provided to the "args" key of the `tasks.json` file in the format `"${fileDirname}\\fileName.cpp"`.