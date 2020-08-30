#include <iostream>

int main() {
  
  int PlanetNumber;
  double weight;
  std::cout<<"What is your earth weight?\n";
  std::cin>>weight;
  std::cout<<"Enter The Number of the Planet to fight on!\n";
  std::cout<<"1 Mercury 2 Venus 3 Mars 4 Jupiter!\n";
  std::cout<<"5 Saturn 6 Uran 7 Neptune!\n";
  std::cin>>PlanetNumber;
  switch(PlanetNumber) {
    case 1:
    std::cout<<"Your weight on Mercury is "<< 0.38 * weight;
    break;
    case 2:
    std::cout<<"Your weight on Venus is "<< 0.91 * weight;
    break;
    case 3:
    std::cout<<"Your weight on Mars is "<< 0.38 * weight;
    break;
    case 4:
    std::cout<<"Your weight on Jupitar is "<< 2.34 * weight;
    break;
    case 5:
    std::cout<<"Your weight on Saturn is "<< 1.06 * weight;
    break;
    case 6:
    std::cout<<"Your weight on Uran is "<< 0.92 * weight;
    break;
    case 7:
    std::cout<<"Your weight on Neptune is "<< 1.19 * weight;
    break;
    default:
    std::cout<<"Did you just discover a new Planet?";
    break;
  }
  
  
  
  
  
  
  
  
}
