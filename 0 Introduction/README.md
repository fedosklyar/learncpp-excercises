# Chapter 0: Introduction & Setup

This directory contains a single-file C++ project demonstrating the completion of the introductory chapter, which focuses primarily on development environment configuration.

## What the Program Demonstrates
* **Basic I/O:** Displays a standard "Hello World" greeting and outputs the active C++ language standard set for the compiler.
* **File I/O & JSON Parsing:** Reads the local `settings.json` file to extract and display the value of the `files.insertFinalNewline` key using an input file stream.

## Configuration & Dependencies
* **`.vscode` Settings:** The configuration files under `.vscode` are deliberately **not ignored** in this repository, as proper environment configuration is the primary objective of this introductory section.
* **JSON Library:** Includes `json.hpp` for parsing configuration values. This library was created by [nlohmann](https://github.com/nlohmann/json). If you need an updated version of the single-header file, it can be downloaded directly from the Releases page of their repository under the Assets tab.

## Prerequisites & Local Setup 
Because this project tests IDE and compiler configuration, running it out-of-the-box requires to **Configure VS Code Paths**. Open the `.vscode` folder and adjust the configuration paths, such as `tasks.json` and `c_cpp_properties.json` to match your specific compiler installation directory and C++ standard version.
