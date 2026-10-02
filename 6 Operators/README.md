# Chapter 6: Operators

This directory contains the solutions to the practical questions, given throughout the chapter. The custom programs are omitted here, since there is no knowledge obtained, on the basis of which the meaningful changes could be introduced.

## What the Programs Demonstrate
* **Relational operators:** In the programs we make use of the relational operators in order to check whether the number belongs to a particular interval or equals to a certain value.
* **Logical operators:** The use of logical NOT is also demonstrated to determine, whether the value is even or odd.
* **Conditional operators:** Along with that, the conditional (ternary) operator is used to return the correct form of the word "apple": single or plural.
## Configuration & Dependencies
- The `.vscode` file with properly structured configuration can be located under [.vscode Folder](../0%20Introduction/.vscode) in the Introductory chapter.
## Prerequisites & Local Setup 
- The same as described in the [Introductory README](../0%20Introduction/README.md##-prerequisites--local-setup)
- In order for the multiple-file project to compile, all the `.cpp` files should be provided to the `args` key of the `tasks.json` file in the format `"${fileDirname}\\fileName.cpp"`.
- For the `helpers` module to be included, the reference to the respective folder should be made, which is described in the [Introductory README](../0%20Introduction/README.md).