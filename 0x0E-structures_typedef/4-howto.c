task 4 How to:
This task is asking you to create a function that will create a new dog_t structure. The structure should have fields for name, age, and owner.

The function should take in parameters for name, age, and owner, and then create a new dog_t structure with these values.

The key point here is that you need to store a copy of name and owner, not the original strings. This means you'll need to use a function like strdup to create a new copy of these strings.

If any part of this function fails (for example, if strdup fails to allocate memory), you should clean up any resources you've allocated and return NULL.

Here's a rough pseudocode outline:

    Allocate memory for a new dog_t structure.
    If allocation fails, return NULL.
    Use strdup to create a copy of name and owner.
    If strdup fails, free any previously allocated memory and return NULL.
    Assign the copied name, age, and owner to the new dog_t structure.
    Return a pointer to the new dog_t structure.

Remember, you'll need to handle memory management carefully to avoid leaks or crashes.

HOW STRDUP WORKS:**********
char *strdup(const char *str); is the declaration of the strdup() function in C. It takes a pointer to a const char string as its argument and returns a pointer to a char string that is a duplicate of the input string. The memory for the new string is allocated dynamically using the malloc() function.

The strdup() function works as follows:

    It allocates enough memory to hold a copy of the input string, plus a terminating null byte (\0).
    It copies the characters from the input string to the newly allocated memory.
    It adds a terminating null byte to the end of the copied string.
    It returns a pointer to the newly allocated memory.

Here is a more detailed explanation of each step:

    To allocate memory, the strdup() function uses the malloc() function. The malloc() function takes the size of the memory block to allocate as its argument and returns a pointer to the newly allocated memory. In the case of the strdup() function, the size of the memory block to allocate is the length of the input string plus one byte for the terminating null byte.
    To copy the characters from the input string to the newly allocated memory, the strdup() function uses a simple loop. The loop iterates over the input string, copying each character to the newly allocated memory.
    To add a terminating null byte to the end of the copied string, the strdup() function simply adds a \0 character to the end of the string.
    Once the strdup() function has copied the input string to the newly allocated memory and added a terminating null byte, it returns a pointer to the newly allocated memory.

The strdup() function is a useful function for duplicating strings in C. It is important to note that the memory allocated by the strdup() function must be freed using the free() function when it is no longer needed.

Here is an example of how to use the strdup() function:
C

const char *str = "Hello, world!";
char *copy = strdup(str);

printf("The copy of the string is: %s\n", copy);

free(copy);

Use code with caution. Learn more

Output:

"
The copy of the string is: Hello, world!
"
