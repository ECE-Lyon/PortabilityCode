#include <stdio.h>
#include <stdlib.h>
#include "portability.h"

int main()
{
    portability_background_color(COLOR_RED);
    printf("Red-------------\n");
    portability_background_color(COLOR_BLUE);
    printf("Blue-------------\n");
    portability_background_color(COLOR_GREEN);
    printf("Green-------------\n");
    portability_background_color(COLOR_BLACK);
    printf("BLACK-------------\n");
    portability_background_color(COLOR_GRAY);
    printf("Gray-------------\n");

    portability_text_color(COLOR_RED);
    printf("Red-------------\n");
    portability_text_color(COLOR_BLUE);
    printf("Blue-------------\n");
    portability_background_color(COLOR_DEFAULT);
    portability_text_color(COLOR_GREEN);
    printf("Green-------------\n");
    portability_text_color(COLOR_GRAY);
    printf("Gray-------------\n");
    portability_text_color(COLOR_BLACK);
    printf("BLACK-------------\n");
    return 0;
}

