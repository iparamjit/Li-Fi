// c++ simulation to calculate the maximum data transfer rate

#include<iostream>
#include<cmath>
using namespace std;

int main() {

	double max_data, bandwidth, signal_power, noise_power;
	// max_data -> to store the Channel Capacity
	// bandwidth -> to store the Bandwidth of the channel
	// signal_power -> to store the Signal Power of the channel
	// noise_power -> to store the Noise Power in the channel

	// input
	cout << "Enter the the Bandwidth of the signal ( Hz ) : ";      cin >> bandwidth;
	cout << "Enter the Signal Power ( watts ) : ";      cin >> signal_power;
	cout << "Enter the Noise Power ( watts ) : ";      cin >> noise_power;

	// calculations -> Shannon-Hartley Equation
	max_data = bandwidth * log2(1 + (signal_power / noise_power));
	cout << endl;

	// output
	cout << "Maximum data transfer rate : " << max_data << " bits/second ";

	return 0;
}