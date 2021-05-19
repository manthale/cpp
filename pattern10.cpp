#include<iostream>
int main() {
	char arr[]={'c','o','r','e'};
	for(int i=0;i<4;i++) {
		int x=i;
		for(int s=0;s<i;s++) {
			std::cout<<"  ";
		}
		for(int j=4;j>=1;j--) {
			std::cout<<arr[x]<<" ";
			x++;
			
		}
		std::cout<<std::endl;
		
	}
}

