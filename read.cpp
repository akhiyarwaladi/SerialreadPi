#include<iostream>
#include<wiringSerial.h>
#include<unistd.h>

using namespace std;

int main(){
	ios::sync_with_stdio(false);
	int handle, data1, data2, avail;
	int byte[5] = {0};
	handle = serialOpen("/dev/ttyAMA0", 9600) ;
	int i = 0;

	while(1){
		avail = serialDataAvail(handle);
		cout << avail << "\n";
		if(avail >= 0){
			data1 = serialGetchar(handle);
			data2 = serialGetchar(handle);
			cout << "data1: " << data1 << "\n";
			cout << "data2: " << data2 << "\n";
		}
		sleep(2);
	}
	return 0;
}
