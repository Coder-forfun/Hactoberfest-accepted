//Approach 1

function isPalindrome1(str) { 
    var j = str.length-1 
    for(var i=0; i<str.length/2; i++){ 
        if(str[i]!=str[j]){ 
            return false; 
        } 
        j--; 
    } 
    return true; 
} 
  
var str1 = "racecar"; 
var str2 = "nitin"; 
var str3 = "Rama"; 
  
console.log(isPalindrome1(str1)); 
console.log(isPalindrome1(str2)); 
console.log(isPalindrome1(str3));


//Approach 2

function isPalindrome2(str) { 
	var rev=""; 
	for(var i=str.length-1; i>=0; i--){ 
		rev+= str[i]; 
	} 
	if(rev==str){ 
		return true
	} else{ 
		return false; 
	} 
} 

var str1 = "racecar"; 
var str2 = "nitin"; 
var str3 = "Rama"; 

console.log(isPalindrome2(str1)); 
console.log(isPalindrome2(str2)); 
console.log(isPalindrome2(str3));



//Approach 3
function isPalindrome3(str) { 
	var rev=str.split("").reverse().join(""); 

	if(rev == str){ 
		return true
	} 
	return false
				
} 

var str1 = "racecar"; 
var str2 = "nitin"; 
var str3 = "Rama"; 

console.log(isPalindrome3(str1)); 
console.log(isPalindrome3(str2)); 
console.log(isPalindrome3(str3));

