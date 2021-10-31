function orderWith(arr, prop, order) {  
  if (!order || !order.length) order = [...new Set(arr.map(item => item[prop]))];

  const values = order.reduce((acc, v, i) => {
    acc[v] = i;
    return acc;
  }, {});

  return [...arr].sort((a, b) => {
    if (values[a[prop]] === undefined) return 1;
    if (values[b[prop]] === undefined) return -1;
    return values[a[prop]] - values[b[prop]];
  });
};

// Usage
const students = [
  { name: 'ram', class: 'v' },
  { name: 'sam', class: 'vi' },
  { name: 'jadu', class: 'iv' },
  { name: 'modhu', class: 'v' },
  { name: 'kanai', class: 'iv' },
  { name: 'pal', class: 'v' },
];
orderWith(students, 'class', ['iv']);

/* expected output
[
  { name: 'jadu', class: 'iv' },
  { name: 'kanai', class: 'iv' },
  { name: 'ram', class: 'v' },
  { name: 'modhu', class: 'v' },
  { name: 'pal', class: 'v' },
  { name: 'sam', class: 'vi' },
]
*/
