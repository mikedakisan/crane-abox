# Crane
Crane is an (OSS) large library of tools ranging from custom data files and extensions to making complex C algorithms easier to use with the customizable built in functions of the framework.

# Data File Creation
With crane you can create your own data files with custom names and formats in C.

### Setting data formats

Usage:
```c
set_data_format("test");
```
This function will globaly set the data format to `test`. You can change test to whatever name you want.

### Creating data files
```c
create_data_file("hello");
```
This function will create a `hello.test` file because above we set our format to test. In that file you can write whatever data you want.