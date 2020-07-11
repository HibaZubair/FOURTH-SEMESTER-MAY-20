/*
/*q1*/
for(var i=0;i<4;i++)
{
    console.log("Hello World");
}

//Q2
for(var j=1;j<=10;j++){
    alert(j);
}

//Q3
var y=prompt("Enter a number to print its table");
var z=prompt("Length of the table");

for(m=1;m<=z;m++){
    console.log(y + "*" + m + "="  + y*m);
}

//Q4
var A=["Nokia","Samsung","Apple","Sony","Huawei"];
console.log(e);
for(b=0;b<e;b++){
    console.log(A[b]);
}
//Q5

var fruits=["apple","banana","mango","orange","strawberry"];
var c=fruits.length;
for(d=0;d<c;d++){
    console.log("Element at index "+ d +" is " + fruits[d]);
}

//Q6
var N=prompt("Number of elements");
for(f=0;f<N;f++){
    
}

//Q7,a
for(var i=1;i<=15;i++){
    console.log("Counting"+i);
}

//Q7,b
for(var i=10;i>0;i--){
    console.log("Reverse"+ i);
}

//Q7,c
for(var i=0;i<=20;i++){
  if(i%2==0){
      console.log(i);
  }
}

//Q7,d
for(var i=1;i<20;i++){
    if(i%2==1){
        console.log(i);
    }
  }

  //Q7,e
  for(var i=1;i<=20;i++){
    if(i%2==0){
        console.log(i+"K,");
    }
  }
//Q8
  A=["cookie","bisuit","chips","toffee","gum"]
  var word=prompt("Enter value to search: ")
  var sea=0

  for(var i=0;i<5;i++)
  {
      if(word==A[i])
      {
          sea=1
      }
      else
      {
          sea=0
      }
  }

  if(sea==1)
  {
      console.log("FOUND!")
  }
  else
  {
      console.log("Not Found")
  }



  //q9
A=[23,55,12,78,45,19]
var max=0
for(var i=0;i<6;i++)
{
    console.log(i)
    if(A[i]>max)
    {
        max=A[i]
    }
}

console.log("The largest value is: "+max)


//q10
A=[23,55,12,78,45,19]
var max=1000
for(var i=0;i<6;i++)
{
    console.log(i)
    if(A[i]<max)
    {
        max=A[i]
    }
}

console.log("The smallest value is: "+max)

//q11
A=[23,55,12,78,45,19]
var min=1000
var max=0
for(var i=0;i<6;i++)
{
    console.log(i)
    if(A[i]<min)
    {
        min=A[i]
    }
    if(A[i]>max)
    {
        max=A[i]
    }
}

console.log("The smallest value is: "+min)
console.log("The highiest value is: "+max)


//q12
for(var i=5;i<=100;i+=5){
    console.log(i);
}

//q13
// Q13
var students = ["Ali", "Sami", "Taha", "Inam"];
var scores = [58, 73, 89, 90];
document.write("Students           Scores")
document.write("</br></br>")

for(i=0;i<students.length;i++){
    document.write(students[i] + "          " + scores[i])
    document.write("</br>")
}

// Q14
var A= [12, 45, 3, 22, 34, 50];
var stop= prompt("Enter Stop Value: ")
for(var i=0; A.length; i++){
    console.log(A[i])
    if(A[i]==stop){
        break;
    }
}

// Q15
A = [ [1,2,3] , [4,5,6] , [7,8,9] ]
for (var i = 0; i < 3; i++) { 
    for (var j = 0; j < 3; j++) 
  
    { 
        document.write(A [i][j] + " "); 
    } 
    document.write("<br>"); 
} 

// Q16
var num= prompt("Enter Number: ")
for(var i=0; num>=0; i++){
    document.write(num + ", "); 
    num=+num-0.5
}

// Q17
for(var i=0; i<=20; i++){
    if(i%2==0){
        console.log(i + " is even")
    }
    else{
        console.log(i + " is odd")
    }
}

// Q18
var prod=1
for(var i=0; i<=7; i++){
    if(i%2!=0){
        prod=prod*i
    }
}
console.log("The product of odd integers from 1-7 is " + prod)

// Q19
var n= prompt("Enter initial number: ")
document.write("<br>"); 
for (var i=0; i<n; i++) { 
    for (var j=i; j<n; j++) 
  
    { 
        document.write("* "); 
    } 
    document.write("<br>"); 
} 

// Q20
var n= prompt("Enter initial number: ")
document.write("<br>"); 
// a)
for (var i=0; i<n; i++) { 
    for (var j=0; j<n; j++) 
  
    { 
        document.write("*"); 
    } 
    document.write("<br>");
} 
// b)
document.write("<br>")
for(var i=0; i<n; i++) { 
    for (var j=0 ;j<=i; j++) 
  
    { 
        document.write("* "); 
    } 
    document.write("<br>"); 
} 
// c)
document.write("<br>")
for(var i=0; i<n; i++) { 
    for (var j=i;j<n; j++) 
  
    { 
        document.write("* "); 
    } 
    document.write("<br>"); 
} 