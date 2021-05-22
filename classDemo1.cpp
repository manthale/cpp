#include<iostream>
class Maharashtra {
	public:
	int district=36;
	public:
	void specality() {
		std::cout<<"the maharastrian culture"<<std::endl;
	}
	void info() {
		std::cout<<"the capital is mumbai";
		std::cout<<"the district are "<<district<<std::endl;
	}
};
int main() {
Maharashtra obj;
obj.specality();
obj.info();
}

