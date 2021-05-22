#include<iostream>
class Home {

	int member=6;
	int vehicle=3;
	void rule();
	public :
		void info();
		
};
void Home::info() {
	std::cout<<"the memb in family are"<<member<<std::endl;
	std::cout<<"the no of vehicle are"<<vehicle<<std::endl;
	rule();
}
void Home::rule() {
	std::cout<<"wake up at 6 am"<<std::endl;
	std::cout<<"dont use mobile while eating"<<std::endl;
}
int main() {
	Home obj;
	obj.info();
}




		 
		
