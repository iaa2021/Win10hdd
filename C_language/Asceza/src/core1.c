#include <stdio.h>
#include "raylib.h"
#include "config.h"
//------------------------------------------------------------------------------------
// Program main entry point
//------------------------------------------------------------------------------------
int main(void)
{
    printf( "Project version is %d", (PROJECT_VERSION_MAJOR) );
    printf( ".%d", PROJECT_VERSION_MINOR );
    printf( ".%d", PROJECT_VERSION_PATCH );
    printf("\nExercise 1 core basic.\n");
    const int screenWidth = 500;
    const int screenHeight = 900;

    InitWindow(screenHeight, screenWidth, "my 1'st raylib [core] example - basic window.");
    SetTargetFPS(10);

    while (!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(GREEN);
        DrawText("Congrats, you've created your first window!!!", 190, 200, 20, RED);
        EndDrawing();
    }
    CloseWindow();
    return 0;
}