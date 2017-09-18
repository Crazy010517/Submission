#include <iostream>
#include <fstream>
#include <math.h>
#include <string>
using namespace std;
ifstream infile("coins.in");

void toCoin(){
	ofstream file;
	file.open("coins.out");
	double dollar;
	while (infile >> dollar){
		int totalCoins = 0;
		int quarters = dollar/0.25;
		dollar = dollar - (0.25 * quarters);
		totalCoins = totalCoins + quarters;


		int dimes = dollar/0.1;
		dollar = dollar - (0.1 * dimes);
		totalCoins = totalCoins + dimes;

		int nickels = dollar/0.05;
		dollar = dollar - (0.05 * nickels);
		totalCoins = totalCoins + nickels;

		int pennies = ceil(dollar * 100);//Have to round up or it calculates it as one less penny. Probably has something to do with double to int conversion
		totalCoins = totalCoins + pennies;
		
		cout << totalCoins;
		file << totalCoins;


	//	Won't let me concatenate >.>
	//	string stringCoins = to_string(totalCoins);
	//	cout << stringCoins+" coins\n";
	}
	file.close();
}

int main(){
	toCoin();
	return 0;
}
