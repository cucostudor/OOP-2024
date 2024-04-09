#include "Circuit.h"
#include "BMW.h"
#include "MiniCooper.h"
#include "Hellcat.h"
#include "Volvo.h"
#include <stdio.h>

int main() {
    new char[10];
    Circuit c;
    c.SetLength(100);
    c.SetWeather(Weather::Rainy);
    c.AddCar(new BMW());
    c.AddCar(new Volvo());
    c.AddCar(new Hellcat());
    c.AddCar(new MiniCooper());
    printf("Weather: Rainy (%d)\n", Weather::Rainy);
    c.Race();
    c.ShowFinalRanks(); 
    c.ShowDNF();    
    printf("Weather: Sunny (%d)\n", Weather::Sunny);
    c.SetWeather(Weather::Sunny);
    c.Race();
    c.ShowFinalRanks();
    c.ShowDNF();
    printf("Weather: Snowy (%d)\n", Weather::Snowy);
    
    c.SetLength(125);
    c.SetWeather(Weather::Snowy);
    c.Race();
    c.ShowFinalRanks();
    c.ShowDNF();
    return 0;
}