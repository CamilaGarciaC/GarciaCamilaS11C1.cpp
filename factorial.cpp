#include<iostream>

int main(){
	int n;
	int i;
	double fact;
	fact = 1;
	for(i=1; i<=7; i++)
		fact=fact*i;
	
	std::cout<<"el factorial de 7 es "<<fact<<std::endl;
	return 0;

}
