// QUEUE METHODS IN JAVASCRIPT
// enqueue: Enter queue, add an element at the end.
// dequeue: Leave queue, remove the front element and return it.
// front: Get the first element.
// isEmpty: Determine whether the queue is empty.
// size: Get the number of element(s) in queue.


// Array in JavaScript has some attributes of queue, so we can use array to construct an example for queue:

function Queue() {
  var collection = [];
  this.print = function () {
    console.log(collection);
  }
  this.enqueue = function (element) {
    collection.push(element);
  }
  this.dequeue = function () {
    return collection.shift();
  }
  this.front = function () {
    return collection[0];
  }

  this.isEmpty = function () {
    return collection.length === 0;
  }
  this.size = function () {
    return collection.length;
  }
}

// PRIORITY QUEUE
// Queue has another advanced version. Allocate each element by priority and it will be sorted according to the priority level:

function PriorityQueue() {
  this.enqueue = function (element) {
    if (this.isEmpty()) {
      collection.push(element);
    } else {
      var added = false;
      for (var i = 0; i < collection.length; i++) {
        if (element[1] < collection[i][1]) {
          collection.splice(i, 0, element);
          added = true;
          break;
        }
      }
      if (!added) {
        collection.push(element);
      }
    }
  }
}

// Testing it out:

var pQ = new PriorityQueue();
pQ.enqueue([ gannicus , 3]);
pQ.enqueue([ spartacus , 1]);
pQ.enqueue([ crixus , 2]);
pQ.enqueue([ oenomaus , 4]);
pQ.print();


// Result: logs

// [
//   [  spartacus , 1 ],
//   [  crixus , 2 ],
//   [  gannicus , 3 ],
//   [  oenomaus , 4 ]
// ]