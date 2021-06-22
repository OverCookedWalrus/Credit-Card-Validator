#include <iostream>
#include <string>
#include <sstream>

int w[] = {2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1};
int Product;
long long reversedNumber = 0, remainder;
long long card_string;

int countDigit(long long cardNum)
{
    long long count = 0;
    while (cardNum != 0)
    {
        cardNum = cardNum / 10;
        ++count;
    }
    return count;
}
	 


int main(void)
{
  //asks for card number
  long long cardNum;
	std::cout << "What is your card number? Please not spaces!: ";
	std::cin >> cardNum;

  //confirms card number is 16 digits long 
	if(countDigit(cardNum) > 16){
    std::cout << "There is more than 16 digits in your card number please run it again.";
  }else if(countDigit(cardNum) < 16){
    std::cout << "There is less than 16 digits in your card number please run it again.";
  }else if(countDigit(cardNum) == 16){

  //converts card number into string
  int array[16];
  for (int i = 15; i >= 0; i--) {
  array[i] = cardNum % 10;
  cardNum /= 10;
  }
  //multiplies the cardNumber by the weight 212121...
  int  first = w[0] * array[0]; 
  int  second = w[1] * array[1];
  int  third = w[2] * array[2];
  int  fourth = w[3] * array[3];
  int  fifth = w[4] * array[4];
  int  sixth = w[5] * array[5];
  int  seventh = w[6] * array[6];
  int  eighth = w[7] * array[7];
  int  ninth = w[8] * array[8];
  int  tenth = w[9] * array[9];
  int  eleventh = w[10] * array[10];
  int  twelve = w[11] * array[11];
  int  thirteen = w[12] * array[12];
  int  fourteen = w[13] * array[13];
  int  fifteen = w[14] * array[14];
  int  sixteen = w[15] * array[15];
  
  


//Makes sure that the cardNum * the weight isn't over 9 if it is then it adds the first and second digit
  if(first > 9){
    int n1 = first % 10;
      first /= 10;
    int n2 = first % 10;
      first /= 10;
    first = n1 + n2;
  }
  if(second > 9){
    int n1 = second % 10;
      second /= 10;
    int n2 = second % 10;
      second /= 10;
    second = n1 + n2;
  }
  if(third > 9){
    int n1 = third % 10;
      third /= 10;
    int n2 = third % 10;
      third /= 10;
    third = n1 + n2;
  }
  if(fourth > 9){
    int n1 = fourth % 10;
      fourth /= 10;
    int n2 = fourth % 10;
      fourth /= 10;
    fourth = n1 + n2;
  }
  if(fifth > 9){
    int n1 = fifth % 10;
      fifth /= 10;
    int n2 = fifth % 10;
      fifth /= 10;
    fifth = n1 + n2;
  }
  if(sixth > 9){
    int n1 = sixth % 10;
      sixth /= 10;
    int n2 = sixth % 10;
      sixth /= 10;
    sixth = n1 + n2;
  }
  if(seventh > 9){
    int n1 = seventh % 10;
      seventh /= 10;
    int n2 = seventh % 10;
      seventh /= 10;
    seventh = n1 + n2;
  }
  if(eighth > 9){
    int n1 = eighth % 10;
      eighth /= 10;
    int n2 = eighth % 10;
      eighth /= 10;
    eighth = n1 + n2;
  }
  if(ninth > 9){
    int n1 = ninth % 10;
      ninth /= 10;
    int n2 = ninth % 10;
      ninth /= 10;
    ninth = n1 + n2;
  }
  if(tenth > 9){
    int n1 = tenth % 10;
      tenth /= 10;
    int n2 = tenth % 10;
      tenth /= 10;
    tenth = n1 + n2;
  }
  if(eleventh > 9){
    int n1 = eleventh % 10;
      eleventh /= 10;
    int n2 = eleventh % 10;
      eleventh /= 10;
    eleventh = n1 + n2;
  }
  if(twelve > 9){
    int n1 = twelve % 10;
      twelve /= 10;
    int n2 = twelve % 10;
      twelve /= 10;
    twelve = n1 + n2;
  }
  if(thirteen > 9){
    int n1 = thirteen % 10;
      thirteen /= 10;
    int n2 = thirteen % 10;
      thirteen /= 10;
    thirteen = n1 + n2;
  }
  if(fourteen > 9){
    int n1 = fourteen % 10;
      fourteen /= 10;
    int n2 = fourteen % 10;
      fourteen /= 10;
    fourteen = n1 + n2;
  }
  if(fifteen > 9){
    int n1 = fifteen % 10;
      fifteen /= 10;
    int n2 = fifteen % 10;
      fifteen /= 10;
    fifteen = n1 + n2;
  }
  if(sixteen > 9){
    int n1 = sixteen % 10;
      sixteen /= 10;
    int n2 = sixteen % 10;
      sixteen /= 10;
    sixteen = n1 + n2;
  }

  /*
  std::cout << "The product is:            " << first << second << third << fourth << fifth << sixth << seventh << eighth << ninth << tenth << eleventh << twelve << thirteen << fourteen << fifteen << sixteen << "\n";
  */

  Product = first + second + third + fourth + fifth + sixth + seventh + eighth + ninth + tenth + eleventh + twelve + thirteen + fourteen + fifteen + sixteen;

  //Seeing if the last digit of the card is 0
  int n1 = Product % 10;
    Product /= 10;
  int n2 = Product % 10;
    Product /= 10;  

  if(n1 == 0){
    std::cout << "This is a valid Credit Card!";
  }else if(n1 != 0){
    std::cout << "This is not a valid Credit Card!";
  }

  }

  

}
