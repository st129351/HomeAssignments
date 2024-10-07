//Lichkovaha Daniil
//st129351@student.spbu.ru
//Assignment2a

#include "massive_reverse.h"

int main(){

    std::ifstream file("test.bin", std::ios::binary | std::ios::in);
    
    if(!file.is_open()){
    	std::cout << "File reading error" << std::endl;

        return 1;
    }

    file.seekg(0, std::ios::end);
    std::streamsize file_size = file.tellg(); // 1 more, because \0 is taken into account too
    file.seekg(0, std::ios::beg);

    std::cout << "The file size is: " << file_size << std::endl;

    char *arr = new char[file_size];
    file.read(arr, file_size);

    char* arr_reverse = massive_reverse(arr, file_size);

    std::ofstream outfile("test1.bin", std::ios::binary | std::ios::out);
    outfile.write(arr_reverse, file_size);

    std::cout << "The reverse file has been recorded! it's name 'test1.bin'" << std::endl;

    delete[] arr;
    outfile.close();
    file.close();
	return 0;

}






