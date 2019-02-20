#include <iostream>
#include <vector>
#include <algorithm>
using std::cout;
using std::cin;
using std::endl;
using std::vector;


void sortDescending(int,int,int);
void swap(int&,int&);

//sorts list in descending order.
int main()
{
  vector<int> nums;
  int numA, numB, numC;
  cout<<"Enter any three numbers: ";
  cin>>numA>>numB>>numC;
  nums.push_back(numA);
  nums.push_back(numB);
  nums.push_back(numC);
  //5, 8, 2
  for(int i = 0; i < nums.size(); i++){
	  for(int j = 0; j < nums.size(); j++){
		  if(nums[i] > nums[j]){
			  int temp = nums[i];
			  nums[i] = nums[j];
			  nums[j] = temp;
		  }
	  }
  }
  
  cout<<"From greatest to least, they are: ";
  for(int k = 0; k < nums.size(); k++){
	  cout<<nums[k]<<",";
  }
  return 0;
}

