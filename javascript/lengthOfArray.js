// Que :- Find the length of the array using for loop 

const getLength1 = array => {
	let len = 0
	for(let i = 0; array[i]!== undefined;i++){
		len++;
	}
	return len;
}
console.log(getLength1([1,2,3,4,5]))