"use strict";
let query = document.querySelector(".typing")
let text = query.innerHTML.split('');
query.innerHTML = '';

function frameLooper() {
  if (text.length) {
    query.innerHTML += text.shift();
  } else {
    clearTimeout(0);
  }
  setTimeout(frameLooper, 50);
}
