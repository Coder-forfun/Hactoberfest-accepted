/**
 * Converts Binary to Integer[base 10]
 * @param bin Binary number string
 */
var binToNum = function (bin) {
  return parseInt(bin, 2)
}
/**
 * Converts Integer to Binary[base 2]
 * @param num base 10 decimal number
 */
var numToBin = function (num) {
  return parseInt(num.toString(2), 10)
}
// console.log(binToNum("111")); //7
// console.log(numToBin(7)); //111
var lengthen = function (str, len) {
  return "" + "0".repeat(len - str.length) + str
}
/**
 * Returns steps to solve hanoi tower for certain number of Disks
 * Most efficient solution [(2^n)-1]
 * @param disks number of disks on start
 */
function hanoi(disks = 4) {
  let stateList = []
  let prevInst,
    newInst,
    state = [[...Array(disks).keys()], [], []]
  prevInst = "0".repeat(disks)
  // console.log(state);
  stateList.push(JSON.parse(JSON.stringify(state)))
  while (prevInst !== "1".repeat(disks)) {
    newInst = lengthen(numToBin(binToNum(prevInst) + 1).toString(), disks)
    follow(state, newInst, prevInst, stateList)
    // console.log(state);
    prevInst = newInst
  }
  return stateList
}
function follow(state, newInst, prevInst, stateList) {
  let trueDisk
  let newArr = newInst
      .split("")
      .reverse()
      .map((str) => parseInt(str)),
    prevArr = prevInst
      .split("")
      .reverse()
      .map((str) => parseInt(str))
  prevArr.forEach((disk, index) => {
    if (disk == 0 && newArr[index] == 1) {
      trueDisk = index
      move(trueDisk, state, stateList)
    }
  })
}
const move = (disk, state, stateList) => {
  for (let pegNo = 0; pegNo < state.length; pegNo++) {
    if (state[pegNo].includes(disk)) {
      state[pegNo].splice(state[pegNo].indexOf(disk), 1)
      switch (pegNo) {
        case 0: {
          if (isValidPeg(disk, 1, state)) state[1].push(disk)
          else state[2].push(disk)
          break
        }
        case 1: {
          if (isValidPeg(disk, 2, state)) state[2].push(disk)
          else state[0].push(disk)
          break
        }
        case 2: {
          if (isValidPeg(disk, 0, state)) state[0].push(disk)
          else state[1].push(disk)
          break
        }
      }
      state.forEach((peg) => peg.reverse())
      stateList.push(JSON.parse(JSON.stringify(state)))
      return
    }
  }
}
const isValidPeg = (disk, pegNo, state) =>
  state.length ? state[pegNo].every((val) => val > disk) : true
const mainHanoi = (disks) => (disks > 1 ? hanoi(disks) : [[[0], [], []]])
// mainHanoi(3);
console.log(mainHanoi(3))
