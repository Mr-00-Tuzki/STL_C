# STL_C
C++ STL (Standard Template Library) is a software library for the C++ language that provides a collection of templates representing containers, iterators, algorithms, and objects.


<img width="987" alt="Screenshot 2023-05-12 at 8 35 13 PM" src="https://github.com/Mr-00-Tuzki/STL_C/assets/100724101/3d479aed-da9c-4852-afc3-f47f13429d76">

There are the following inbuilt functions used in vectors:

1. size(): This function returns the number of elements present in the vector.
2. capacity(): This function returns the number of elements or the capacity of the vector.
3. empty(): It returns whether the current vector is empty or not empty.
4. push_back(): With the help of this function, we can insert an element from the backside of the vector.
5. pop_back(): With the help of this function, we can remove or delete the element from the backside of the vector.
6. insert(): With this function, we can insert the element in the vector at any specified position.
7. erase(): With the help of this function, we can remove the elements in the vector from the specific position.

Syntax: vector<data_type> vector_name;

C++ Example:

#include <iostream>  
#include<vector>  
  
using namespace std;  
int main() {  
    int n =5;// number of rows is 5  
    vector<int> vc[n];  
    //inserting in the first row  
    vc[0].push_back(1);  
    vc[0].push_back(2);  
    vc[0].push_back(3);  
    vc[0].push_back(4);  
    vc[0].push_back(5);  
  
    //inserting in the second row  
    vc[1].push_back(6);  
    vc[1].push_back(7);  
    vc[1].push_back(8);  
      
    //inserting in the third row  
    vc[2].push_back(9);  
    vc[2].push_back(10);  
    vc[2].push_back(11);  
    vc[2].push_back(12);  
      
    //inserting in the fourth row  
    vc[3].push_back(13);  
    vc[3].push_back(14);  
      
    //inserting in the fifth row  
    vc[4].push_back(15);  
      
    for(int i=0;i<n;i++){  
        cout<<"number of column in row number "<<i+1<<" is "<<vc[i].size()<<endl;  
        for(int j=0;j<vc[i].size();j++){  
            cout<<vc[i][j]<<" ";  
        }  
        cout<<endl;  
    }  
  
    return 0;  
}  
  
Output:
  ![arrays-of-vectors-in-cpp-stl2](https://github.com/Mr-00-Tuzki/STL_C/assets/100724101/9e3fa754-adea-49ff-bc10-c4c1ee7e9454)

  
Explanation:

In the above code, we created the array of vectors of size 5 which means the number of rows which are fixed and they are represented by array size is 5. Since we have an array size of five, it also means we will be having the five vectors, and they can have different sizes.

In the first vector, we put five elements which are: 1, 2, 3, 4, 5.

In the second vector, we put three elements which are: 6, 7, 8.

In the third vector, we put four elements which are: 9,10,11,12.

In the fourth vector, we put two elements which are: 13 and 14.

In the fifth vector, we put one element, which is 15.

Now, we use two loops to print all the elements of our array of vectors.

The outer loop will count the number of rows so that it will run for n times, and the inner loop will run for the number of elements in each vector.
  
