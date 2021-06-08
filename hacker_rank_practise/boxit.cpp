
//Implement the class Box  
//l,b,h are integers representing the dimensions of the box

// The class should have the following functions : 

// Constructors: 
// Box();
// Box(int,int,int);
// Box(Box);


// int getLength(); // Return box's length
// int getBreadth (); // Return box's breadth
// int getHeight ();  //Return box's height
// long long CalculateVolume(); // Return the volume of the box

//Overload operator < as specified
//bool operator<(Box& b)

//Overload operator << as specified
//ostream& operator<<(ostream& out, Box& B)
#include<bits/stdc++.h>

using namespace std;
//Implement the class Box  
//l,b,h are integers representing the dimensions of the box

// The class should have the following functions : 

// Constructors: 
// Box();
// Box(int,int,int);
// Box(Box);


// int getLength(); // Return box's length
// int getBreadth (); // Return box's breadth
// int getHeight ();  //Return box's height
// long long CalculateVolume(); // Return the volume of the box

//Overload operator < as specified
//bool operator<(Box& b)

//Overload operator << as specified
//ostream& operator<<(ostream& out, Box& B)
class Box{
    public:
        int l,b,h;
    Box(){
        l=0;b=0;h=0;
    }
    Box(int a, int p, int c){
        l=a; b = p; h = c;
    }
    Box (Box* k){
        l = k->l; b = k->b; h = k->h;
    }
    int getLength(){
        return l;
    }
    int getBreadth(){
        return l;
    }
    int getHeight(){
        return l;
    }
    long long CalculateVolume(){
        long long vol = l;
        vol *= b;
        vol *= h;
        return vol;
    }
    bool operator < (const Box& k){
        if(this->l < k.l){return true;}
        if((this->l == k.l) && (this->b < k.b)){return true;}
        if((this->l == k.l) && (this->b == k.b) && (this->h < k.h)){return true;}
        return false;
    }
    friend ostream &operator << (ostream &output, const Box &D ){
        output << D.l << " " << D.b << " " << D.h;
        return output;
    }
};


