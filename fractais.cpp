#include "lib/cpen.h"

void resetUI() {
    pen_clear();
    pen_set_back_color(255, 255, 255);
    pen_set_color(0, 0, 0);
    pen_set_heading(0);
    pen_set_thickness(1);
    pen_set_xy(400, 300);
    pen_down();
}

int main() {
    pen_open(800, 600);

    resetUI();

    pen_wait();
    pen_close();
}