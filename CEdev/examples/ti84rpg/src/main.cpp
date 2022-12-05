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

int os_Output(char text[], uint8_t row, uint8_t column) {
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
	char str[] = "1:Test";
	os_Output(str,0,0);
	str[] = 
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
	int8_t q = 1;
    int16_t w = 1;
    int32_t e = 1;
    int64_t r = 1;
    int_fast8_t t = 1;
    int_fast16_t y = 1;
    int_fast32_t u = 1;
    int_fast64_t i = 1;
    int_least8_t o = 1;
    int_least16_t p = 1;
    int_least32_t a = 1;
    int_least64_t s = 1;
    intmax_t d = 1;
    intptr_t f = 1;
    uint8_t g = 1;
    uint16_t h = 1;
    uint32_t j = 1;
    uint64_t k = 1;
    uint_fast8_t l = 1;
    uint_fast16_t z = 1;
    uint_fast32_t x = 1;
    uint_fast64_t c = 1;
    uint_least8_t v = 1;
    uint_least16_t b = 1;
    uint_least32_t n = 1;
    uint_least64_t m = 1;
    uintmax_t q2 = 1;
    uintptr_t w2 = 1;
    short e2 = 1;
    short int r2 = 1;
    signed short t2 = 1;
    signed short int y2 = 1;
    unsigned short u2 = 1;
    unsigned short int i2 = 1;
    int o2 = 1;
    signed p2 = 1;
    signed int a2 = 1;
    unsigned s2 = 1;
    unsigned int d2 = 1;
    long f2 = 1;
    long int g2 = 1;
    signed long h2 = 1;
    signed long int j2 = 1;
    unsigned long k2 = 1;
    unsigned long int l2 = 1;
    long long z2 = 1;
    long long int x2 = 1;
    signed long long c2 = 1;
    signed long long int v2 = 1;
    unsigned long long b2 = 1;
    unsigned long long int n2 = 1;
    char m2 = 1;
    signed char q3 = 1;
    unsigned char w3 = 1;
    wchar_t e3 = 1;
    char16_t r3 = 1;
    char32_t t3 = 1;
    float y3 = 1.0;
    double u3 = 1.0;
    long double i3 = 1.0;
	
	os_ClrHome();
	struct {
		uint16_t health = 10;
		uint8_t weapon = 1;
		uint8_t inventory[14][3];
	} playerData;

	mainMenu();

	/*string input;    //declare this variable as a string
	cin >> input;   //get input from console as variable
	cout << input;    //output variable value to console*/
	
	return 0;
}
