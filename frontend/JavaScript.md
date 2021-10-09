# Basics

### On page script
<script type="text/javascript">  ...
</script>

### Include external JS file
<script src="filename.js"></script>
Delay - 1 second timeout
setTimeout(function () {
}, 1000);

### Functions
function addNumbers(a, b) {
    return a + b; ;
}

x = addNumbers(1, 2);

 
### Edit DOM element
document.getElementById("elementID").innerHTML = "Hello World!";

### Output
console.log(a);             // write to the browser console
document.write(a);          // write to the HTML
alert(a);                   // output in an alert box
confirm("Really?");         // yes/no dialog, returns true/false depending on user 
prompt("Your age?","0");    // input dialog. Second argument is the initial value

### Comments
/* Multi line
comment */
// One line



# Loops

### For Loop
for (var i = 0; i < 10; i++) {
    document.write(i + ": " + i*3 + "<br />");
}

var sum = 0;
for (var i = 0; i < a.length; i++) {
    sum + = a[i];
}               // parsing an array
html = "";

for (var i of custOrder) {
    html += "<li>" + i + "</li>";
}

### While Loop
var i = 1;                      // initialize
while (i < 100) {               // enters the cycle if statement is true
    i *= 2;                     // increment to avoid infinite loop
    document.write(i + ", ");   // output
}

### Do While Loop
var i = 1;                      // initialize
do {                            // enters cycle at least once
    i *= 2;                     // increment to avoid infinite loop
    document.write(i + ", ");   // output
} while (i < 100)               // repeats cycle if statement is true at the end


### Break
for (var i = 0; i < 10; i++) {
    if (i == 5) { break; }          // stops and exits the cycle
    document.write(i + ", ");       // last output number is 4
}

### Continue
for (var i = 0; i < 10; i++) {
    if (i == 5) { continue; }       // skips the rest of the cycle
    document.write(i + ", ");       // skips 5
}


# If/Else Statements

if ((age >= 14) && (age < 19)) {        // logical condition
    status = "Eligible.";               // executed if condition is true
} else {                                // else block is optional
    status = "Not eligible.";           // executed if condition is false
}


# Switch Statement

switch (new Date().getDay()) {      // input is current day
case 6:                         // if (day == 6)
	text = "Saturday";          
	break;
case 0:                         // if (day == 0)
	text = "Sunday";
	break;
default:                        // else...
	text = "Whatever";
}


# Variables
var a;                          // variable
var b = "init";                 // string
var c = "Hi" + " " + "Joe";     // = "Hi Joe"
var d = 1 + 2 + "3";            // = "33"
var e = [2,3,5,8];              // array
var f = false;                  // boolean
var g = /()/;                   // RegEx
var h = function(){};           // function object
const PI = 3.14;                // constant
var a = 1, b = 2, c = a + b;    // one line
let z = 'zzz';                  // block scope local variable

# Data Types
var age = 18;                           // number 
var name = "Jane";                      // string
var name = {first:"Jane", last:"Doe"};  // object
var truth = false;                      // boolean
var sheets = ["HTML","CSS","JS"];       // array
var a; typeof a;                        // undefined
var a = null;                           // value null

### Objects
var student = {                 // object name
    firstName:"Jane",           // list of properties and values
    lastName:"Doe",
    age:18,
    height:170,
    fullName : function() {     // object function
    return this.firstName + " " + this.lastName;
    }
}; 
student.age = 19;           // setting value
student[age]++;             // incrementing
name = student.fullName();  // call object function