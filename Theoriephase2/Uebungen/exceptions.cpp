#include<iostream>
    
    struct MyException : public std::exception
    {
        const char* what()const noexcept override
        {
            //std::cout<<"Fehler:Division durch Null"<<std::endl;
            return "Fehler: Division durch Null";
        }
    };
    double division(double &a, double &b){
        if(b == 0){
            throw MyException();
        }
        return (a/b);
    }
int main(){
    MyException exception1;
    double a;
    double b;

    try{
        std::cout<<"Zahlen zum Dividieren eingeben:";
        std::cin>>a;
        std::cin>>b;
        std::cout<<std::endl;
        std::cout<<"Das Ergebnis ist:"<<division(a,b)<<std::endl;
    }
    catch(MyException& exception1){
        std::cout<<exception1.what()<<std::endl;
    }

}