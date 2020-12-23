#include <iostream>

int main() {

    int numberOfThePlanet;
    double weightOnEarth;

    std::cout << "What is your earth weight [in kg]: ";
    std::cin >> weightOnEarth;
    std::cout << "\n1.Mercury\n2.Venus\n3.Mars\n4.Jupiter\n5.Saturn\n6.Uranus\n7.Neptune\n";
    std::cout << "Give the number of the planet you want to fight on: ";
    std::cin >> numberOfThePlanet;
    if(numberOfThePlanet < 8 && numberOfThePlanet > 0){
        switch (numberOfThePlanet) {
            case 1:
                std::cout << "Your weight on Mercury is: "<<weightOnEarth*0.38;
                break;
            case 2:
                std::cout << "Your weight on Venus is: "<<weightOnEarth*0.91;
                break;
            case 3:
                std::cout << "Your weight on Mars is: "<<weightOnEarth*0.38;
                break;
            case 4:
                std::cout << "Your weight on Jupiter is:  "<<weightOnEarth*2.34;
                break;
            case 5:
                std::cout << "Your weight on Saturn is: "<<weightOnEarth*1.06;
                break;
            case 6:
                std::cout << "Your weight on Uranus is: "<<weightOnEarth*0.92;
                break;
            case 7:
                std::cout << "Your weight on Neptune is: "<<weightOnEarth*1.19;
                break;
        }
    }else{
        std::cout << "Wrong number picked.";
        return 0;
    }

}