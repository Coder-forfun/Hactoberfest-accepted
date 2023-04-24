<html>  
<body>  
<script>  
  

const operator = prompt('Enter operator to perform the calculation ( either +, -, * or / ): ');  
  
  
const number1 = parseFloat(prompt ('Enter the first number: '));  
const number2 = parseFloat(prompt ('Enter the second number: '));  
  
let result;
  

if (operator == '+') { 
    result = number1 + number2;  
}  
else if (operator == '-') {   
    result = number1 - number2;  
}  
else if (operator == '*') { 
    result = number1 * number2;  
}  
else {  
    result = number1 / number2;
}  
  

window.alert(" Result is" + result);  
</script>  
<body>  
</html>  
