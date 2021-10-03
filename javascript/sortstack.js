    class Stack {
      constructor() {
        this.storage = [];
        this.counts = {
          push: 0,
          pop: 0,
          peek: 0,
          isEmpty: 0
        }
      }

      push(item) {
        this.counts.push += 1;
        this.storage.push(item);
      }

      pop() {
        this.counts.pop += 1;
        return this.storage.pop();
      }

      peek() {
        this.counts.peek += 1;
        return this.storage[this.storage.length - 1];
      }

      isEmpty() {
        this.counts.isEmpty += 1;
        return this.storage.length === 0;
      }

      printContents() {
        this.storage.forEach(elem => console.log(elem));
      }

      printCounts() {
        this.counts.total = 0;
        this.counts.total = Object.values(this.counts).reduce((r, v) => r + v, 0);
        console.log(this.counts);
      }
    }

    console.log("My implementation");

    const stack1 = new Stack();
    stack1.push(4);
    stack1.push(10);
    stack1.push(8);
    stack1.push(5);
    stack1.push(1);
    stack1.push(6);

    const sorted1 = sortStack1(stack1);
    sorted1.printContents();
    stack1.printCounts();
    sorted1.printCounts();

    console.log("Accepted implementation");

    const stack2 = new Stack();
    stack2.push(4);
    stack2.push(10);
    stack2.push(8);
    stack2.push(5);
    stack2.push(1);
    stack2.push(6);

    const sorted2 = sortStack2(stack2);
    sorted2.printContents();
    stack2.printCounts();
    sorted2.printCounts();

    function sortStack1(stack) {
      const sorted = new Stack();
      if (stack.isEmpty()) // always return a new instance
        return sorted;
      // add first element
      sorted.push(stack.pop());
      while (!stack.isEmpty()) {
        let removeCount = 0;
        const temp = stack.pop(); // element to add
        // move to other stack
        for (removeCount = 0; temp < sorted.peek(); removeCount += 1)
          stack.push(sorted.pop());
        // push new element
        sorted.push(temp);
        // push back to sorted
        for (let i = 0; i < removeCount; i += 1)
          sorted.push(stack.pop());
      }
      return sorted;
    }

    function sortStack2(stack) {
      sorted = new Stack();
      while (!stack.isEmpty()) {
        tmp = stack.pop();
        while (tmp < sorted.peek()) {
          stack.push(sorted.pop());
        }
        sorted.push(tmp);
      }
      return sorted;
    }
