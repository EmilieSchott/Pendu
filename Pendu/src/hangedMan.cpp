#include <iostream>
#include "../include/hangedMan.h"

using namespace std;

void displayHangedMan(int& errorsNumber) {
	switch (errorsNumber) {
		case 11:
			cout << "                                   ______ " << endl;
			cout << "                                   |/   | " << endl;
			cout << "                                   |    o " << endl;
			cout << "                                   |   /|\\" << endl;
			cout << "                                   |   / \\" << endl;
			cout << "                                   |      " << endl;
			cout << "                                 __|__    " << endl;

			break;

		case 10:
			cout << "                                   ______ " << endl;
			cout << "                                   |/   | " << endl;
			cout << "                                   |    o " << endl;
			cout << "                                   |   /|\\" << endl;
			cout << "                                   |   /  " << endl;
			cout << "                                   |      " << endl;
			cout << "                                 __|__    " << endl;

			break;

		case 9:
			cout << "                                   ______ " << endl;
			cout << "                                   |/   | " << endl;
			cout << "                                   |    o " << endl;
			cout << "                                   |   /|\\" << endl;
			cout << "                                   |      " << endl;
			cout << "                                   |      " << endl;
			cout << "                                 __|__    " << endl;

			break;

		case 8:
			cout << "                                   ______ " << endl;
			cout << "                                   |/   | " << endl;
			cout << "                                   |    o " << endl;
			cout << "                                   |   /| " << endl;
			cout << "                                   |      " << endl;
			cout << "                                   |      " << endl;
			cout << "                                 __|__    " << endl;

			break;

		case 7:
			cout << "                                   ______ " << endl;
			cout << "                                   |/   | " << endl;
			cout << "                                   |    o " << endl;
			cout << "                                   |    | " << endl;
			cout << "                                   |      " << endl;
			cout << "                                   |      " << endl;
			cout << "                                 __|__    " << endl;

			break;

		case 6:
			cout << "                                   ______ " << endl;
			cout << "                                   |/   | " << endl;
			cout << "                                   |    o " << endl;
			cout << "                                   |      " << endl;
			cout << "                                   |      " << endl;
			cout << "                                   |      " << endl;
			cout << "                                 __|__    " << endl;

			break;

		case 5:
			cout << "                                   ______ " << endl;
			cout << "                                   |/   | " << endl;
			cout << "                                   |      " << endl;
			cout << "                                   |      " << endl;
			cout << "                                   |      " << endl;
			cout << "                                   |      " << endl;
			cout << "                                 __|__    " << endl;

			break;

		case 4:
			cout << "                                   ______ " << endl;
			cout << "                                   |/     " << endl;
			cout << "                                   |      " << endl;
			cout << "                                   |      " << endl;
			cout << "                                   |      " << endl;
			cout << "                                   |      " << endl;
			cout << "                                 __|__    " << endl;

			break;

		case 3:
			cout << "                                   ______ " << endl;
			cout << "                                   |      " << endl;
			cout << "                                   |      " << endl;
			cout << "                                   |      " << endl;
			cout << "                                   |      " << endl;
			cout << "                                   |      " << endl;
			cout << "                                 __|__    " << endl;

			break;

		case 2:
			cout << "                                          " << endl;
			cout << "                                   |      " << endl;
			cout << "                                   |      " << endl;
			cout << "                                   |      " << endl;
			cout << "                                   |      " << endl;
			cout << "                                   |      " << endl;
			cout << "                                 __|__    " << endl;

			break;

		case 1:
			cout << "                                          " << endl;
			cout << "                                          " << endl;
			cout << "                                          " << endl;
			cout << "                                          " << endl;
			cout << "                                          " << endl;
			cout << "                                          " << endl;
			cout << "                                 __ __    " << endl;

			break;

		case 0:
		default:
			cout << "                                          " << endl;
			cout << "                                          " << endl;
			cout << "                                          " << endl;
			cout << "                                          " << endl;
			cout << "                                          " << endl;
			cout << "                                          " << endl;
			cout << "                                          " << endl;

			break;
	}
}