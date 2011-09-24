What is this?
=============

This repo is a collection of tools and examples with the intent of making it relatively easy to build Linux programs using dynamic linking to mimic a form of hotswapping.

Intended primarily for game development, the premise is fairly simple. Separate your program into as many unique libraries as possible and use invoke\_method() from src/loader.c (or something similar) to access them. By doing this, any time a library is re-compiled, changes made will be available within the running program on the fly.

A simple example can be found in test/. The test program consists of two files in separate folders, one for the library and one for the executable. Instructions for compiling each of them can be found in their header comments. After both are compiled, start running the executable, then make a change to the library and re-compile it in a separate window. If all went well, you should see the change reflected immediately in the executable's output.
