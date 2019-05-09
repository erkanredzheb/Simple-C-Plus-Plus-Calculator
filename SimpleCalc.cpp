#include <iostream>
using namespace std;

int add(int n1, int n2);
int sub(int n1, int n2);
int multiply(int n1, int n2);
int divide(int n1, int n2);
int power(int n1, int n2);

int main() {
  int choice, num1, num2;
  bool isRunning = true;

  while (isRunning){

    std::cout << "Select an operation: " << std::endl;
    std::cout << "1. Addition" << std::endl;  
    std::cout << "2. Substraction" << std::endl;
    std::cout << "3. Multiplication" << std::endl;
    std::cout << "4. Division" << std::endl;
    std::cout << "5. Power of" << std::endl;

    std::cin >> choice;

    if (choice == 1 || choice == 2 || choice == 3 || choice == 4 || choice == 5){
       isRunning = false;
    }
    else{
      std::cout << "Invalid input!" << std::endl;
    }     
  }

  std::cout << "Enter the first number: " << std::endl;
  std::cin >> num1;

  std::cout << "Enter the second number: " << std::endl;
  std::cin >> num2;

  if (choice == 1){
    int result;
    result = add(num1, num2);
    std::cout << num1 << " + " << num2 << " is " << result << std::endl;
  }
  else if (choice == 2){
    int result;
    result = sub(num1, num2);
    std::cout << num1 << " - " << num2 << " is " << result << std::endl;
  }
  else if (choice == 3){
    int result;
    result = multiply(num1, num2);
    std::cout << num1 << " * " << num2 << " is " << result << std::endl;
  }
  else if (choice == 4){
    int result;
    result = divide(num1, num2);
    std::cout << num1 << " / " << num2 << " is " << result << std::endl;
  }
    else if (choice == 5){
    int result;
    result = power(num1, num2);
    std::cout << num1 << " to the power of " << num2 << " is " << result << std::endl;
  }
    
}

int add(int n1, int n2){
  return n1+n2;
}

int sub(int n1, int n2){
  return n1-n2;
}

int multiply(int n1, int n2){
  return n1*n2;
}

int divide(int n1, int n2){
  return n1/n2;
}

int power(int n1, int n2){
  int result = 1;
  for(int i = 0; i < n2; i++)
    result = result * n1;
  return result; 
}
