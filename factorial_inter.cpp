#include <iostream>

int main(){
	int i;
	int n;
	double fact;
   	std::cout << "Introduzca un numero: ";
   	std::cin >> n;
   	fact=1;
   	for(i=1;i<=n;i++)
        	fact=fact*i;
   	std::cout << "El factorial de " << n << " es:" << fact <<std::endl;
}
