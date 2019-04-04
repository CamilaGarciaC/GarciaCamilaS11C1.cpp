#include<iostream>

int main(){
	int i;
	for(i=0; i<=100; i++)
		if(i%3==0 && i%5!=0)
		std::cout<<i<<std::endl;
	return 0;

}
