const sortOrder = ['Sammy','Vivek','Rakesh','Kuldeep', 'Ajit','Sumit','Amit','Jonas'];
const arrOfObj = [
{kName: 'Sumit', year: 21, period: 10, profession: 'Doctor'},
{kName: 'Rakesh', year: 21, period: 10, profession: 'Adv'},
{kName: 'Amit', year: 21, period: 10, profession: 'Engineer'},
{kName: 'Kuldeep', year: 21, period: 10, profession: 'Banker'},
{kName: 'Sammy', year: 21, period: 11, profession: 'Techer'},
{kName: 'Ajit', year: 21, period: 11, profession: 'Comedian'},
{kName: 'Jonas', year: 22, period: 10, profession: 'Doctor'},
{kName: 'Vivek', year: 22, period: 10, profession: 'postman'},
];
const sortingKey = 'kName';

function customSortData(sortOrder, arrOfObj, sortingKey){
  arrOfObj.sort(
    function(a, b){
      if(a[sortingKey] == b[sortingKey]) return 0;
      else 
        return (sortOrder.indexOf(a[sortingKey]) - sortOrder.indexOf(b[sortingKey]) );
      
    }
  );
  return arrOfObj;
}

const sortedData = customSortData(sortOrder, arrOfObj, sortingKey);
console.log(sortedData);
