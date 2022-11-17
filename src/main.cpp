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

using namespace std;

int test() {
  OS_TOK_DISP "MAYBE";
  return 0;
}

int main() {
  /*string input;    //declare this variable as a string
  cin >> input;   //get input from console as variable
  cout << input;    //output variable value to console*/
  OS_TOK_MENU("TEST", "TEST", test());
  return 0;
}
