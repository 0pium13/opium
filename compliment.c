#include <stdio.h>
#include <unistd.h> // Include for the sleep function
#include <sys/wait.h>

int main() {
    while (1) {  // Infinite loop
        printf("Good Morning\n");
        sleep(1); // Hold time of 1 seconds
        printf("aur kaise ho sab badhiya\n");
        sleep(1);
        printf("breakfast kiya ki nahi\n");
        sleep(1);
        printf("Are mai puch rha hu....\n");
        sleep(1);
    }
    return 0;  // This line will never be reached
}
