#include <iostream>
template <typename T>
auto vergleich(T par_a, T par_b) ->bool{
    T eps = std::abs(par_a - par_b);
    bool ergebnis;
    /*if( eps< 0){
        eps = eps*(-1);
    }*/
    if( eps < 0.5){
        ergebnis = true;
        return ergebnis;
    }
    else{
        ergebnis = false;
        return ergebnis;
    }
}
int main (){
    std::cout<<vergleich<int>(30,20)<<std::endl;
    std::cout<<vergleich<double>(2.4,2.1)<<std::endl;
    return 0;
}