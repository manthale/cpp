/*
* * * *
  * * *
    * *
      *
*/

#include<iostream>
int main() {
	for(int i=0;i<4;i++) {
		for(int k=0;k<i;k++) {
			std::cout<<"  ";
		}
			for(int j=4;j>i;j--) {
				std::cout<<"* ";
			}
		std::cout<<std::endl;
	}
}

