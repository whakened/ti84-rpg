/*
 *--------------------------------------
 * Program Name: TI84RPG
 * Author: WRCSTRSHR
 * License: GNU GPLv3
 * Description: An rpg for the ti84CE
 *--------------------------------------
*/

#include <string.h>
#include <stdint.h>

#include <sys/lcd.h>
#include <ti/tokens.h>
#include <ti/screen.h>
#include <keypad.h>

//using namespace ti::literals; // namespace std; otherwise //???? WHAT DOES THIS DO

int os_Output(char text, uint8_t row, uint8_t column) {
	os_SetCursorPos(row, column);
	os_PutStrFull(text);
	return 0;
}

/* void menu(char options[]) {
	bool entered = false;
	bool keyPressed = false;
	uint8_t selected = 0;
	while (!entered) {
		for (uint8_t i : options) {
			os_Output(i + ": " + options[i], i, 0);
		}
		while (!keyPressed) {
			uint8_t key = os_GetCSC();
			if (key != sk_Enter) {
				if (key == sk_Down && selected > 0) {
					selected -= 1;
					keyPressed = true;
				} else if (key == sk_Up && selected < sizeof(options) / sizeof(char)) {
					selected += 1;
					keyPressed = true;
				}
			} else {
				entered = true;
			}
		}
		keyPressed = true;
	} 
} */

int mainMenu(void) {
	os_Output("1:Test",0,0);
	os_Output("2:Other",1,0);
	bool keyPressed = false;
	bool entered = false;
	uint8_t selected = 0;
	kb_key_t key;
	do {
		kb_Scan();
		key = kb_Data[7];
		switch (key){
			case kb_Down:
				if(selected>0){selected-=1;}
				break;

			case kb_Up:
				if(selected<1){selected+=1;}
				break;

			default:
				break;
		}
	} while (kb_Data[6] != kb_Enter);
	/* while (!keyPressed) {
			uint8_t key = os_GetCSC();
			if (key != sk_Enter) {
				if (key == sk_Down && selected > 0) {
					selected -= 1;
					keyPressed = true;
				} else if (key == sk_Up && selected < 2) {
					selected += 1;
					keyPressed = true;
				}
			} else {
				entered = true;
			}
		}
	} */
	return 0;
}

int main(void) {
	os_ClrHome();
	struct {
		uint16_t health = 10;
		uint8_t weapon = 1;
		uint8_t inventory[14][3];
	} playerData;



	/*string input;    //declare this variable as a string
	cin >> input;   //get input from console as variable
	cout << input;    //output variable value to console*/
	
	return 0;
}
