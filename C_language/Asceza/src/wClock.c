#include <raylib.h>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>

#define SCREEN_WIDTH 400
#define SCREEN_HEIGH 400
#define SECOND_ANGLE 2
#define MINUTE_ANGLE 4
#define HOUR_ANGLE   6

int main(){
    int cur_sec, cur_min, cur_hour;
    char cur_time[20] = "";
    char cur_date[20] = "";
    char cur_week_day[20] = "";
    float sec_angle, min_angle, hour_angle;
    /* Initialization*/
    InitWindow(SCREEN_WIDTH, SCREEN_HEIGH, "CLOCK");

    SetTargetFPS(10); /*max number of frames per second*/
    while(!WindowShouldClose()){
        BeginDrawing();
        ClearBackground(GREEN);
        EndDrawing();
    }
    CloseWindow();
    return 0;
}