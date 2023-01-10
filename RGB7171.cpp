#include <iostream>
using namespace std;

int main()
{
  int totalFloor, totalEntrance, doorCountPerFloor, chosenDoor, calculatedEntrance, calculatedFloor, calculatedDoor;
  cin >> totalFloor >> totalEntrance >> doorCountPerFloor;
  cin >> chosenDoor;

  calculatedEntrance = chosenDoor / (totalFloor * doorCountPerFloor);

  cout << calculatedEntrance << calculatedFloor << calculatedDoor << endl;
}

// Байшингийн давхар, орц, нэг давхарт суудаг айлын тоо мэдэгдэж байвал энэхүү байшингийн өгөгдсөн тоот нь хэддүгээр орцны, хэдэн давхрын хэд дэх хаалга вэ?

// Жич: Давхар бүр дэх хаалганы тоо ижил.

// Input
// Эхний мөрөнд байшингийн давхар, орц, нэг давхарт байгаа хаалганы тоонууд нэг зайгаар тусгаарлагдан өгөгдөнө.

// Хоёр дахь мөрөнд нэгэн айлын хаалганы дугаар өгөгдөнө.

// Output
// Орц, давхар, давхрын хэд дэх хаалганы дугаарууд нэг мөрөнд нэг зайгаар тусгаарлагдан хэвлэгдэнэ.