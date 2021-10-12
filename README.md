# ft_printf project 42_Cursus

Because putnbr and putstr aren't enough!

For this project, we are given the task to recode our own printf function.
The mandatory requirement is that we handle the type conversions that proceed a ```"%"``` in the string given as the first argument.
This introduced me to variadic arguments. It has also helped me in learning how to link multiple files in different directories while maintaining easy to read code.

# Testing...

My function passes all of the mandatory tests provided by printfTester.
Run ```make m``` in ```./printfTester``` to execute the tests.

# How to use

Call the name of the function.
```
  ft_printf()
```
The function will print out a formatted string given as the first argument. You can convert a data type to print in the formatted string using multiple arguments.
The conversion types are specified with a ```"%"``` and the following character being ```"csdiu%"```.

- Print Char - ```"%c"``` 

- Print String - ```"%s"``` 

- Print Decimal - ```"%d"``` 

- Print Integer - ```"%i"```

- Print Unsigned - ```"%u"```

- Print Pointer - ```"%p"```

- Print Lowercase Hexadecimal - ```"%x"```

- Print Uppercase Hexadecimal - ```"%X"```

- Print Percent - ```"%%"```

```
  ft_printf("%% %c %s %d %i %u %p %x %X", 'c', "example", 15254, -42, 0, &value, 42, 420);
```
To use my ft_printf function with your code. Simply clone this repository into your directory.

//git clone

Then run the make command to compile the files neccassary to build ```./libftprintf.a```
```
  $ make libftprintf.a
```
Then compile your code with ```./libftprint.a```
```
  $ gcc -Wall -Werror -Wextra <your_filename.c> libftprintf.a
```
Thankyou for visiting.
I will post my results after submission.
