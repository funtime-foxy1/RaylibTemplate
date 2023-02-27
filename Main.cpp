// Template made by FunFoxRR: 
/* HOW TO INSTALL RAYLIB :
	- go to "Developer PowerShell"
	- type following commands:
		git clone https://github.com/Microsoft/vcpkg.git
		cd vcpkg
		./bootstrap-vcpkg.sh
		./vcpkg intergrate install
		./vcpkg install raylib
	
	IF DOESNT WORK, CHANGE MODE TO x64 OR x86 (whatever you dont have enabled)
	check raylib docs for functions: https://github.com/raysan5/raylib/wiki
*/

#include "raylib.h"

int main() {
	InitWindow(1280, 720, "Gaem");
	SetTargetFPS(60); // Optional (sets FPS)

	while (!WindowShouldClose())
	{
		BeginDrawing();
		ClearBackground(BLACK); // Change BG color here
		// PUT GAME LOGIC HERE //
		
		// Center for rectangles: GetScreenHeight() / 2 - HALF_OF_HEIGHT (height/2)

		DrawCircle(GetScreenWidth() / 2, GetScreenHeight() / 2, 20, WHITE);
		

		/////////////////////////
		EndDrawing();
	}

	CloseWindow();
	return 0;
}