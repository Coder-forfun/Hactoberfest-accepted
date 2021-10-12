const totalPrime = 10;

function getPrimes(n) {
  const arr = [];
  let i = 2;

  function isPrime(n) {
    if (n < 2) return false;
    for (let i = 2; i <= n - 2; i++) {
      if (n%i === 0) return false;
    }

    return true;
  }

  function firstPrime() {
    if (arr.length < n) {
      if (isPrime(i)) arr.push(i);
      i++;

      firstPrime();
    }
  }

  firstPrime();

  return arr;
}

console.log(`Primes Number counted: ${totalPrime}`);
console.log(`The primes: ${getPrimes(totalPrime)}`);