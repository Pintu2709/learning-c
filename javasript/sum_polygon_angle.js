function sum_polygon_angle([n, c, d, g]) {
  console.log("n=", n);
  console.log("arguments=", arguments);
  return (n - 2) * 180;
}

const sum = sum_polygon_angle([6, 3, 5, 6]);

console.log("sum=", sum);
