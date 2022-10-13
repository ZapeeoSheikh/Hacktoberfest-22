funcationHadler();

async function funcationHadler(){
  console.log("H");
  await sleep(1000);
  console.log("e");
  await sleep(1000);
  console.log("l");
  await sleep(1000);
  console.log("l");
  await sleep(1000);
  console.log("o");
  await sleep(1000);
  console.log("W");
  await sleep(1000);
  console.log("o");
  await sleep(1000);
  console.log("r");
  await sleep(1000);
  console.log("l");
  await sleep(1000);
  console.log("d");
  await sleep(1000);
  console.log("Hello World");
  console.log("Thank you for your patience :) ");
}

function sleep(ms) {
  return new Promise(resolve => setTimeout(resolve, ms));
}
