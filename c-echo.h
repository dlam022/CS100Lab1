#include <iostream>
#include <string>


using namespace std;

string echo(int length, char** chars) {
	string ret = "";
	for(int i = 1; i < length; i++) {
		ret += chars[i];
		if(i < length - 1) {
			ret += " ";
		}
	}
	return ret;
}

string specialecho(char* character) {
	string temp = "";
	string arr[11] = {"!", "@", "#", "$", "%", "^", "&", "*", "(", ")", "?"};
	temp = character;
	for(int i = 0; i < 11; i++) {
	//	temp += character[i];
		if(arr[i] == temp) {
			return temp;
		}
	}

}

string numberecho(char* numbergen) {
	string temper = "";
	string arr[10] = {"0", "1", "2", "3", "4", "5", "6", "7", "8", "9"};
	temper = numbergen;
	for(int i = 0; i < 10; i++) {
		if(arr[i] == temper) {
			return temper;
		}
	}
}

string upperecho(char* uppercase) {
	string holder = "";
	string arr[26] = {"A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "K", "L", "M", "N", "O", "P", "Q", "R", "S", "T", "U", "V", "W", "X", "Y", "Z"};
	holder = uppercase;
	for(int i = 0; i < 26; i++) {
		if(arr[i] == uppercase) {
			return uppercase;
		}
	}
}

