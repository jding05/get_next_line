# get_next_line
Every time you call the function it gets the next line of a file. Great practice for the use of static variables


## Project overview
This C function reads in any valid file line by line until the end of file. Each line is demarcated by a newline character ('\n'), or EOF. This tool is very helpful for C developers that require reading from files or stdin/stdout.

### Advantages

This function allows you to:
- Read from multiple file desciptors
- Uses a single static variable
- Written only with basic functions: read, malloc, free

## How to use it

### Call the function

Initialise an empty character array to receive the information. Next, in your program, call the function and provide the file descriptor and the address of your empty character array, like this:

```
char	*line;
get_next_line(fd, &line);
```

Should you wish to print an entire file, similar to the Unix Cat function, you can write a loop like this:

```
while (get_next_line(fd, &line))
{
	ft_putendl(line);
	free(line);
}
```

### Download and compile the libft library

```
git clone https://github.com/jding05/get_next_line.git ~/get_next_line
cd ~/get_next_line/
make
./get_next_line [text_file]
```

### Compile with your other files 

To use this static library, include it in your header file and during compilation time.

Add the following include in your header.h or in your file :
```
#include "ft_printf.h"
```
Followed by the command to compile :
```
gcc -Wall -Wextra -Werror -I./libft/includes/ -L./libft -lft  get_next_line.c [Source files].c -o [Name]
```

To clarify:
-I gives location of the header files (`./libft/includes/` in this case)
-L gives location library resides. (`./libft`)
-l gives name of library. (E.g. if library is libft_mine, flag input would be 'ft_mine' without the initial 'lib').
