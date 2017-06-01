#include <iostream>
#define METHOD(x) x##_COMMAND,
enum Parameters {
		#include "example.h"
		COMMAND_TOTAL
};

using namespace std;

int main(){
	cout << ATTACK_COMMAND << endl;
	cout << DEFENSE_COMMAND << endl;
	cout << LEVEL_UP_COMMAND << endl;
	cout << SPEED_COMMAND << endl;
	cout << CLASS_COMMAND << endl;
}