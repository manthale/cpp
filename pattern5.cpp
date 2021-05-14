#include<iostream>
/*
A B C D
  A B C
    A B
      A
*/
int main() {
for(int i=1;i<=4;i++) {
	char ch='A';
	for(int k=1;k<i;k++) {
		std::cout<<"  ";
	}
	for(int j=4;j>=i;j--) {
		std::cout<<ch<<" ";
		ch++;
	}
	std::cout<<std::endl;
	}
}
