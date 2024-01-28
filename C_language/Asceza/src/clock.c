#include "raylib.h"
#include <time.h>
#include <stdio.h>
#include <stdlib.h>

#define SCREEN_WIDTH 400
#define SCREEN_HEIGH 400
#define SECOND_ANGLE 2
#define MINUTE_ANGLE 4
#define HOUR_ANGLE   6

void draw_clock_field(Vector2 *c){
    DrawCircle(SCREEN_WIDTH/2.0F, SCREEN_HEIGH/2.0f, 114, GOLD);/*yellow circle*/
    /*12 narrow points*/
    for(int a = 0; a < 360; a += 30){
        DrawCircleSector(*c, 114, a-2, a+2, 1, BLACK);
    }
    /*4 wide points*/
    for(int a = 0; a < 360; a += 90){
        DrawCircleSector(*c, 114, a-8, a+8, 4, BLACK);
    }
    /*black circle*/
    DrawCircle(SCREEN_WIDTH/2.0f, SCREEN_HEIGH/2.0f, 108, BLACK);
    /*static tablo numbers*/
    DrawText("12", SCREEN_WIDTH/2.0f - 8, 80, 20, GOLD);
    DrawText("3", SCREEN_WIDTH/2.0f + 93, 190, 20, GOLD);
    DrawText("6", SCREEN_WIDTH/2.0f - 6, SCREEN_HEIGH - 96, 20, GOLD);
    DrawText("9", 84, 190, 20, GOLD);
}
void get_current_time_and_date(int *c_s, int *c_m, int *c_h, char *c_t, char *c_d, char *c_w_d){
    struct tm *ptm = NULL;/*pointer to a struct with useful fields*/
    time_t t = time(NULL);/*number of seconds from 1.01.1970*/

    ptm = localtime(&t);/*local time from 1.01.1970*/
    *c_s = ptm -> tm_sec;
    *c_m = ptm -> tm_min;
    *c_h = ptm -> tm_hour;

    if(!ptm){
        printf("error_localtime\n");
        exit(1);
    }
    size_t err = strftime(c_t, 20, "%H:%M:%S", ptm);/*fixing time in char array*/
    strftime(c_d, 20, "%d:%m:%Y", ptm);/*fixing date in char array*/
    strftime(c_w_d, 20, "%A", ptm);/*fixing time in char array*/

    if(!err){
        printf("error_strftime\n");
        exit(1);
    }
}
void translate_time_to_angles(int *s, int *m, int *h, float *s_a, float *m_a, float *h_a){
    *s_a = 6 * (*s) - 90;/*360 degrees / 60 points = 6*/
    *m_a = (6 * (*m) - 90) + 6*(*s)/60;/*correction + sec*/
    *h_a = (30 * (*h) - 90) + (6*(*m)/12) + 6*(*s)/3600;/*correction + min + sec*/
}
void draw_time(char *c_t){
    DrawText(c_t, 143, 185, 30, GOLD);
}
void draw_date(char *c_d){
    DrawText(c_d, 130, 25, 30, GOLD);
}
void draw_week_day(int *c_w_d){
    DrawText(c_w_d, 130, 340, 30, GOLD);
}
int main(){
    int cur_sec, cur_min, cur_hour;
    char cur_time[20] = "";
    char cur_date[20] = "";
    char cur_week_day[20] = "";
    float sec_angle, min_angle, hour_angle;
    /* Initialization*/
    InitWindow(SCREEN_WIDTH, SCREEN_HEIGH, "CLOCK");
    Vector2 center = {(GetScreenWidth())/2.0f, GetScreenHeight()/2.0f};

    SetTargetFPS(10); /*max number of frames per second*/

    /*main loop*/
    while(!WindowShouldClose()){/*while window isn't been closed, making main loop*/
        get_current_time_and_date(&cur_sec, &cur_min, &cur_hour, cur_time, cur_date, cur_week_day);
        translate_time_to_angles(&cur_sec, &cur_min, &cur_hour, &sec_angle, &min_angle, &hour_angle);

        /*drawing*/
        BeginDrawing();
            ClearBackground(BLACK);
            draw_clock_field(&center);
            /*drawing the arrows*/
            DrawCircleSector(center, 102, hour_angle - HOUR_ANGLE/2, hour_angle + HOUR_ANGLE/2, 2, DARKGREEN);
            DrawCircleSector(center, 102, min_angle - MINUTE_ANGLE/2, min_angle + MINUTE_ANGLE/2, 10, BLUE);
            DrawCircleSector(center, 102, sec_angle - SECOND_ANGLE/2, sec_angle + SECOND_ANGLE/2, 1, RED);

            DrawCircle(SCREEN_WIDTH/2.0f, SCREEN_HEIGH/2.0f, 65, BLACK);/*field for electro clock*/
            draw_time(cur_time);
            draw_date(cur_date);
            draw_week_day(cur_week_day);
            EndDrawing();
    }
     CloseWindow();
     return 0;
}