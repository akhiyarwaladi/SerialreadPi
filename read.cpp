#include<iostream>
#include<wiringSerial.h>

using namespace std;

int main(){
	int handle, data1, data2, avail;
	int byte[5] = {0};
	handle = serialOpen("/dev/ttyAMA0", 9600) ;
	int i = 0;

	while(1){
		//avail = serialDataAvail(handle);
		//cout << avail <<"\n";
		data1 = serialGetchar(handle);
		data2 = serialGetchar(handle);
		cout << "data1: " << data1 << "\n";
		cout << "data2: " << data2 << "\n";
	}
	return 0;
}
