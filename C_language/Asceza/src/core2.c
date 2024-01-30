#include <stdio.h>
#include "raylib.h"
#include "config.h"

typedef enum GameScreen{LOGO = 0, TITLE, GAMEPLAY, ENDING} GameScreen;
int main(void)
{
    printf( "Project version is %d", (PROJECT_VERSION_MAJOR) );
    printf( ".%d", PROJECT_VERSION_MINOR );
    printf( ".%d", PROJECT_VERSION_PATCH );
    printf("\nExercise 2 core basic.\n");
    const int screenWidth = 900;
    const int screenHeight = 900;

    InitWindow(screenHeight, screenWidth, "raylib [core] example basic window.");
    GameScreen currentScreen = LOGO;
    int framesCounter = 0; // Useful to count frames
    SetTargetFPS(60); // Set desired framerate (frames-per-second)
    // Main game loop
    while (!WindowShouldClose())
    {
        switch (currentScreen)
        {
        case LOGO:
            {
                framesCounter++;
                // Wait for 2 seconds (120 frames) before jumping to TITLE screen
                if(framesCounter > 120){
                    currentScreen = TITLE;
                }
            }
            break;
        case TITLE:
        {
            // Press enter to change to GAMEPLAY screen
            if(IsKeyPressed(KEY_ENTER)||IsGestureDetected(GESTURE_TAP)){
                currentScreen = GAMEPLAY;
            }
        }
        break;
        case GAMEPLAY:
        {
             // Press enter to change to ENDING screen
             if(IsKeyPressed(KEY_ENTER)||IsGestureDetected(GESTURE_TAP))
                currentScreen = ENDING;
        }
        break;
        case ENDING:
        {
             // Press enter to return to TITLE screen
             if(IsKeyPressed(KEY_ENTER)||IsGestureDetected(GESTURE_TAP))
                currentScreen = TITLE;
        }
        default:
            break;
        }
        // Draw
        BeginDrawing();
        ClearBackground(RAYWHITE);
        switch (currentScreen)
        {
            case LOGO:
            {
                DrawText("Logo screen", 20, 20, 40, LIGHTGRAY);
                DrawText("Wait for 2 seconds...", 290, 220, 20, GRAY);
            }
            break;
            case TITLE:
            {
                DrawRectangle(0, 0, screenWidth, screenHeight, GREEN);
                DrawText("Title screen", 20, 20, 40, LIGHTGRAY);
                DrawText("PRESS ENTER or TAP to JUMP to GAMEPLAY SCREEN", 120, 220, 20, DARKGREEN);
            }
            break;
            case GAMEPLAY:
            {
                DrawRectangle(0, 0, screenWidth, screenHeight, PURPLE);
                DrawText("Gameplay screen", 20, 20, 40, MAROON);
                DrawText("PRESS ENTER or TAP to JUMP to ENDING SCREEN", 130, 220, 20, MAROON);
            }
            break;
            case ENDING:
            {
                DrawRectangle(0, 0, screenWidth, screenHeight, BLUE);
                DrawText("Ending screen", 20, 20, 40, DARKBLUE);
                DrawText("PRESS ENTER or TAP to JUMP to GAMEPLAY SCREEN", 120, 220, 20, DARKBLUE);
            }
            break;
        default:
            break;
        }
        EndDrawing();
    }
    CloseWindow();
    return 0;
}