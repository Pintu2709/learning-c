function doLgin() {
  const email = document.getElementById("email").value;
  const password = document.getElementById("password").value;
  if (!email || !password) {
    document.getElementById("showError").innerHTML =
      "Please enter correct email and password";

    return;
  }

  console.info("email: ", email);
  console.info("password: ", password);
  const users = JSON.parse(localStorage.getItem("users"));
  console.log("users: ", users);
  if (!users) {
    document.getElementById("showError").innerHTML =
      "Please resiter first then login";

    return;
  }

  const isUserExist = users.filter(function (user) {
    return user.email === email && user.password === password;
  });

  if (!isUserExist || !isUserExist.length) {
    document.getElementById("showError").innerHTML =
      "Please enter correct email and password";
    return;
  }
  const loggedUSer = isUserExist[0];
  localStorage.setItem("currentUser", JSON.stringify(loggedUSer));
  window.location.href = "/Registration_Page2.html";
}
