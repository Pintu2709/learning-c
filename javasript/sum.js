function sum() {
  let s = 0;
  for (let key in arguments) {
    let value = arguments[key];

    // console.log("value", value);
    s = s + value;
  }
  //   console.log(typeof arguments);
  //   console.log("sum:", s);
  return [s];
}

const add = sum(8, 8);

console.log("add=", add);

for (let i = 1; i < 10; i++) {
  console.log("i", i);
}

const multiplication = function (a) {
  return function (b) {
    return a * b;
  };
};

const result = multiplication(15)(12);
console.log("result:", result);

// 1. function can be assigned to variable
// 2. we can return funtion from a funtion
