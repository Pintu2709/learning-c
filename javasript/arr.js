{
  const numArr = [1, 5, 14, 6, 7, 3, 53, 0, 345, 5, 6, 78, 9, 3, 12];

  //   numArr.forEach(function (value, index, arr) {
  //     console.log(value, arr, index);
  //   });
  const arr2 = [];
  const callBackFun = function (value, index, arr) {
    if (value > 10) {
      //   console.log("index:", index, "  value:", value);
      arr2.unshift(value);
      console.log(index, "arr2:", arr2);
      //   console.log("arr:", arr);
    }
  };

  numArr.forEach(callBackFun);
}
