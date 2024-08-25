#include <stdio.h>

#define HEIGHT 20
#define WIDTH 20

void draw_to_screen(char canvas[HEIGHT][WIDTH]);

int main(){

    //defining the board we're working with
    char canvas[HEIGHT][WIDTH];

    //initializing canvas with spaces
    for(int i=0 ; i < HEIGHT ; i++) {
        for(int j =0 ; j < WIDTH ; j++) {
            canvas[i][j] = ' ';
        }
    }

    // Draw a rectangle on the canvas
    for (int i = 2; i < HEIGHT - 2; i++) {
        for (int j = 4; j < WIDTH - 4; j++) {
            if (i == 2 || i == HEIGHT - 3 || j == 4 || j == WIDTH - 5) {
                canvas[i][j] = '#';
            }
        }
    }

    draw_to_screen(canvas);

    return 0;
}

void draw_to_screen(char canvas[HEIGHT][WIDTH]){
    // Print the canvas
    for (int i = 0; i < HEIGHT; i++) {
        for (int j = 0; j < WIDTH; j++) {
            putchar(canvas[i][j]);
        }
        putchar('\n');
    }
}