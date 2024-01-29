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
    const int screenWidth = 500;
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
                if(framesCounter > 120)
                currentScreen = TITLE;
            }
            break;
        case TITLE:
        {
            // Press enter to change to GAMEPLAY screen
            if(IsKeyPressed(KEY_ENTER)||IsGestureDetected(GESTURE_TAP)){
                currentScreen = GAMEPLAY;
            }
        }
        case GAMEPLAY:
        {
            
        }
        default:
            break;
        }
    }
    


}