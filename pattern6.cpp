#include<iostream>
int main() {
int x=1;
for(int i=1;i<=4;i++) {
	for(int k=1;k<i;k++) {
		std::cout<<"     ";
	}
		for(int j=4;j>=i;j--) {
			std::cout<<x*x <<"    ";
			x++;
		}
	std::cout<<std::endl;
}
}

	

