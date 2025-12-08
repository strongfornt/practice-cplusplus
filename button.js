const myWorker = new Worker("worker.js");

document.getElementById("total").addEventListener("click", () => {
    myWorker.postMessage("start work please")
    // console.log("Total calculated!");
});

myWorker.onmessage = function(message)  {
console.log("total is", message.data)
}


document.getElementById("color").addEventListener("click", () => {
    document.body.classList.toggle("blue");
    console.log("color toggle")
});

