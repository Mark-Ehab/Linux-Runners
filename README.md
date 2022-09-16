# Linux-Runners
## Assignment#1 (Femto Shell)
### Compilation commands used in this assignment:
- " gcc -o myFemtoShell *.c " which is translated in my case to " gcc -o myFemtoShell femtoShell.c print_wrapper.c read_wrapper.c ".
- I also used another compilation method through getting the relocatable object file of each .c file in project through commands " gcc -c femtoShell.c "
, " gcc -c print_wrapper.c " and " gcc -c read_wrapper.c " then linked them together to get the executable (.elf) file through command " gcc -o myFemtoShell *.o".
- I created two header files holding prototypes of wrapper fumctions through the follwing commands " vim print_wrapper.h " and " vim read_wrapper.h "
then included them in femtoShell.c file.
