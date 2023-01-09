#include <iostream>
using namespace std;

int main()
{
  int floor, doorCountPerFloor, doorNumber, calculatedFloor, calculatedDoor;
  cout << "Enter total floor: ";
  cin >> floor;
  cout << "Enter door count per floor: ";
  cin >> doorCountPerFloor;
  cout << "Enter your chosen door number: ";
  cin >> doorNumber;

  // input 5, 4, 10

  if (doorNumber % doorCountPerFloor == 0)
  {
    calculatedFloor = doorNumber / doorCountPerFloor;
  }
  else if (doorNumber % doorCountPerFloor != 0)
  {
    calculatedFloor = doorNumber / doorCountPerFloor + 1;
  }
  // calculatedFloor output: 3

  calculatedDoor = doorNumber % doorCountPerFloor;
  if (calculatedDoor == 0)
  {
    calculatedDoor = doorCountPerFloor;
  }
  // calculatedDoor output: 2

  cout << calculatedFloor << " " << calculatedDoor;
}

// Нэг орцтой байрны давхрын тоо, давхар дахь хаалганы тоо өгөгдөв. Айлын хаалганы дугаар мэдэгдэж байгаа үед тэрхүү айл хэд дэх давхрын хэд дэх хаалганд амьдардаг вэ? Давталт ашиглахгүй бодно.
// Input

//  Эхний мөрөнд давхрын тоо, давхар дахь хаалганы тоо зайгаар тусгаарлагдан өгөгдөнө.

// Хоёр дахь мөрөнд айлын хаалганы тоо өгөгдөнө.
// Output

// Давхрын тоо, давхар дахь хэд дэх хаалганы тоо зайгаар тусгаарлагдан хэвлэгдэнэ. 