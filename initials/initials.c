#include <stdio.h>
#include <string.h>
#include <cs50.h>
#include <ctype.h>

int main(void)
{
    char * name = get_string();
    char initials[5];
    while(strlen(name) > 0) {
        if(strncmp(&name[0], " ", 1) == 0) {
            name = name+1;
        }
        else {
            int length = strlen(initials);
            initials[length] = toupper(name[0]);
            initials[length+1] = '\0';

            while(strlen(name) > 0 && strncmp(&name[0], " ", 1) != 0) {
                name = name+1;
            }
        }
    }
    printf("%s\n", initials);
}