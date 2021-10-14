class  BinaryHeap{
    
    ShowHeap(arr){
        console.log(arr)
    }
    insert(arr,value){

        arr.push(value)
         this.bubbleUp(arr)
      }
    
         bubbleUp(arr){
           let index =  arr.length-1;
    
        while( index > 0){
           let element = arr[index]
            let  parentIndex = Math.floor((index-1)/2)
            let parent = arr[parentIndex]
    
           if(parent >= element) 
            break;
            arr[index] = parent;
            arr[parentIndex] = element;
            index = parentIndex
    
        }
      }
      extractMax(arr){
        let  max = arr[0];
        arr[0]= arr.pop()
        this.sinkDown(arr,arr.length,0)
       return max
      }
      sinkDown(arr,length,index){
        let   left = 2*index+1
              right = 2*index+2
              largest = index;
           // if left child is greater than parent
         if(left <= length &&  arr[left]>arr[largest] ){
            largest = left
            // console.log(arr[largest])
          }
         // if right child is greater than parent
         if(right <= length && arr[right]>arr[largest]) {
           largest = right
          //  console.log(arr[largest])
         }
        // swap
        if(largest !== index){
          
           [arr[largest],arr[index]] =
           [arr[index],arr[largest]]
          this.sinkDown(arr,arr.length,largest)
        }
     
     }
     heapSort(arr){
       let newArr=[]
       let length=arr.length
       let i=Math.floor((length-1)/2)
       let k=length-1
       while(i>=0){
         this.sinkDown(arr,length,i)
         i--
       }
       while(k>=0){
         [arr[0],arr[k]]=[arr[k],arr[0]]
         newArr[length-k-1]= this.extractMax(arr)
        // this.sinkDown(arr,k,0)
         k--
       }
       
       return newArr 
     }
     buildMaxHeap(arr,n){
      let startIdx = (n / 2) - 1; 
      for (let i = startIdx; i >= 0; i--) { 
        this.bubbleUp(arr); 
    } 
     } 
}

let h=new BinaryHeap()
let arr=[30,20,10,9,7,5];
console.log(h.extractMax(arr))
console.log(h.extractMax(arr))
console.log(h.extractMax(arr))
console.log(h.extractMax(arr))
console.log(h.extractMax(arr))
console.log(h.extractMax(arr))
h.ShowHeap(arr)