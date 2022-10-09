// initializa an array with True and False values
const TrueAndFalse = [true,false,false,true,true,true,false];

const counter= TrueAndFalse.filter(value => {
    return value === true
})

// counterresult
console.log(counter.length);