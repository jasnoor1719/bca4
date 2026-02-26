#include<iostream>
using  namespace std;
class room
{
private:
double length;
double breadth;
public:
void get(){
cout<<"enter length and breadth of the room";
cin>>length>>breadth;
}
void display(){
cout<<"room dimensions"<<length<<"x"<<breadth<<endl;

}
double area(){
return length*breadth;
}
double perimeter (){
return 2*(length+breadth);

}
};
int main(){
const int numRooms=5;
Room rooms[numRooms];
for(int i=0;i<numRooms;i++){
cout<<"\n rooms"<<i+1;<<":"<<endl;
rooms[i].get.()
}
for(int i=0;i<numRooms;i++){
cout<<"\ndetails of room"<<i+1<<":"<<ndl;
Rooms[i].display();
cout<<"area:"<<Rooms[i].area()<<"square units"<<endl;
cout<<"perimeter:"<<Rooms[i].perimeter()<<"units"<<endl;

}
return 0;
}


