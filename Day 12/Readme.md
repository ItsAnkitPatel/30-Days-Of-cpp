**Date :** `21-12-2022`
## Lecture - 16 Summary
### Topic : Call by Value & Call by Reference in C++


Let's start by a code example :
```c++
#include <iostream>
using namespace std;
//In this example we will see call by refernece and call by value difference
void swap(int,int); //function prototype

int main(){
    int a =4,b=5;
    cout<<"The value of a is "<<a<<" and the value of b is "<<b<<endl;
    swap(a,b);
    cout<<"The value of a is "<<a<<" and the value of b is "<<b<<endl;

return 0;
}
void swap(int num1 , int num2){  // temp   num1    num2
    int temp =num1;              // 4      4        5
    num1 = num2;                 // 4      5        5
    num2 = temp;                 // 4      5        4
}
```
**Predict the output 🧐**<br>

<img src ="/media/gifs/think2.gif" width ="250" height ="200">

**Is this the Ouput you thinked about ?**
```
The value of a is 4 and the value of b is 5
The value of a is 5 and the value of b is 4
```

<img src ="/media/gifs/yes.gif" width ="200" height ="200">
    
**If yes then you are wrong buddy.**

<img src ="/media/gifs/disappoint.gif" width ="220" height ="200">

**Yeah as a beginner this was my reaction too.**<br>
**But this is the fun part of journey right? You encounter with new things and these new things upgrade your knowlege.💯**

<img src ="/media/gifs/JimmyYes.gif" width ="220" height ="200">

<br>

**So what's the correct ouput ?**<br>
**Here you go :**
```
The value of a is 4 and the value of b is 5
The value of a is 4 and the value of b is 5
```

**And the reason behind is :** the actual parameters that are passed to `swap` function they are copied to num1 & num2 formal parameters.<br>
In short a different copy is created of 4 & 5 when we passed the values to **swap(num1,num2)** function.<br>
So even we swapped the values between num1 & num2 the values of variable 'a' & 'b' will remain the same because we passed the values only
and those values are copied to num1 & num2 and after that variable 'a' & 'b' have no relation with 'num1 & 'num2'.<br>
**This is called "Pass by Value" .**<br>

**Another small example is :** If you send a text file to your friend and if your friend do any changes in that text file then will those changes will reflect to your file too ? The answer is simple "nope" those changes will not going to show in your text file. Same happen with "pass by value" concept.<br>
See 🤠<br>
<img src="/media/gifs/easy.gif" width ="300" height ="250">

**I hope so 👀**
<br><br>

**Now what is "Pass by Reference" ?**

Let's start by a code example :
```c++
#include <iostream>
using namespace std;
// In this example we will see call by refernece concept
void swapPointer(int *, int *); // function prototype

int main()
{
    int a = 4, b = 5;
    cout << "The value of a is " << a << " and the value of b is " << b << endl;
    swapPointer(&a, &b);
    cout << "The value of a is " << a << " and the value of b is " << b << endl;

    return 0;
}

void swapPointer(int *num1, int *num2)
{                     // temp   num1    num2
    int temp = *num1; // 4      4        5
    *num1 = *num2;    // 4      5        5
    *num2 = temp;     // 4      5        4
}
```

**Output :**
```
The value of a is 4 and the value of b is 5
The value of a is 5 and the value of b is 4
```
**So why this happen ? Why now values change ?**<br>
The key to understand above code you just need little knowledge of _pointer_.<br>
```c++
void swapPointer(int *num1, int *num2)
{                     // temp   num1    num2
    int temp = *num1; // 4      4        5
    *num1 = *num2;    // 4      5        5
    *num2 = temp;     // 4      5        4
}
```
**Lets break down the swapPointer function :**<br><br>
`int temp = *num1;`
> the `*num1` is saying that fetch the value at address that is stored in `num1` pointer variable (num1 pointer stores the address of 'a' variable).<br>
>  i.e. _value at_ address of 'a'.<br>
>  fetch that value and store it in `temp` variable.<br>

`*num1 = *num2;`
> fetch the value of the address that is inside `num2` pointer variable and store that value at the address which is present inside `num1` pointer variable.

`*num2 = temp;`
> take the value that is present inside `temp` variable and store it at the address that is present inside the `num2` pointer variable.

**Another simple example is :** If you share a file on google drive and your friend done some changes in that text file. Those changes will reflect on your side too because you both are accessing the same file. Same happens with **"Call by Reference"** .


<br>
<hr>



📑[All in one file](/Journey_so_far.md)📍