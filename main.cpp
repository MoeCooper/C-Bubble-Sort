#include <iostream>

int main() {
  int next;
  int arr[6] = {7, 42, 5, 78, 0, 13};
  for(int i = 0; i < 6; i++){
    for(int j = i + 1; j < 6; j++){
      if(arr[j] < arr[i]){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
      }
    }
    next++;
  }

  std::cout << "output is \n" << std::endl;
  for(int i=0; i<6;i++){
    std::cout << arr[i] << " " << std::endl;
  }

  return 0;
  // int value[3];
  // value[0] = 5;
  // value[1] = 15;
  // value[2] = 25;
  
  // for(int i = 0; i < 3; i++){
  //   std::cout << value[i] << std::endl;
  // }

  // std::cout << value[0] << std::endl;
  
  // std::string animals[3][4] = {
  //   {"dog", "har", "git", "rig"}, 
  //   {"helmet", "def", "pol", "def"},
  //   {"red", "orange", "blue", "pom"}
  // };

  // for(int i = 0; i<3; i++){
  //   for(int j = 0; j<4; j++){
  //     std::cout << animals[i][j] << " ";
  //   }
  //   std::cout << std::endl;
  // }
}