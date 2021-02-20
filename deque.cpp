#include <iostream>
#include <vector>


template<typename T>
class Deque{
public:
    void push_front(T value){
        if(this->Front.size()<this->front_ell){
            ++this->front_ell;
            this->Front.push_back(value);
        }
        else{
            this->Front[this->front_ell] = value;
        }
        
    }
    void push_back(T value){
        ++this->back_ell;
        this->Back.push_back(value);
        f(this->Back.size()<this->back_ell){
            ++this->back_ell;
            this->Back.push_back(value);
        }
        else{
            this->Back[this->back_ell] = value;
        }
    }
    T back(){
        return this->Back[back_ell];
    }
    T front(){
        return this->Front[front_ell];
    }
    void pop_front(){
        --this->front_ell;
    }
    void pop_back(){
        --this->back_ell;
    }
private:
    int front_ell = 0;
    int back_ell = 0;
    std::vector<T> Front;
    std::vector<T> Back;

};