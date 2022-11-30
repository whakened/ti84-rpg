/*
 *--------------------------------------
 * Program Name: TI84RPG
 * Author: WRCSTRSHR
 * License: GNU GPLv3
 * Description: An rpg for the ti84CE
 *--------------------------------------
*/

#include <string>

#include <ti/getcsc.h>
#include <ti/tokens.h>
#include <ti/screen.h>

using namespace ti::literals; // namespace std; otherwise

void os_Output(string text, int row, int column) {
	os_SetCursorPos(row, column);
	os_PutStrFull(text);
}

void menu(string options) {
	bool entered = false;
	bool keyPressed = false;
	int selected = 0;
	while (!entered) {
		for (int i : options) {
			os_Output(i + ": " + options[i], i, 0);
		}
		while (!keyPressed) {
			key = os_GetCSC();
			if (key ~= sk_Enter) {
				if (key == sk_Down && selected > 0) {
					selected -= 1;
					keyPressed = true;
				} else if (key == sk_Up && selected < sizeof(options) / sizeof(string)) {
					selected += 1;
					keyPressed = true;
				}
			} else {
				entered = true;
			}
		}
		keyPressed = true;
	} 
}

int main(void) {
	os_ClrHome();
	struct {
		unsigned int health = 10;
		unsigned int weapon = 1;
		string inventory[14][3];
	  } playerData;
	string choices[3] = {"One", "Two", "Three"};
	menu(choices);
	/*string input;    //declare this variable as a string
	cin >> input;   //get input from console as variable
	cout << input;    //output variable value to console*/
	
	return 0;
}
