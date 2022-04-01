import message from "./message.js";

document.getElementById("demo").innerHTML = message();
const colors = ["red", "yellow", "blue", "red", "black", "white"];
setInterval(function () {
  const color = colors[Math.floor(Math.random() * (6 - 1 + 1) + 1)];
  console.log("color", color, Math.floor(Math.random() * (6 - 1 + 1) + 1));
  document.getElementsByTagName("body")[0].style.backgroundColor = color;
}, 200);
