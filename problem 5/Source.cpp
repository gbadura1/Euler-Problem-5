#include <iostream>
#include <string>
#include <vector>

bool divisible(int x, int y){
	if (x%y == 0) { return true; }
	else { return false; }
}

int main(){
	int temp, max;
	int div[10] = { 20, 19, 18, 17, 16, 15, 14, 13, 11 };
	std::vector<int> my_vector(div, div + sizeof(div)/sizeof(int));
	for (int i = 19;; i * 19){
		for (std::vector<int>::iterator it = my_vector.begin(); it != my_vector.end(); ++it){
			temp = *it;

		}
	}





	return 0;
}