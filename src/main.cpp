/*
 *--------------------------------------
 * Program Name: TI84RPG
 * Author: WRCSTRSHR
 * License: GNU GPLv3
 * Description: An rpg for the ti84CE
 *--------------------------------------
*/

#include <iostream>
#include <string>

#include <ti/tokens.h>
#include <ti/screen.h>

using namespace std;

int test(void) {
	os_PutStrFull("MAYBE");
	return 0;
}

int main(void) {
	os_ClrHome();
	/*string input;    //declare this variable as a string
	cin >> input;   //get input from console as variable
	cout << input;    //output variable value to console*/
	OS_TOK_MENU("TEST", "TEST", test());
	return 0;
}
