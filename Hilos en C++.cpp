#include <iostream>
#include <thread>
using namespace std;

void funcion(int numero){
	cout << numero << endl;
}

int main(){
	thread hilo1(funcion, 1);
	thread hilo2(funcion, 2);
	thread hilo3(funcion, 3);
	thread hilo4(funcion, 4);
	thread hilo5(funcion, 5);
	thread hilo6(funcion, 6);

	hilo1.join();
	hilo2.join();
	hilo3.join();
	hilo4.join();
	hilo5.join();
	hilo6.join();

	return 0;
}
