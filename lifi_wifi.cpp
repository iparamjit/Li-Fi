// c++ simulation for selection of Li-Fi or Wi-Fi
// on the basis of the parameters selected by the user

#include<iostream>
#include<cmath>
#include<stdlib.h>
#include<vector>
#include<unordered_map>
using namespace std;

int main() {

	system("cls");

	// input
	int n;
	cout << "\t\t\t\t\t\t\t------------------" << endl;
	cout << "\t\t\t\t\t\t\t  Li-Fi vs Wi-Fi" << endl;
	cout << "\t\t\t\t\t\t\t------------------" << endl << endl;
	cout << "\t\t\t Select the parameter(s) for performing the selection between Li-Fi and Wi-Fi :" << endl << endl;
	cout << "\t\t\t\t\t\t\t  1. Security" << endl;
	cout << "\t\t\t\t\t\t\t  2. Medium" << endl;
	cout << "\t\t\t\t\t\t\t  3. Range" << endl;
	cout << "\t\t\t\t\t\t\t  4. Cost" << endl;
	cout << "\t\t\t\t\t\t\t  5. Topology" << endl;
	cout << "\t\t\t\t\t\t\t  6. Data Density" << endl;
	cout << "\t\t\t\t\t\t\t  7. Value" << endl;
	cout << "\t\t\t\t\t\t\t  8. Data transmission" << endl;
	cout << "\t\t\t\t\t\t\t  9. Obstacle interference" << endl;
	cout << "\t\t\t\t\t\t\t  10. Availability" << endl << endl;
	cout << "\t\t\t\t\t\t Enter the number of options  : ";      cin >> n;
	cout << "\t\t\t\t\t\t Enter the option(s) : ";
	vector<int> option(n);
	for (int i = 0; i < n; i++) {      cin >> option[i];      }
	cout << endl;

	unordered_map<int, string> data;
	data[1] = "Li-Fi";
	data[3] = "Wi-Fi";
	data[4] = "Li-Fi";
	data[7] = "Wi-Fi";
	data[9] = "Wi-Fi";
	data[10] = "Li-Fi";

	char a_b;

	// selection on the basis of MEDIUM :
	for (int i = 0; i < n; i++) {
		if (option[i] == 2) {
			cout << "\t\t\t _________________________________________________________________________________" << endl << endl;
			cout << "\t\t\t\t\t\t\t  2. Medium" << endl;
			cout << "\t\t\t\t\t\t\t\t  A. Visible Light " << endl;
			cout << "\t\t\t\t\t\t\t\t  B. Radio Waves " << endl;
			cout << "\t\t\t\t\t\t\t Select the option : ";      cin >> a_b;
			if (a_b == 'A') {      data[2] = "Li-Fi";      }
			else {      data[2] = "Wi-Fi";      }
			cout << endl;
			cout << "\t\t\t _________________________________________________________________________________" << endl << endl;
			break;
		}
	}

	// selection on the basis of TOPOLOGY :
	for (int i = 0; i < n; i++) {
		if (option[i] == 5) {
			cout << "\t\t\t _________________________________________________________________________________" << endl << endl;
			cout << "\t\t\t\t\t\t\t  5. Topology" << endl;
			cout << "\t\t\t\t\t\t\t\t  A. Point to Point " << endl;
			cout << "\t\t\t\t\t\t\t\t  B. Point to Multipoint " << endl;
			cout << "\t\t\t\t\t\t\t Select the option : ";      cin >> a_b;
			if (a_b == 'A') {      data[5] = "Li-Fi";      }
			else {      data[5] = "Wi-Fi";      }
			cout << endl;
			cout << "\t\t\t _________________________________________________________________________________" << endl << endl;
			break;
		}
	}

	// selection on the basis of DATA DENSITY
	for (int i = 0; i < n; i++) {
		if (option[i] == 6) {
			cout << "\t\t\t _________________________________________________________________________________" << endl << endl;
			cout << "\t\t\t\t\t\t\t  6. Data Density" << endl;
			cout << "\t\t\t\t\t\t\t\t  A. High data density " << endl;
			cout << "\t\t\t\t\t\t\t\t  B. Low data density " << endl;
			cout << "\t\t\t\t\t\t\t Select the option : ";      cin >> a_b;
			if (a_b == 'A') {      data[6] = "Li-Fi";      }
			else {      data[6] = "Wi-Fi";      }
			cout << endl;
			cout << "\t\t\t _________________________________________________________________________________" << endl << endl;
			break;
		}
	}

	// selection on the basis of DATA TRANSMISSION :
	for (int i = 0; i < n; i++) {
		if (option[i] == 8) {
			cout << "\t\t\t _________________________________________________________________________________" << endl << endl;
			cout << "\t\t\t\t\t\t\t  8. Data transmission" << endl;
			cout << "\t\t\t\t\t\t\t\t  A. using bits " << endl;
			cout << "\t\t\t\t\t\t\t\t  B. using radiowaves " << endl;
			cout << "\t\t\t\t\t\t\t Select the option : ";      cin >> a_b;
			if (a_b == 'A') {      data[8] = "Li-Fi";      }
			else {      data[8] = "Wi-Fi";      }
			cout << endl;
			cout << "\t\t\t _________________________________________________________________________________" << endl << endl;
			break;
		}
	}

	// performing the selection process :
	int lifi_count = 0, wifi_count = 0;

	for (auto node : data) {
		for (int i = 0; i < n; i++) {
			if (node.first == option[i]) {
				if (node.second == "Li-Fi") {      lifi_count++;      }
				else {      wifi_count++;      }
				break;
			}
		}
	}

	string result;
	if (lifi_count > wifi_count) {      result = "Li-Fi";      }
	else if (wifi_count > lifi_count) {      result = "Wi-Fi";      }
	else {      result = "Li-Fi/Wi-Fi";      }

	system("cls");

	cout << "\t\t\t\t\t\t\t------------------" << endl;
	cout << "\t\t\t\t\t\t\t  Li-Fi vs Wi-Fi" << endl;
	cout << "\t\t\t\t\t\t\t------------------" << endl << endl << endl;;
	cout << "\t\t\t Based on your selections, you can choose : " << result << endl << endl;
	cout << "\t\t\t _________________________________________________________________________________" << endl << endl;

	for (int i = 0; i < n; i++) {
		switch (option[i]) {
		case 1 :
			cout << "\t\t\t\t\t Security : " << endl;
			cout << "\t\t\t\t\t Li-Fi -> More secure cannot be hacked" << endl;
			cout << "\t\t\t\t\t Wi-Fi -> Less secure can be hacked easily" << endl << endl;
			break;
		case 2 :
			cout << "\t\t\t\t\t Medium : " << endl;
			cout << "\t\t\t\t\t Li-Fi -> Visible light is used as a medium for transfer of data" << endl;
			cout << "\t\t\t\t\t Wi-Fi -> Radio waves are used as a medium for transfer of data" << endl << endl;
			break;
		case 3 :
			cout << "\t\t\t\t\t Range : " << endl;
			cout << "\t\t\t\t\t Li-Fi -> Range is limited upto 10 meters" << endl;
			cout << "\t\t\t\t\t Wi-Fi -> Range is large can be extended upto 100 meters" << endl << endl;
			break;
		case 4 :
			cout << "\t\t\t\t\t Cost : " << endl;
			cout << "\t\t\t\t\t Li-Fi -> It is cheaper as it uses the light" << endl;
			cout << "\t\t\t\t\t Wi-Fi -> It is expensive as it uses radio spectrum" << endl << endl;
			break;
		case 5 :
			cout << "\t\t\t\t\t Topology : " << endl;
			cout << "\t\t\t\t\t Li-Fi -> It uses point to point network topology" << endl;
			cout << "\t\t\t\t\t Wi-Fi -> It uses point to multipoint network topology" << endl << endl;
			break;
		case 6 :
			cout << "\t\t\t\t\t Data density : " << endl;
			cout << "\t\t\t\t\t Li-Fi -> Density of data is very high" << endl;
			cout << "\t\t\t\t\t Wi-Fi -> Density of data is relatively very low" << endl << endl;
			break;
		case 7 :
			cout << "\t\t\t\t\t Value : " << endl;
			cout << "\t\t\t\t\t Li-Fi -> Market value is low" << endl;
			cout << "\t\t\t\t\t Wi-Fi -> Market value is high" << endl << endl;
			break;
		case 8 :
			cout << "\t\t\t\t\t Data transmission : " << endl;
			cout << "\t\t\t\t\t Li-Fi -> Transmission of data takes place using this directly" << endl;
			cout << "\t\t\t\t\t Wi-Fi -> Transmission of data takes place using radio waves" << endl << endl;
			break;
		case 9 :
			cout << "\t\t\t\t\t Obstacle interference : " << endl;
			cout << "\t\t\t\t\t Li-Fi -> Obstacle interference is very high" << endl;
			cout << "\t\t\t\t\t Wi-Fi -> Obstacle interference is low or almost negligible" << endl << endl;
			break;
		case 10 :
			cout << "\t\t\t\t\t Availability : " << endl;
			cout << "\t\t\t\t\t Li-Fi -> Almost available everywhere where there is light" << endl;
			cout << "\t\t\t\t\t Wi-Fi -> Its availablity is very low" << endl << endl;
			break;
		}
	}
	cout << "\t\t\t _________________________________________________________________________________" << endl << endl;
	return 0;
}