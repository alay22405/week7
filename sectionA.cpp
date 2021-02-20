#include <iostream>
#include <string>
#include "SeactionA.h"

int main() {
    URL url("https://www.highline.edu/what-we-offer/");


    std::cout << "Scheme : " << url.getScheme() << "\n";
    std::cout << "Authority : " << url.getAuthority() << "\n";
    std::cout << "Path :  " << url.getPath() << "\n";
    std::cout << "full URL: " << url.getFullURL() << "/n";
    return 0;


}