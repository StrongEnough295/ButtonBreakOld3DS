#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <3ds.h>

int main(int argc, char* argv[])
{
	gfxInitDefault();
	consoleInit(GFX_TOP, NULL);

	printf("ButtonBreakOld3DS Build 0009\n");
	printf("-------------------------\n");

	// Main loop
	while (aptMainLoop())
	{
		gspWaitForVBlank();
		gfxSwapBuffers();
		hidScanInput();

		u32 kDown = hidKeysDown();

		if (kDown & KEY_A) {
			printf("Buttton A Pressed.\n");
			printf("------------------------\n");
		}
		
		if (kDown & KEY_B) {
			printf("Buttton B Pressed.\n");
			printf("------------------------\n");
		}

		if (kDown & KEY_X) {
			printf("Buttton X Pressed.\n");
			printf("------------------------\n");
		}

		if (kDown & KEY_Y) {
			printf("Buttton Y Pressed.\n");
			printf("------------------------\n");
		}
		
		if (kDown & KEY_L) {
			printf("Buttton L Pressed.\n");
			printf("------------------------\n");
		}

		if (kDown & KEY_R) {
			printf("Buttton R Pressed.\n");
			printf("------------------------\n");
		}

		if (kDown & KEY_SELECT) {
			printf("Buttton Select Pressed.\n");
			printf("------------------------\n");
		}

		if (kDown & KEY_TOUCH) {
			printf("Touch Screen Pressed.\n");
			printf("------------------------\n");
		}

		if (kDown & KEY_UP) {
			printf("Buttton Pad-UP Moved.\n");
			printf("------------------------\n");
		}

		if (kDown & KEY_DOWN) {
			printf("Buttton Pad-DOWN Moved.\n");
			printf("------------------------\n");
		}

		if (kDown & KEY_RIGHT) {
			printf("Buttton Pad-RIGHT Moved.\n");
			printf("------------------------\n");
		}

		if (kDown & KEY_LEFT) {
			printf("Buttton Pad-LEFT Moved.\n");
			printf("------------------------\n");
		}
		if (kDown & KEY_START) {
			break;
		}
	}
	
	gfxExit();
	return 0;
}
