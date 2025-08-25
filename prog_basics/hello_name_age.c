#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]) {

        //setting our variables
        int age;
        char *name;
        char named_input[30];

        if (argc == 1) {
                scanf("%s %d", named_input, &age);

                if( sizeof(named_input) > 30 ) {
                        printf("please enter a name that is less than 30 characters\n");
                }
                
                printf("%s is %d years old\n", named_input, age);

        } else if ( argc == 3 ) {
                name = argv[1];
                age = atoi(argv[2]);
                printf("%s is %d years old\n", name, age);
                exit(0);

        } else {
                printf("you entered the commands wrong\n");
                printf("it's <program_name> <name> <age>\n");
        }

        return 0;
}
